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
    getline(cin,str);
    // string str = A;
    int n = str.length();
    int i=n-1;
    
    while(str[i] == ' ')    i--;
    int j = i;
    while(i>=0)
    {
        if(str[i] == ' ') break;
        i--;
    }

    ps(j-i);

}