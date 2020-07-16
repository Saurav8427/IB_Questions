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

    vector<vector<string>> a{
         {"F","M", "MM", "MMM"}
        ,{"D","C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"}
        ,{"B","X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"}
        ,{"A", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"}};

    string ans = "";
    vector<int> v{0,0,0,0};

    int i=0;
    while(n>0)
    {
        v[i++] = n%10;
        n = n/10;   
    }

    reverse(v.begin(), v.end());

    for(int i=0; i<v.size(); i++)
        if(v[i] > 0)
            ans += a[i][v[i]];

    ps(ans);

}