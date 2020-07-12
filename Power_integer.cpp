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

int isPower(int A) {

    if(A == 1)  return 1;
    
    for(int i=2; i<=sqrt(A); i++)
    {
        int y = 2;
        int p = pow(i,y);

        while(p<=A && p>0)
        {
            if(p == A) return 1;
            y++;
            p = pow(i,y);
        }   
    }

    return 0;
}

int main()
{
    int A;
    cin>>A;

    cout<<isPower(A);
}

