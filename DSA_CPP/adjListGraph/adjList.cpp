#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main()
{
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
            cout<<adjlist[i][j]<<" ";
        }
        cout<<endl;
    }
    queue<int>q;
    vector<int>visited(n,0);
    q.push(0);
    visited[0]=1;
    cout<<"BFS Traversal is:";
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        cout<<x<<" ";
        for(auto it:adjlist[x])
        {
            if(!visited[it])
            {
                q.push(it);
                visited[it]=1;
            }
        }
    }

    

}