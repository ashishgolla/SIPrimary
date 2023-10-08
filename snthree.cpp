#include <bits/stdc++.h>
using namespace std;

long long snthree(int a[],int n){
    long long ans=0;

    for(long long i=0;i<32;i++){
        long long set=0;
        for(long long j=0;j<n;j++){
            if((a[j]>>i)&1){
                set++;
            }
        }
        if(set%3 !=0){
            ans= ans | (1<<i);
        }
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
        cout<<snthree(a,n)<<endl;
    }
    return 0;
}