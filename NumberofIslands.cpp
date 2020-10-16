class Solution {
public:
    void dfs(vector<vector<char>>& grid, int i, int j, int n, int m){
        if(!(i>=0 && i<n && j>=0 && j<m && grid[i][j]=='1'))
            return;
        int row[] = { 1, -1, 0, 0 };  
        int col[] = { 0, 0, 1, -1 }; 
        grid[i][j] = '0';
        for(int k=0;k<4;k++)
            dfs(grid, i+row[k], j+col[k],n,m);
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    ans++;   
                    dfs(grid,i,j,grid.size(),grid[0].size());
                }
            }
        }
        return ans;
    }
};
