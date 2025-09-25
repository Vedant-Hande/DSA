class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start = 0, end = nums.size() - 1;

        if (start == end) {
            return nums[start];
        }

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (mid == 0 && nums[0] != nums[mid + 1]) {
                return nums[mid];
            }

            if (mid == nums.size() - 1 && nums[nums.size() - 1] != nums[nums.size() - 2]) {
                return nums[mid];
            }

            if (nums[mid - 1] != nums[mid] && nums[mid + 1] != nums[mid]) {
                return nums[mid];
            }
            else if (mid % 2 == 0) {
                if (nums[mid] == nums[mid - 1]) {
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
            }
            else {
                if (nums[mid] == nums[mid - 1]) {
                    start = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};