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

    ps("Enter duplicates elements in sorted order: ");
    loop(i,0,n) cin>>v[i];

    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(i < n-1 && v[i] == v[i+1])   continue;
        else {v[count] = v[i];  count++;}
    }

    // Array after removing dublicates
    loop(i,0,count) ps(v[i]);
    pn("");

    // Length after removing duplicates from array.
    ps(count);
}