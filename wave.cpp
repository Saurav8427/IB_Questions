#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(),(x).end()
#define tr(x,i) for(typeof(x).begin() i = (x).begin(); i != (x).end(); i++)
#define loop(i,a,n) for(int i=a;i<n;i++)
#define ps(x) cout<<x<<" "
#define pn(x) cout<<x<<"\n"
#define sz(a) int((a).size())
#define pb push_back
typedef vector< int > vi;
typedef pair< int,int > pairs;

int main()
{
    int n;
    cin>>n;
    vi v(n);

    loop(i,0,n) cin>>v[i];

    sort(all(v));
    vi s;
    if(n%2 ==0)
    {
        for(int i=0;i<n;i=i+2)
        {
            s.pb(v[i+1]);
            s.pb(v[i]);
        }
    }
    else
    { 
        for(int i=0;i<n-1;i=i+2)
        {
            s.pb(v[i+1]);
            s.pb(v[i]);
        }
        s.pb(v[n-1]);
    }

    loop(i,0,n) ps(s[i]);
}