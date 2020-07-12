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

// https://python5566.wordpress.com/2017/11/02/interviewbit-find-permutation/

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;

    vector<int> ans;
    int mn = 1;
    int mx = n;
    for(int i=0;i<n;i++)
    {
        if(str[i] == 'I')
        {
            ans.push_back(mn);
            mn+=1;
        }
        else
        {
            ans.push_back(mx);
            mx-=1;
        }
    }

    loop(i,0,n) ps(ans[i]);
    // return ans;

}