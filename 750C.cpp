#include<bits/stdc++.h>
typedef long long ll;
const long long mod = 4294967296;
#define INF 0X3f3f3f3f //32位最大值
//#define INF 0x3f3f3f3f3f3f3f3f longlong最大值
#define maxn 1000000+10
using namespace std;

int main()
{
	int t;
	cin>>t;
	int r,div;
	int maxi=-INF,mini=INF;
	int c=0;
	while(t--)
    {
        cin>>r>>div;
        if(div==1)
        {
            maxi=max(maxi,1900-c);
        }
        if(div==2)
        {
            mini=min(mini,1899-c);
        }
        c+=r;
    }
    if(maxi>mini)
        cout<<"Impossible"<<endl;
    else if(mini==INF)
        cout<<"Infinity"<<endl;
    else
        cout<<mini+c<<endl;
    //cout<<"Hello world!"<<endl;
    return 0;
}
