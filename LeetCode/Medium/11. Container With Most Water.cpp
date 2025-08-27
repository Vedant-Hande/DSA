class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int maxWater = 0, lp = 0, rp = height.size() - 1;

        while (lp < rp)
        {
            int wdt = rp - lp;
            int hgt = min(height[lp], height[rp]);
            int containWtr = wdt * hgt;
            maxWater = max(maxWater, containWtr);
            if (height[lp] < height[rp])
            {
                lp++;
            }
            else
            {
                rp--;
            }
        }
        return maxWater;
    }
};