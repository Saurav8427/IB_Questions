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
    string str = "1",temp;
    int cnt;
    for(int i=1; i<n; i++)
    {
        temp = "";
        for(int j=0; j<str.length();)
        {
            cnt = 1;
            for(int k=j; k<str.length();k++)
            {
                if(str[j] == str[k+1])  cnt++;
                else break;
            }

            temp += to_string(cnt) + str[j];
            j+=cnt;
        }     
        
        str = temp;
    }

    ps(str);


}