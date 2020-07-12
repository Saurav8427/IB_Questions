#include<bits/stdc++.h>
using namespace std;

int maxSubArray(const vector<int> &A) {
    int n = A.size();
    
    int max_val = A[0];
    int curr = 0;
    for(int i=1; i<n; i++)
    {
        curr = max(A[i], A[i] + curr);
        max_val = max(max_val, curr);
    }
    return max_val;
}

int main() 
{
    int n;
    cin>>n;
    vector<int> a(n);
    
    for(int i=0; i<n; i++)  cin>>a[i];
    cout<<maxSubArray(a);
}