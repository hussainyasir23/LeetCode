class Solution {
public:
    int minFlipsMonoIncr(string S) {
        int N = S.length();
        int P[N+1];
        memset(P,0,sizeof(P));
        for (int i = 0; i < N; ++i)
            P[i+1] = P[i] + (S[i] == '1' ? 1 : 0);
        int ans = INT_MAX;
        for (int j = 0; j <= N; ++j) 
            ans = min(ans, P[j] + N-j-(P[N]-P[j]));
        return ans;
    }
};
/*Basically we go through string and found out how much 1 before index much be flipped to 0 and how much 0 after index need to be flipped to 1. adds them up and get min for result*/
