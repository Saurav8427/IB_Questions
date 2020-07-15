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

    vi A(n);
    loop(i,0,n) cin>>A[i];

    int B;
    cin>>B;

    vector<int> v;

    if(binary_search(A.begin(), A.end(), B)) {
    v.pb(lower_bound(A.begin(), A.end(), B) - A.begin());
    v.pb(upper_bound(A.begin(), A.end(), B) - A.begin() - 1);
    }
    else {    
        v.pb(-1);
        v.pb(-1);
    }

    loop(i,0,v.size())  ps(v[i]);


}