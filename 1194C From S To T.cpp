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
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  cout<<endl;
#define md                  10000007
#define inf                 1e18
#define debug               cout<<"I am here"<<endl;
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define conv_string(n)	to_string(n)
//ll x[10]= {0,-1,-1,1,1,-2,-2,2,2};
//ll y[10]= {0,-2,2,-2,2,-1,1,-1,1};





#define N 100006


int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
    ll cnt=0,k=0,sum=0;
    string s, t, p , tmp;
    cin>>s>>t>>p;

    map< char , ll > freq_s, freq_t, freq_p;


    fr(i, l(p)) freq_p[p[i] ]++;

    ll dif=l(t)-l(s);

    for(i=l(t) -1 ; dif!=0 ; i--) tmp+=t[i], dif--;

    cout<<tmp<<endl;


    if(dif>0)
    {
        fr(i, min(l(t),  l(s)) )
        {
            if( t[i]  != s[i])
            {
                if(freq_p[t[i] ]<=0 ){cnt=1 ; break;}
                else freq_p[t[i] ]--;
            }
        }
    }

    if(cnt)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;


    }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1

