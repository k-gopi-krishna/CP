#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <set>
#include <climits>
#define inf INT_MAX
using namespace std;
class graph{
    int v;
    list<pair<int,int>>*adj;
    public:
        graph(int v){
            this->v=v;
            adj=new list<pair<int,int>>[v];
        }
        void insert(int v1,int v2,int cost){
            adj[v1].push_back({v2,cost});
            adj[v2].push_back({v1,cost});
        }
        void dij(int src){
            set<pair<int,int>>st;
            vector<int>dist(v,inf);
            //first cost then vertices
            st.insert({0,src});
            dist[src]=0;
            while(!st.empty()){
                pair<int,int>temp=*(st.begin());
                st.erase(st.begin());
                int u=temp.second;
                list<pair<int,int>>::iterator it;
                for(it=adj[u].begin();it!=adj[u].end();it++){
                    int vert=(*it).first;
                    int cost=(*it).second;
                    if(dist[vert]>dist[u]+cost){
                        if(dist[vert]!=inf)st.erase(st.find({dist[vert],vert}));
                        dist[vert]=dist[u]+cost;
                        st.insert({dist[vert],vert});


                    }
                }
            }
            for(int i=0;i<v;i++){
                cout<<i<<"\t"<<dist[i]<<endl;
            }


        }


};
int32_t main()
{
        int v = 9;
        graph g(v);
        g.insert(0, 1, 4);
        g.insert(0, 7, 8);
        g.insert(1, 2, 8);
        g.insert(1, 7, 11);
        g.insert(2, 3, 7);
        g.insert(2, 8, 2);
        g.insert(2, 5, 4);
        g.insert(3, 4, 9);
        g.insert(3, 5, 14);
        g.insert(4, 5, 10);
        g.insert(5, 6, 2);
        g.insert(6, 7, 1);
        g.insert(6, 8, 6);
        g.insert(7, 8, 7);
        g.dij(0);
        return 0;
}


void prims()
    {
        vector<bool> visited(v, 0);
        int ans = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
        q.push({0, 0});
        while (!q.empty())
        {
            auto best = q.top();
            q.pop();
            int vert = best.second;
            int weight = best.first;
            if (visited[vert])
                continue;
            ans += weight;
            visited[vert] = 1;
            for (auto x : adj[vert])
            {
                if (!visited[x.first])
                {
                    q.push({x.second, x.first});
                }
            }
        }
    }