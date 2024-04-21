//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              cin>>n;
#define scc(c)	            cin>>c;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  cout<<endl;
#define md                  1000000007
#define inf                 1e18
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)



#define N 100006
vector<ll>nd[N];
bool vis[N];
double ans[N];

void dfs(ll s, ll pr, double len)
{
    if(vis[s]==true ){ ans[s]=len;  return;}

   for(auto now: nd[s])
    {
        if(now ==pr)continue;
        dfs( now, s, len+1);
        ans[s]+=ans[now];
    }

    if(s==1)
    {
        if(nd[s].size())
        ans[s]=ans[s]/ nd[s].size() ;
    }
    else ans[s]=ans[s]/ (nd[s].size()-1);

}

int main()
{
    fast;

    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    while(cin>>n)
    {
    ll cnt=0,sum=0;
    fr1(i,n-1)
    {
        cin>>x>>y;
        nd[x].pb(y);
        nd[y].pb(x);

    }

    //leaf nodes
    for(i=2;i<=n;i++)
    {
        if(nd[i].size()==1)vis[i]=true;
    }

    dfs(1, 1, 0);

    printf("%.10lf\n", ans[1]);

    fr(i, N)nd[i].clear();
    mem(vis, 0);
    }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




