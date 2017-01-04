#include<bits/stdc++.h>
typedef long long ll;
const long long mod = 4294967296;
#define INF 0x7fffffff //32λ���ֵ
//#define INF 0x3f3f3f3f3f3f3f3f longlong���ֵ
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
    if(step)//�ص�ǰ����ǰ��
        dfs(x+dirc[dir][0],y+dirc[dir][1],dir,step-1,cnt);
    else//�̻�ը�ѣ�������һ��
    {
        dfs(x,y,(dir-1+8)%8,a[cnt+1],cnt+1);//����45����
        dfs(x,y,(dir+1)%8,a[cnt+1],cnt+1);//����45����
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
