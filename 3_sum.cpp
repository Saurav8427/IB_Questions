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

    vi v(n);

    loop(i,0,n) cin>>v[i];

    int x;
    cin>>x;
    
    if(v.size() < 3)    ps(0);
    sort(all(v));


    int m = INT_MAX, sum = 0;    
    int i = 0;
    while(i < v.size() - 2)
    {
        int left = i+1;
        int right = v.size() - 1;
        
        while(left < right)
        {
            int temp = v[i] + v[left] + v[right];
            int diff = abs(x - temp);

            if(diff == 0)   {ps(x);break;}
            if(diff < m)
            {
                m = diff;
                sum = temp;
            }

            if(temp < x)   left++;
            else    right--;
        }
        i++;
    }


    ps(sum);
}