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

    // int arr[n][n];
    vector<vector<int> > arr( n , vector<int> (n, 0));  

    int cnt = 1;
    int dir = 1;
    int k=0;
   
    while(cnt <= n*n)
    {
        if(dir == 1)
        {
            int i=k;
            for(int j=k; j<n-k; j++)
            if(arr[i][j] == 0)  arr[i][j] = cnt++;
            dir = 2;
        }
        else if(dir == 2)
        {
            int j=n-k-1;
            for(int i=k; i<n-k; i++)
            if(arr[i][j] == 0)  arr[i][j] = cnt++;
            dir = -1;
        }
        else if(dir == -1)
        {
            int i=n-1-k;
            for(int j=n-1-k; j>=0+k; j--)
            if(arr[i][j] == 0)  arr[i][j] = cnt++;
            dir = -2;
        }
        else if(dir == -2)
        {
            int j=k;
            for(int i=n-1-k; i>=0+k; i--)
            if(arr[i][j] == 0)  arr[i][j] = cnt++;
            dir = 1;
            k++;
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {ps(arr[i][j]);}
        pn("");
    }
}