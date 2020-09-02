//  Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
//    Example:
//      Input: [-2,1,-3,4,-1,2,1,-5,4],
//      Output: 6
//    Explanation: [4,-1,2,1] has the largest sum = 6.
//    Follow up:
//  If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.empty()) return 0;
        else{
            int sum=0;
            int res=0;
            int mnumber=nums[0];
            for(int i=0; i<nums.size(); i++){
                sum+=nums[i];
                mnumber=max(mnumber,nums[i]);
                res=max(res,sum);
                sum=max(sum,0);
            }
            if(mnumber<0) return mnumber;
            return res;
        }
    }
};
