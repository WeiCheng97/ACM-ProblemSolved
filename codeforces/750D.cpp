#include<bits/stdc++.h>
typedef long long ll;
const long long mod = 4294967296;
#define INF 0x7fffffff //32位最大值
//#define INF 0x3f3f3f3f3f3f3f3f longlong最大值
#define maxn 305
using namespace std;

bool visited[maxn][maxn][8][6][32];
int n,a[32];
bool mat[maxn][maxn];
int dirc[][2]= {{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1},{-1,0},{-1,1}};

void dfs(int x,int y,int dir,int step,int cnt)
{
    if(visited[x][y][dir][step][cnt] || cnt>n)
        return ;
    visited[x][y][dir][step][cnt]=1;
    mat[x][y]=1;
    if(step)//沿当前方向前进
        dfs(x+dirc[dir][0],y+dirc[dir][1],dir,step-1,cnt);
    else//烟花炸裂，进入下一层
    {
        dfs(x,y,(dir-1+8)%8,a[cnt+1],cnt+1);//往左45°找
        dfs(x,y,(dir+1)%8,a[cnt+1],cnt+1);//往右45°找
    }
}

int main()
{
    cin>>n;
    memset(mat,0,sizeof(mat));
    memset(visited,0,sizeof(visited));
    for(int i=1; i<=n; ++i)
        scanf("%d",&a[i]);
    dfs(150,150,0,a[1]-1,1);
    int ans=0;
    for(int i=0; i<=300; ++i)
        for(int j=0; j<=300; ++j)
            if(mat[i][j])
                ans++;
    printf("%d\n",ans);
    return 0;
}
