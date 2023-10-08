#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    int k=1;
    while(t--){
        long long n;
        cin>>n;
        signed long long a[n][n];
        cout<<"Test Case #"<<k<<":"<<endl;
        k=k+1;
        for(long long i=n-1;i>=0;i--){
            for(long long j=0;j<n;j++){
                cin>>a[j][i];
            }
                
        }

        for(long long i=0;i<n;i++){
            for(long long j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}