class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return 0;
        long long a = 0, y=x;
        while(x>0){
            a = a * 10 + (x % 10);
            x /= 10;
        }
        return y == a ? 1 : 0;
    }
};
