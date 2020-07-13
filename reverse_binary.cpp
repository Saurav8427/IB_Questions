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

    vi v;
    for(unsigned i=1 << 31; i>0; i=i/2)
    (n&i) ? v.pb(1) : v.pb(0);

    ps("Binary:          ");

    loop(i,0,v.size())  cout<<v[i];
    pn("");

    for(int i=0; i<v.size()/2; i++)
    {   
        swap(v[i],v[v.size()-i-1]);
    } 

    ps("Reversed Binary: ");
    loop(i,0,v.size())  cout<<v[i];

    unsigned int ans = 0;
    unsigned int base = 1;
    for(int i=v.size()-1; i>=0; i--)  {
        if(v[i] == 1)   
            ans = ans + base;
        base = base * 2;
    }
    pn("");
    ps("Reversed Value:  ");
    ps(ans);

}