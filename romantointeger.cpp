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

int value (char c)
{
    if(c == 'I'){
        return 1;
    }
    else if(c == 'V'){
        return 5;
    }
    else if(c == 'X'){
        return 10;
    }
    else if(c == 'L'){
        return 50;
    }
    else if(c == 'C'){
        return 100;
    }
    else if(c == 'D'){
        return 500;
    }
    else{
        return 1000;
    }
}

int main()
{
    string A;
    cin>>A;

    int last, temp, sol = 0;
    for(int i = A.size()-1; i>=0; i--) 
    {
        last = value(A[i]);
        
        if(i!=0)
        temp = value(A[i-1]);

        sol = sol + last;

        if(temp < last) {
            sol = sol - temp;
            i--;
        }

        last = 0; 
        temp =0;
    }

    ps(sol);
}

