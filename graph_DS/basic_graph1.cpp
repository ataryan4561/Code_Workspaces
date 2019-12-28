#include<iostream>
#include<vector>
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
    Edge(){}
};
vector<vector<Edge*>> graph;
void addEdge(int u,int v,int w)
{
    if(u<0 || v<0 || u>=graph.size() || v>=graph.size())
    {
        return ;
    } 
    graph[u].push_back(new Edge(v,w));
    graph[v].push_back(new Edge(u,w));
}
void RemoveEdge(int u,int v)
{
    int i=-1;
    int j=-1;
    for(int k=0; k<graph[u].size(); k++)
    {
        if(graph[u][k]->v==v)
        {
            i=k;
            break;
        }
    }
    for(int k=0; k<graph[v].size(); k++)
    {
        if(graph[v][k]->v==u)
        {
            j=k;
            break;
        }
    }
    graph[u].erase(graph[u].begin()+i);
    graph[v].erase(graph[v].begin()+j);
}
void RemoveVtx(int u)
{
    for(int j=graph[u].size()-1; j>=0; j--)
    {
        RemoveEdge(graph[u][j]->v,u);
    }
}
bool hashpath(int src,int des,vector<bool> vis,string ans)
{
    vis[src]=true;
    if(src==des)
    {
        cout<<ans+to_string(des)<<endl;
        return true;
    }
    bool res=false;
    for(int i=0; i<graph[src].size(); i++)
    {
        int nbr=graph[src][i]->v;
        if(!vis[nbr])
        {
            res=res||hashpath(nbr,des,vis,ans+to_string(src)+"->");
        }
    }
    vis[src]=false;
    return res;
}
int allpath(int src,int des,vector<bool> vis,string ans)
{
    if(src==des)
    {
        cout<<ans+to_string(des)<<endl;
        return 1;
    }
    int count=0;
    vis[src]=true;
    for(int i=0; i<graph[src].size(); i++)
    {
        int nbr=graph[src][i]->v;
        if(!vis[nbr])
        {
            count+=allpath(nbr,des,vis,ans+to_string(src)+"->");
        }
    }
    vis[src]=false;
    return count;
}
void preOderPath(int src, int w, vector<bool> &vis, string ans)
{
    vis[src] = true; 
    cout << to_string(src) + " -> " + ans + to_string(src) + " @ " + to_string(w) << endl;

    for (int i = 0; i < graph[src].size(); i++)
    {
        int nbr = graph[src][i]->v;
        int wt = graph[src][i]->w;
        if (!vis[nbr])                                           
            preOderPath(nbr, w + wt, vis, ans + to_string(src)); 
    }

    vis[src] = false; 
}
int f=10000;
string fans="";
void smallestpathweight(int src,int des,int w,vector<bool> vis,string ans)
{
    if(src==des)
    {
        if(f>w)
        {
            f=w;
            fans=ans+to_string(des);
            return;
        }
        return;
    }
    vis[src]=true;
    for(int i=0; i<graph[src].size(); i++)
    {
        int nbr=graph[src][i]->v;
        int wt=graph[src][i]->w;
        if(!vis[nbr])
        {
            smallestpathweight(nbr,des,w+wt,vis,ans+to_string(src)+"->");
        }
    }
    vis[src]=false;
}
int f1=0;
string fans2="";
void longestpath(int src,int des,int w,vector<bool> vis,string ans)
{
    if(src==des)
    {
        if(f1<w)
        {
            f1=w;
            fans2=ans+to_string(des);
            return;
        }
        return;
    }
    vis[src]=true;
    for(int i=0; i<graph[src].size(); i++)
    {
        int nbr=graph[src][i]->v;
        int wt=graph[src][i]->w;
        if(!vis[nbr])
        {
            longestpath(nbr,des,w+wt,vis,ans+to_string(src)+"->");
        }
    }
    vis[src]=false;
}
class pair_path
{
public:
    int wt = 100000;
    string s = "";

    pair_path(int wt, string s)
    {
        this->wt = wt;
        this->s = s;
    }
    pair_path()
    {
    }
};
pair_path *lightestPath_01(int src, int dest, vector<bool> &vis)
{
    if(src==dest)
    {
        pair_path *o= new pair_path(0,to_string(src)+"");
        return o;
    }
    pair_path *Myans=new pair_path();
    vis[src]=true;
    for(int i=0; i<graph[src].size(); i++)
    {
        int nbr=graph[src][i]->v;
        int w=graph[src][i]->w;
        if(!vis[nbr])
        {
            pair_path *Myans2=lightestPath_01(nbr,dest,vis);
            if(Myans2->wt+w<Myans->wt)
            {
                   Myans->wt= Myans2->wt+w;
                   Myans->s=Myans2->s+to_string(src);
            }
        }
    }
    vis[src]=false;
    return Myans;
}
void hamintonianPathCycle(int src,int osrc,int cnt,int wt,vector<bool>& vis,string ans)
{
    if(cnt==graph.size()-1)
    {
        cout<<ans+to_string(src);
        for(int i=0; i<graph[src].size(); i++)
        {
            if(graph[src][i]->v==osrc)
            {
                cout<<"Harmintonian Cycle";
            }
        }
        cout<<endl;
        return;
    }
    vis[src]=true;
    for(int i=0; i<graph[src].size(); i++)
    {
        int nbr=graph[src][i]->v;
        int wt1=graph[src][i]->w;
        if(!vis[nbr])
        {
            hamintonianPathCycle(nbr,osrc,cnt+1,wt+wt1,vis,ans+to_string(src)+"->");
        }
    }
    vis[src]=false;
}
void display()
{
    for(int i=0; i<graph.size(); i++)
    {
        cout<<i<<"-> "<<"boss";
        for(int j=0; j<graph[i].size(); j++)
        {
            cout<<"( "<<graph[i][j]->v<<","<<graph[i][j]->w<<")";
        }
        cout<<endl;
    }
}
void solve()
{
    for(int i=0;i<7; i++)
    {
        vector<Edge*> ar;
        graph.push_back(ar);
    }
    vector<bool> visited (graph.size(),false);
    addEdge(0, 1, 10);
    addEdge(1, 2, 10);
    addEdge(2, 3, 40);
    addEdge(0, 3, 10);  
    addEdge(3, 4, 2);
    addEdge(4, 5, 2);
    addEdge(5, 6, 8);
    addEdge(4, 6, 3);
    addEdge(2, 5, 13);
    //RemoveEdge(0,3);
    //RemoveVtx(3);
    //hashpath(0,6,visited,"");
    //cout<<allpath(0,6,visited,"");
    //display();
    //smallestpathweight(0,6,0,visited,"");
    //cout<<fans<<"->"<<f<<endl;
    //longestpath(0,6,0,visited,"");
    //cout<<fans2<<"->"<<f1<<endl;
    //pair_path *ans = lightestPath_01(0, 6, visited);
    //cout << ans->s << " -> " << ans->wt << endl;
    hamintonianPathCycle(2,2,0,0,visited,"");
}
int main()
{
    solve();
}