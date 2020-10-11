class Solution
    {
    public:
        vector<vector<int>> kClosest(vector<vector<int>> &points, int K)
        {
            vector<pair<double, pair<int, int>>> st;
            vector<vector<int>> ans;
            for (int i = 0; i < points.size(); i++)
                st.push_back(make_pair(sqrt((double)points[i][0] * points[i][0] + points[i][1] * points[i][1]), make_pair(points[i][0], points[i][1])));
            sort(st.begin(), st.end());
            for (int i = 0; i < K; i++)
            {
                vector<int> ans1;
                ans1.push_back(st[i].second.first);
                ans1.push_back(st[i].second.second);
                ans.push_back(ans1);
            }
            return ans;
        }
    };
