#include<bits/stdc++.h>
typedef long long ll;
const long long mod = 4294967296;
#define INF 0x7fffffff //32位最大值
//#define INF 0x3f3f3f3f3f3f3f3f longlong最大值
#define maxn 1000000+10
using namespace std;
char st[6];
int main()
{
    int T,N,ans=0,ok=1;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%s",&N,st);
        if((ans==0&&st[0]!='S')||(ans==20000&&st[0]!='N'))
            ok=0;
        if(st[0]=='S')
            ans+=N;
        else if(st[0]=='N')
            ans-=N;
        if(ans<0||ans>20000)
            ok =0;
        //cout<<ans<<endl;
    }
    if(ok!=1||ans!=0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}
