//BFS. 4ms
class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        if(n==0) return false;
        vector<bool> visited(n,false);
        queue<int> Q;
        Q.push(0);
        while(!Q.empty()){
            int current=Q.front();
            Q.pop();
            if(visited[current]==false){
                visited[current]=true;
                for(int k=0;k<rooms[current].size();k++){
                    if(visited[rooms[current][k]]==false){
                        Q.push(rooms[current][k]);
                    }
                }
            }
        }
        int cnt=0;
        for(int j=0;j<n;j++)
            if(visited[j]==false) return false;
        return true;
    }
};

//DFS.  4ms
class Solution {
public:
    void DFS(vector<vector<int>>& rooms,int v,vector<bool>& visited){
        visited[v]=true;
        for(int i=0;i<rooms[v].size();i++){
            if(visited[rooms[v][i]]==false){
                DFS(rooms,rooms[v][i],visited);
            }
        }
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        if(rooms.size()==0) return false;
        vector<bool> visited(rooms.size(),false);
        DFS(rooms,0,visited);
        for(int i=0;i<rooms.size();i++)
            if(visited[i]==false) return false;
        return true;
    }
};