class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> product(nums.size());
        product[0]=product[nums.size()-1]=1;
        for(int i=1;i<nums.size();i++)
            product[i]=product[i-1]*nums[i-1];
        int temp = 1;
        for(int i=nums.size()-1;i>=0;i--){
            product[i] *= temp;
            temp *= nums[i];
        }
        return product;
    }
};
