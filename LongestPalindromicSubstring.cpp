class Solution {
public:
    string longestPalindrome(string s) {
        string ans = "";
        for(int i=0;i<s.size();i++)
            for(int j=i;j<s.size();j++)
                if(j-i+1>ans.size()){
                    int m = i, n = j;
                    bool f = true;
                    while(m<n){
                        if(s[m]!=s[n]){
                            f = false;
                            break;
                        }
                        m++;
                        n--;
                    }
                    if(f)
                        ans = s.substr(i,j-i+1);;
                }
        return ans;
    }
};
