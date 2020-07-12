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

int solve(string str)
{
    int sign = 1, base = 0, i = 0;

    while(str[i] == ' '){i++;} //If a number have spaces at initial

    if(str[i] == '-' || str[i] == '+')  sign = (str[i++] == '-') ? -1 : 1;

    while(str[i] >= '0' && str[i] <= '9')
    {
        if(base > INT_MAX/10 || (base == INT_MAX/10 && str[i] - '0' > 7)) 
        {
            if(sign == 1)   return INT_MAX;
            else            return INT_MIN;
        }

        base = base*10 + (str[i++] - '0');
    }

    return base*sign;
}

int main()
{
    string str;
    cin>>str;

    cout<<solve(str);
}

