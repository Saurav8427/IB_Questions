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
    int A; 
    cin>>A;

    string str;
    if(A > 0)
    {
        str = to_string(A);
        int n = str.length();
        for(int i=0; i<n/2; i++)
        swap(str[i],str[n-i-1]);
    }
    else
    {
        A = A*(-1);
        str = to_string(A);
        int n = str.length();
        for(int i=0; i<n/2; i++)
        swap(str[i],str[n-i-1]);
        str = "-" + str;
    }
    
    long long int s = stoll(str, nullptr, 10);
    if(s >= -2147483648 && s <= 2147483647)
    {int p = stoi(str);   cout<<p;}
    else cout<<"0";


}