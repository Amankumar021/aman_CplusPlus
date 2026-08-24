#include<iostream>

#include<queue>

using namespace std;

int main(){
    int n,e;
    cout<<"Enter number of vertices and edges:";
    cin>>n>>e;
    vector<int>adjlist[n];
    for(int i=1;i<=e;i++)
    {
        int u,v;
        cout<<"Enter edge "<<i<<":";
        cin>>u>>v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
    cout<<"Adjacency List:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Adjacency list of vertex "<<i<<" is:";
        for(int j=0;j<adjlist[i].size();j++)
        {
            cout<<adjlist[i][j]<<" , ";
        }
        cout<<endl;
    }
    queue<int>q;
    vector<int>visited(n,0);
    q.push(0);
    visited[0]=1;
    cout<<"BFS sortest Path is:";
    while(!Q.empty())
    {
        int x = Q.front();
        Q.pop();
        for(int i =0; i<AdjList[x].size(); i++){
            int y = AdjList[x][i];
            if(status[y]==-1)
            {
                status[y]=status[x+1];
                Q.push(y);
            }
        }
    }
}