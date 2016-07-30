#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<utility>

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
