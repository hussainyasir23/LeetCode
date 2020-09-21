class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=1)
            return nums.size();
        for(int i=0;i<nums.size()-1;i++)
            if(nums[i]==nums[i+1]){
                int j;
                for(j=i+1;j<nums.size();j++){
                    if(nums[j]!=nums[i])
                        break;
                }
                nums.erase(nums.begin()+i+1,nums.begin()+j);
            }
        return nums.size();
    }
};
