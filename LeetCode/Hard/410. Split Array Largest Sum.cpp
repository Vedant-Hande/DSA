class Solution
{
public:
    bool isPossible(vector<int> &nums, int m, int max_pages)
    {
        int students_needed = 1;
        long long current_pages = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > max_pages)
            {
                return false;
            }

            if (current_pages + nums[i] <= max_pages)
            {
                current_pages += nums[i];
            }
            else
            {
                students_needed++;
                current_pages = nums[i];
            }
        }
        return students_needed <= m;
    }

    int splitArray(vector<int> &nums, int k)
    {
        if (k > nums.size())
        {
            return -1;
        }

        long long sum = 0;
        int max_element = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            max_element = max(max_element, nums[i]);
        }

        // Problem 1 Fix: The search range starts from the largest element.
        int start = max_element;
        int end = sum;
        int ans = -1;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (isPossible(nums, k, mid))
            {
                ans = mid;
                end = mid - 1; // Try for an even better (smaller) answer
            }
            else
            {
                start = mid + 1; // The max page limit is too small, need to increase it
            }
        }
        return ans;
    }
};