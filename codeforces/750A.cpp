#include<bits/stdc++.h>
typedef long long ll;
const long long mod = 4294967296;
#define INF 0x7fffffff //32位最大值
//#define INF 0x3f3f3f3f3f3f3f3f longlong最大值
#define maxn 1000000+10
using namespace std;
int n,k;
int main()
{
    //freopen("C:\\Users\\Weicheng\\Desktop\\in.txt","r",stdin);
    scanf("%d%d",&n,&k);
    int sum=240-k;
    int ans=0;
    for(int i=1; i<=n; i++)
    {
        if(i*(i*5+5)/2>sum)
        {
            ans=i;
            break;
        }
    }
    if(ans!=0)
        printf("%d\n",ans-1);
    else
        printf("%d\n",n);
    return 0;
}
