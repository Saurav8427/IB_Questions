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
    string A;
    cin>>A;
    string str = A;
    vector<int> v;
    int n = str.length();
    bool x = true;
    for(int i=0; i<n; i++)
    {
        if (int(str[i]) == 45) x = false;
        else if(int(str[i]) == 43)  {continue;}
        else if(int(str[i]) <= 57 && int(str[i]) >= 48)
        {
            v.push_back(int(str[i])-48);
        }
        else break;
    }

    reverse(v.begin(), v.end());
    int ans = 0;
    int ten = 1;
    for(int i=0; i<v.size(); i++)
    {
        int temp = v[i];
        if(ans>(INT_MAX/10) || (ans==(INT_MAX/10) && temp>(INT_MAX%10)))
        {
            if(!x)  return(INT_MIN);
            else    return(INT_MAX);
        }

        ans += v[i]*ten;
        ten *= 10;
        
        if(i == v.size()-1)
        {
            int temp = v[i+1];
            if(ans>(INT_MAX/10) || (ans==(INT_MAX/10) && temp>(INT_MAX%10)))
            {
                if(!x)  return(INT_MIN);
                else    return(INT_MAX);
            }
        }
    }
    
    if(!x)  ans = ans*(-1);
    
    if(ans) return(ans);
    else return(0);
    
}
