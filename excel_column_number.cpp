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
    string str;
    cin>>str;

    int n = str.length();
    int ans = 0;
    int val = 1;
    for(int i=n-1; i>=0; i--)
    {
        ans += (int(str[i]) - 64) * val;
        val *= 26;
    }

    ps(ans);

}