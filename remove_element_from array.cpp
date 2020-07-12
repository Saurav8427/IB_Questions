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

    vi arr(n);

    loop(i,0,n) cin>>arr[i];
    
    int B;
    cin>>B;

    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == B) continue;
        else {
            arr[cnt] = arr[i];
            cnt++;
        }
    }

    loop(i,0,n) ps(arr[i]);
    ps(cnt);
}