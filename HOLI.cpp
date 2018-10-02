#include<bits/stdc++.h>
using namespace std;
int main()
{
    class Graph
    {
        public:
        int V;
        unordered_map<int,list<pair<int,int> > >m;
        Graph(int v)
        {
            V=v;
        }
    }

    void addEdge(int u,int v,int wt)
    {
        m[u].push_back(make_pair(v,wt));
        m[v].push_back(make_pair(u,wt));
    }

    int dfsHelper(int s,bool *visited,int &ans)
    {
        visited[s]=true;
        int subTreeSize=1;
        int size=0;
        for (auto nbrPair:m[s])
        {
            int v=nbrPair.first;
            int wt=nbrPair.second;
            if(!visited[v])
            {
                size=dfsHelper(v,visited,ans);
                ans+=2*wt*min(size,V-size);
                subTreeSize+=size;
            }
        }
        return subTreeSize;
    }

};
