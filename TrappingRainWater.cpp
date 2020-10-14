class Solution
{
public:
    int trap(vector<int> &height)
    {
        int left[height.size()], right[height.size()], max = 0, ans = 0;
        for (int i = 0; i < height.size(); i++)
        {
            if (height[i] > max)
                max = height[i];
            left[i] = max;
        }
        max = 0;
        for (int i = height.size() - 1; i >= 0; i--)
        {
            if (height[i] > max)
                max = height[i];
            right[i] = max;
        }
        for (int i = 0; i < height.size(); i++)
            ans += min(left[i], right[i]) - height[i];
        return ans;
    }
};
