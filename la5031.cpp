#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<utility>
#include<cstdlib>

using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define me(a,b) memset(a,sizeof(a),b);
typedef Edge pair<int,int>;
const int maxn=22222;
const int maxm=66666;
const int maxc=666666;
//
int N,M;
//
Edge edge[maxm];
bool edgeExist[maxm];
int values[maxn];
struct Cmd{
    char op;
    int x1,x2;
}cmd[maxc];
struct Node{
    Node *ch[2];
    int r;
    int v;
    int s;
    Node(int v):(v){
        ch[0]=ch[1]=NULL;
        s=1;
        r=rand();
    }

    bool operator <()
    {

    }
    
    void maintain()
    {
        s=1;
        if(ch[0]!=NULL) s+=ch[0]->s;
        if(ch[1]!=NULL) s+=ch[1]->s;
    }
};

void rotate(Node *o,int d)
{
    
}

void insert(Node* o,int x)
{
    if(o==NULL) o=new Node(x);
    else {
        //int d=o->cmp(x); //可能会有相同的节点
        int d=(x<o->v? 0:1);
        insert(o,d);
        if(o->ch[d]->r>o->r) roate(o,d^1);
    }
    
    o->maintain();
}

void remove(Node* o,int x)
{
    int d=o->cmp(x);
    if(d==-1)
    {
        if(o->ch[0]!=NULL&&o->ch[1]!=NULL) 
        {
            int d2=(o->ch[0]->r<o->ch[1]->r)? 0:1;
            rotate(o,d2);
            remove(o->ch[d2],x);
        }
        else {
            if(o->ch[0]==NULL) o=o->ch[1];
            else if(o->ch[1]==NULL) o=o->ch[0];
            //直接用孩子节点替代它,不会出现堆节点不满足性质
            o=NULL;
            delete o;
        }
    }
    else remove(o->ch[d],x);

    if(o!=NULL) o->maintain();
}

int kth(Node *o,int k)
{
    if(o==NULL||k<=0||o->s<k) return 0;
    int s=((o->ch[1] ==NULL)? 0:o->ch[1]->s );
    if(k==s+1) return o->v;
    else if(k<=s) return kth(o->ch[1],k);
    else return kth(o->ch[0],k-s-1);
}

//un
int pre[maxn];
Node* node[maxn];

int unfind(int x)
{
    return pre[x]==x ? x:unfind(pre[x]);
}

void uninit(int n)
{
    rep(i,n+1) pre[i]=i;
}

void mergeto(Node* &src,Node* &des)
{

}

void remove()
{

}
void add_Edge(int x)
{
    int ru=unfind(x.first),rv=unfind(x.second);
    if(ru==rv) return;
    if(node[ru]->s>node[rv]->s) {
        pre[]
    }
}

int query(int x,int k)
{
    int rx=unfind(x);
    return kth()
}

void chage_value()
{
    
}
int main()
{
    while(cin>>N>>M)
    {
        rep(i,N) scanf("%d",&values[i]);
        rep(i,N) {
            int u,v;scanf("%d",&u,&v);
            edge[i]=Edge(u,v);
        }

        char op;
        int cnt=0;
        me(edgeExist,1);
        while(cin>>op)
        {
            if(op=='E') break;
            else cmd[cnt].op=op; 
            if(op=='D') scanf("%d",&cmd[cnt].x1);
            else  scanf("%d",&)

         }
    }
    return 0;
}
