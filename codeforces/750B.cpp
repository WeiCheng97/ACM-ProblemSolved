#include<bits/stdc++.h>
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
        printf("NO\n");
    else
        printf("YES\n");
    return 0;
}