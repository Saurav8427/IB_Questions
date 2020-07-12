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

    vector<vector<int> > arr( n*2 - 1 , vector<int> (n*2 - 1, 0));

    for(int j=0; j<n; j++)
    {
        arr[n-1][j] = n - j;
        arr[n-1][n*2-2-j] = arr[n-1][j];
    }
    
    int cnt = 1;

    for(int i=n-2; i>=0; i--)
    {   
        int cnt = n-i-1;
        for(int j=n-1; j>=0; j--)
        {
            if(cnt)
            {
                arr[i][j] = arr[i+1][j] + 1;
                arr[n*2-2-i][j]=arr[i][j];
                arr[i][n*2-2-j]=arr[i][j];
                arr[n*2-2-i][n*2-2-j]=arr[i][j];
                cnt--;
            }
            else
            {
                arr[i][j] = arr[i+1][j]; 
                arr[n*2-2-i][j]=arr[i][j];
                arr[i][n*2-2-j]=arr[i][j];
                arr[n*2-2-i][n*2-2-j]=arr[i][j];
            }
        }
    }

    // return arr;

}