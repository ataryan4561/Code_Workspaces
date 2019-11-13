#include<iostream>
#include<string>
#include<vector>
using namespace std;
string removehi(string str)
{
    if(str.length()==0) return "";
    char ch=str[0];
    if(str.length()>1 && str.substr(0,2)=="hi")
    return removehi(str.substr(2));
    else
    return ch+removehi(str.substr(1));
    
}
string removehinothit(string str)
{
    if(str.length()==0) return"";
    char ch=str[0];
    if(str.length()>1 && str.substr(0,2)=="hi" &&str.substr(0,3)!="hit")
    return removehinothit(str.substr(2));
    else
    return ch+removehinothit(str.substr(1));
}
string sameremove(string str)
{
    if(str.length()==0) return"";
    char ch=str[0];
    if(str.length()>1 && str[0]==str[1])
    return sameremove(str.substr(1));
    else
    return ch+sameremove(str.substr(1));
}
vector<string> components(string str)
{
    if(str.length()==0)
    {
        vector<string> base;
        base.push_back("");
        return base;
    }
    char ch=str[0];
    vector<string> smalla=components(str.substr(1));
    vector<string> mans(smalla);
    for(string s : smalla)
    mans.push_back(ch+s);

    return mans;
}

void basic(string h)
{
    cout<<h<<endl;
}
void bb (vector <string> s)
{
    for(string s1 : s)
    {
        cout<<s1<<" ";
    }
    cout<<endl;
}
vector<string> movepath(int sc,int sr,int ec, int er)
{
    sc=sr=0;
}
int main()
{
    string str="ihhihihhihihihhihiihhhihi";
    string str2="hithithithihitti";
    string y="aaaabccdefghhh";
    string d="abcd";
    vector<string> s;
    s=(components(d));
    string g=removehinothit(str2);
    string f=sameremove(y);
    string h=removehi(str);
    bb(s);
    basic(g);
    basic(f);
    basic(h);
}