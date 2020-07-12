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

    int ans = v[0];

    // What xor does:
    // It cancels out even occurences of a number: A ^ A = 0 and A ^ B ^ A = B. At last only one number is left.
    for(int i=1; i<n; i++)
    ans = ans ^ v[i];

    ps(ans);
}