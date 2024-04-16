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
#define debug               cout<<"Monti valo nei "<<endl;
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define conv_string(n)	to_string(n)
//ll x[10]= {0,-1,-1,1,1,-2,-2,2,2};
//ll y[10]= {0,-2,2,-2,2,-1,1,-1,1};


ll a, b;

#define N 100006

int main()
{
    fast;
    ll t;
    ll m,n, k;
    string s;

    ll cnt=0,ans=0,sum=0;
    scl(n);
    scl(k);
    cin>>s;


    if(k==2)
    {
        fr(i, l(s))
        {
            if(s[i]-'A' !=i%2 )a++;
            else b++;
        }
        ll mn=min(a, b);
        cout<<mn<<endl;

        if(a<b)   fr(i, n)  cout<<char('A'+i%2);
        else fr(i, n)cout<<char('A' +1- i%2);
    }
    else
    {
        fr1(i, l(s)-1)
        {
            if(s[i]==s[i-1])
            {
                cnt++;
                s[i]='A';
                while(s[i-1]==s[i]  || s[i]==s[i+1])s[i]++;
            }
        }

        cout<<cnt<<endl<<s<<endl;
    }
return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1

