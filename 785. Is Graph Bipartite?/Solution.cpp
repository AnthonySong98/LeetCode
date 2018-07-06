//dfs
class Solution {
public:
    void dfs(vector<vector<int>>& graph,int v,vector<int> &visited,int b){
        
        if(visited[v]==0) {visited[v]=b; }
        //else if(visited[v]!=0)
        {
           
            for(int i=0;i<graph[v].size();i++){
                
                if(visited[graph[v][i]]==0)
                 dfs(graph,graph[v][i],visited,b%2+1);
            }
        }
        
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int> visited(graph.size(),0);
        if(graph.size()==0) return false;
        int b=1;
        dfs(graph,0,visited,b);
        b=1;
        for(int p=0;p<graph.size();p++)
        {
            if(visited[p]==0) 
            dfs(graph,p,visited,b);
        }
        
        int flag=1;
        for(int j=0;j<graph.size();j++)
        {
            for(int k=0;k<graph[j].size();k++)
               // if()
                if(visited[graph[j][k]]==visited[j]) flag=0;
        }
      
        
        if(flag==1) return true;
        else return false;
      
    }
};



//bfs
class Solution {
public:
    void bfs(vector<vector<int>>& graph,vector<int>& visited,int s){
        queue<int> Q;
        Q.push(s);
    
        int b=1;
        visited[s]=b;
        while(!Q.empty())
        {
            int v=Q.front();
            Q.pop();
            b=visited[v];
            b=b%2+1;
            for(int i=0;i<graph[v].size();i++)
            {
                if(visited[graph[v][i]]==0)
                {visited[graph[v][i]]=b;    
                    Q.push(graph[v][i]);
                }
            }
        }
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int> visited(graph.size(),0);
        if(graph.size()==0) return false;
        
        for(int p=0;p<graph.size();p++)
        {
            if(visited[p]==0) 
            bfs(graph,visited,p);
        }
        
        int flag=1;
        for(int j=0;j<graph.size();j++)
        {
            for(int k=0;k<graph[j].size();k++)
               // if()
                if(visited[graph[j][k]]==visited[j]) flag=0;
        }
      
        
        if(flag==1) return true;
        else return false;
    }
};