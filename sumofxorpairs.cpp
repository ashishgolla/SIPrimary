#include <bits/stdc++.h>
using namespace std;
long long checkbit(int s,int n){
    return (s>>n)&1;
}
long long sxop(int a[],int n){
    long long ans=0;
    for(int i=0;i<32;i++){
        long long set=0;
        for(int j=0;j<n;j++){
            if(checkbit(a[j],i)){
                set++;
            }
        }
        ans=ans+(set*(n-set)*(1<<i));
    }
    return (2*ans);
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

        cout<<sxop(a,n)<<endl;
    }
    return 0;
}