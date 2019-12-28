#include<iostream>
#include<vector>
#include<queue>
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
    Edge() {}
};
vector<vector<Edge*>> graph;
vector<vector<Edge*>> dgraph;
void addEdge(int u,int v,int w)
{
    if(u<0 || v<0 || v>=graph.size() || u>=graph.size())
    {
        return ;
    }
    graph[u].push_back(new Edge(v,w));
    graph[v].push_back(new Edge(v,w));
}
void addEdge2(int u,int v,int w)
{
    if(u<0 || v<0 || v>=dgraph.size() || u>=dgraph.size())
    {
        return ;
    }
    dgraph[u].push_back(new Edge(v,w));
    dgraph[v].push_back(new Edge(v,w));
}
void display()
{
    for (int i = 0; i < graph.size(); i++)
    {
        cout << i << " => ";
        for (int j = 0; j < graph[i].size(); j++)
        {
            cout << "( " << graph[i][j]->v << ", " << graph[i][j]->w << "), ";
        }
        cout << endl;
    }
}
void ddisplay()
{
    for (int i = 0; i < dgraph.size(); i++)
    {
        cout << i << " => ";
        for (int j = 0; j < dgraph[i].size(); j++)
        {
            cout << "( " << dgraph[i][j]->v << ", " << dgraph[i][j]->w << "), ";
        }
        cout << endl;
    }
}
class d_pair
{
    public:
    int vtx=0;
    int pvtx=0;
    int wt=0;
    int wsf=0;
    string psf="";
    d_pair(int vtx,int pvtx,int wt,int wsf,string psf)
    {
        this->vtx=vtx;
        this->pvtx=pvtx;
        this->wt=wt;
        this->wsf=wsf;
        this->psf=psf;
    }
    bool operator<(const d_pair &o)const
    {
        return this->wsf>o.wsf;
    }
};
void dijikstra (int src)
{
    priority_queue<d_pair> que;
    d_pair root(src,-1,0,0,to_string(src)+"");
    que.push(root);
    int dest=5;
    //bool ispath=false;
    vector<bool> vis(dgraph.size(),false);
    while(que.size()>0)
    {
        d_pair rpair=que.top();
        que.pop();
        if(vis[rpair.vtx])
        {
            continue;
        }
        if(rpair.vtx==dest )
        {
            //ispath=true;
            cout<<rpair.psf<<"->"<<rpair.wsf<<endl;
        }
        if(rpair.pvtx!=-1)
        {
            addEdge2(rpair.vtx,rpair.pvtx,rpair.wt);
        }
        vis[rpair.vtx]=true;
        for(Edge* e : graph[rpair.vtx])
        {
            if(!vis[e->v])
            {
                d_pair npair(e->v,rpair.vtx,e->w,rpair.wsf+e->w,rpair.psf+" "+to_string(e->v));
                que.push(npair);
                //vis[e->v]=true;
            }
        }
    }
    ddisplay();
}
class p_pair
{
    public:
    int vtx=0;
    int pvtx=0;
    int wt=0;
    int wsf=0;
    string psf="";
    p_pair(int vtx,int pvtx,int wt,int wsf,string psf)
    {
        this->vtx=vtx;
        this->pvtx=pvtx;
        this->wt=wt;
        this->wsf=wsf;
        this->psf=psf;
    }
    bool operator<(const p_pair &o)const
    {
        return this->wt>o.wt;
    }
};
void prims (int src)
{
    priority_queue<d_pair> que;
    d_pair root(src,-1,0,0,to_string(src)+"");
    que.push(root);
    int dest=5;
    //bool ispath=false;
    vector<bool> vis(dgraph.size(),false);
    while(que.size()>0)
    {
        d_pair rpair=que.top();
        que.pop();
        if(vis[rpair.vtx])
        {
            continue;
        }
        if(rpair.vtx==dest )
        {
            //ispath=true;
            cout<<rpair.psf<<"->"<<rpair.wsf<<endl;
        }
        if(rpair.pvtx!=-1)
        {
            addEdge2(rpair.vtx,rpair.pvtx,rpair.wt);
        }
        vis[rpair.vtx]=true;
        for(Edge* e : graph[rpair.vtx])
        {
            if(!vis[e->v])
            {
                d_pair npair(e->v,rpair.vtx,e->w,rpair.wsf+e->w,rpair.psf+" "+to_string(e->v));
                que.push(npair);
                //vis[e->v]=true;
            }
        }
    }
    ddisplay();
}
void solve()
{
    for (int i = 0; i < 6; i++)
    {
        vector<Edge *> ar;
        vector<Edge *>ar1;
        dgraph.push_back(ar1);
        graph.push_back(ar);
    }

    // addEdge(0, 1, 10);
    // addEdge(1, 2, 10);
    // addEdge(2, 3, 40);
    // addEdge(0, 3, 10);
    // addEdge(0, 3, 10);   
    // addEdge(3, 4, 2);
    // addEdge(4, 5, 2);
    // addEdge(5, 6, 8);
    // addEdge(4, 6, 3);
    // //addEdge(2, 5, 13);
    addEdge(0,1,5);
    addEdge(0,2,2);
    addEdge(1,2,8);
    addEdge(1,4,2);
    addEdge(1,3,4);
    addEdge(3,4,6);
    addEdge(3,5,3);
    addEdge(4,5,1);
    addEdge(2,4,7);
    }
int main()
{
    solve();
    prims(0);
    dijikstra(0);
}