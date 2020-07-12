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
    int n, m, i, j;
    cin>>n>>m;
    vector<vector<int>> arr(n, vector<int>(m));
    vector<int> v;

    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            cin>>arr[i][j];

    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            v.push_back(arr[i][j]);

    sort(v.begin(), v.end());

    for(i=0; i<v.size(); i++)  
        ps(v[i]);
        
    pn("");
    ps(v[v.size()/2]);
}