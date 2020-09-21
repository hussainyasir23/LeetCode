class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)
            return "";
        string ans = strs[0];
        for(int i=1;i<strs.size();i++){
            int j=0;
            while(j<ans.size() && j<strs[i].size()){
                if(strs[i][j]!=ans[j])
                    break;
                j++;
            }
            ans=ans.substr(0,j);
        }
        return ans;
    }
};
