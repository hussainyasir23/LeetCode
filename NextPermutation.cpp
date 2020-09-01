
//  Find the largest index k such that nums[k] < nums[k + 1]. If no such index exists, just reverse nums and done.
//  Find the largest index l > k such that nums[k] < nums[l].
//  Swap nums[k] and nums[l].
//  Reverse the sub-array nums[k + 1:]
//    Complexity Analysis
//        Time complexity : O(n)O(n). In worst case, only two scans of the whole array are needed.
//        Space complexity : O(1)O(1). No extra space is used. In place replacements are done.

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    	int n = nums.size(), k, l;
    	for (k = n - 2; k >= 0; k--)
            if (nums[k] < nums[k + 1])
                break;
    	if (k < 0)
    	    reverse(nums.begin(), nums.end());
        else
        {
    	    for (l = n - 1; l > k; l--)
                if (nums[l] > nums[k])
                    break;
    	    swap(nums[k], nums[l]);
    	    reverse(nums.begin() + k + 1, nums.end());
        }
    }
}; 
