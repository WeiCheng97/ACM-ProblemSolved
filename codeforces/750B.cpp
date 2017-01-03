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
    int T,N,cut = 0,ok = 1;
    scanf("%d",&T);
    while(T--){
        scanf("%d%s",&N,st);
        if((cut == 0 && st[0] != 'S') || (cut == 20000 && st[0] != 'N'))
            ok = 0;
        if(st[0] == 'S')
            cut += N;
        else if(st[0] == 'N')
            cut -= N;
        if(cut < 0 || cut > 20000)
            ok = 0;
    }
    if(!ok || cut != 0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}