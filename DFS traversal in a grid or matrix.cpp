void dfs(vector<vector<int>>& grid,int i,int j){
    if(i<0 || i>=n || j<0 || j>=m || (grid[i][j] is visited)){
        return;
    }

    grid[i][j] = visited;
    dfs(grid,i+1,j);
    dfs(grid,i-1,j);
    dfs(grid,i,j+1);
    dfs(grid,i,j-1);
}
