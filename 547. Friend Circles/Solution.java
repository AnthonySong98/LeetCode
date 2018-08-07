class Solution {
    public void dfs(int[][] M,boolean[] visited,int n){
        for(int i=0;i<M[0].length;i++){
            if(visited[i]==false&&M[n][i]==1){
                visited[i] = true;
                dfs(M,visited,i);
            }
        }
    }
    
    public int findCircleNum(int[][] M) {
        boolean[] visited = new boolean[M[0].length];
        int cnt=0;
        for(int i=0;i<M[0].length;i++){
            if(visited[i]==false){
                dfs(M,visited,i);
                cnt++;
            }
        }
        return cnt;
    }
}