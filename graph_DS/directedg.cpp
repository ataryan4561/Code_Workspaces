#include<iostream>
#include<vector>
#include<queue>
#include<list>
using namespace std;
class Edge
{
    public:
    int v=0;
    int w=0;
    Edge(int v,int w)
    {
        this->v=v;
        this->w=w;
    }
    Edge () {}
};
vector<vector<Edge*>> graph;
void addEdge(int u,int v,int w)
{
    if(u<0 ||v<0 || u>=graph.size() || v>=graph.size())
    {
        return;
    }
    graph[u].push_back(new Edge(v,w));
}
void khans_incoming(int start,vector<int> &cc,vector<bool> &vis)
{
    // cout<<start<<endl;
    if(!vis[start])
    {
        vis[start]=true;
        for(Edge* e: graph[start])
        {
        cc[e->v]=cc[e->v]+1;
        //cout<<e->v<<endl;
        khans_incoming(e->v,cc,vis);
        }
    }
}
void khans_add()
{
    vector<bool> visi(graph.size(),false);
    vector<int> coming(graph.size(),0);
    vector<bool> newvisi(graph.size(),false);
    vector<int> newans;
    for(int i=0; i<graph.size(); i++)
    {
        if(!visi[i])
        {
            khans_incoming(i,coming,visi);
        }
    }
    // for(int i=0; i<graph.size(); i++)
    // {
    //     cout<<coming[i]<<" ";
    // }
    // cout<<endl;
    for(int i=0; i<graph.size(); i++)
    {
        if(coming[i]==0)
        {
            newans.push_back(i);
        }
    }
    // for(int i=0; i<newans.size(); i++)
    // {
    //     cout<<newans[i]<<" ";
    // }
    // cout<<endl;
    for(int i=0; i<newans.size(); i++)
    {
        cout<<newans[i]<<" ";
        newvisi[newans[i]]=true;
        for(Edge* e : graph[newans[i]])
        {
            coming[e->v]=coming[e->v]-1;
            if(!newvisi[e->v] && coming[e->v]==0)
            {
                newans.push_back(e->v);
            }
        }
    }
}
bool topologicalSort_(int src, vector<int> &st, vector<bool> &vis,vector<bool> &cycle)
{
    bool res=false;
    vis[src] = true;
    cycle[src]=true;
    for (Edge *e : graph[src])
    {
        if (!vis[e->v])
            res=res || topologicalSort_(e->v, st, vis,cycle);
        else if(cycle[e->v]) return true;
    }
    //post area.
    st.push_back(src);
    cycle[src]=false;
    return res;
}

void topologicalSort(){
    vector<int> st;
    vector<bool> vis(graph.size(),false);
    vector<bool> cycle(graph.size(),false);

    bool res=true;
    for(int i=0;i<graph.size() && res;i++){
        if(!vis[i]){
          if(topologicalSort_(i,st,vis,cycle)) res=false;  
        }
    }

    for(int i=st.size()-1;i>=0 && res;i--){
        cout<<st[i]<<" ";
    }
}
void display()
{
    for(int i=0; i<graph.size(); i++)
    {
        cout<<i<<"->";
        for(int j=0; j<graph[i].size(); j++)
        {
            cout<<"("<<graph[i][j]->v<<","<<graph[i][j]->w<<")"<<""<<",";
        }
        cout<<endl;
    }
}
void solve()
{
    for(int i=0; i<8; i++)
    {
        vector<Edge*> ar;
        graph.push_back(ar);
    }
    // addEdge(0, 1, 10);
    // addEdge(1, 2, 10);
    // addEdge(2, 3, 40);
    // addEdge(0, 3, 10);  
    // addEdge(3, 4, 2);
    // addEdge(4, 5, 2);
    // addEdge(5, 6, 8);
    // addEdge(4, 6, 3);
    // //addEdge(2, 5, 13);
    addEdge(7,5,0);
    addEdge(7,6,0);
    addEdge(5,4,0);
    addEdge(6,4,0);
    addEdge(6,3,0);
    addEdge(5,2,0);
    addEdge(2,1,0);
    addEdge(3,1,0);
    addEdge(1,0,0);
    //topologicalSort();
    //display();
    //khans_add();
}
int main(int argc, const char** argv) {
    solve();
}