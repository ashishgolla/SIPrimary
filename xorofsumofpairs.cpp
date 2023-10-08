#include <bits/stdc++.h>
using namespace std;
int sop(int a[],int n){
    int ans=0;

    for(int i=0;i<n;i++){
        ans=ans^(2*a[i]);
    }

    return ans;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        cout<<sop(a,n)<<endl;
    }
    return 0;
}