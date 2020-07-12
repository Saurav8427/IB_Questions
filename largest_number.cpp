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

bool cmp(string &a, string &b)
{
    string strx = a + b;
    string stry = b + a;

    return strx > stry;
}

int main()
{
    vector<int> v(5);
    vector<string> s(5);
    for(int i=0; i<5; i++)  { 
        cin>>v[i];
        s[i] = to_string(v[i]);
    }

    sort(s.begin(), s.end(), cmp);
    string ans;
    for(int i=0; i<5; i++)
    {
        ans = ans + s[i];
    }
    ps(ans);

}