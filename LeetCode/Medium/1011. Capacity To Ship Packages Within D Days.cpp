class Solution {
public:
    
    bool isPossible(vector<int>& weights, int days, int capacity)
    {
        int days_required = 1 , package_shipped = 0;

        for(int weight : weights)
        {
            if(weight > capacity)
            {
                return false;
            }
            if(package_shipped + weight <= capacity)
            {
                package_shipped += weight;
            }
            else 
            {
                days_required++;
                package_shipped = weight;
            }
        }
        return days_required <= days;
    }


    int shipWithinDays(vector<int>& weights, int days) {
        int start =*std::max_element(weights.begin(), weights.end());
        int end = std::accumulate(weights.begin(), weights.end(),0);
        
        int ans = end;
        while( start <= end )
        {
            int mid = start + ( end - start ) / 2;
            if (isPossible(weights, days, mid))
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return ans;
    }
};