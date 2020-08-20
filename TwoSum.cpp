/*
    Given an array of integers, return indices of the two numbers such that they add up to a specific target.
    You may assume that each input would have exactly one solution, and you may not use the same element twice.
    Example:
        Given nums = [2, 7, 11, 15], target = 9,
        Because nums[0] + nums[1] = 2 + 7 = 9,
        return [0, 1].
    Approach:
        While we iterate and inserting elements into the table, we also look back to check if current element's complement already exists in the table.
        If it exists, we have found a solution and return immediately.
    Complexity Analysis:
        Time complexity : O(n). We traverse the list containing nn elements only once. Each look up in the table costs only O(1) time.
        Space complexity : O(n). The extra space required depends on the number of items stored in the map, which stores at most n elements.
*/

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> m;
        vector<int> ans(2);
        for (int i = 0; i < nums.size(); i++)
        {
            int x = target - nums[i];
            if (m.find(x) != m.end())
            {
                ans[0] = m.at(x);
                ans[1] = i;
                return ans;
            }
            m.insert(make_pair(nums[i], i));
        }
        return ans;
    }
};
