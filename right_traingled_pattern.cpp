#include <bits/stdc++.h>
#include<string>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    int n;
    char s=' ';
    int k=1;
    while(t--){       
        cin>>n;
       
        cout<<"Case #"<<k<<":"<<endl;
        k=k+1;
        for(int i=1;i<=n;i++){ 
            for(int z=1;z<n-i+1;z++){
                cout<<" ";
            }
            for(int j=n-i+1;j<=n;j++){                
                cout<<"*";
            }
            cout<<endl;
        }
       
    }
    return 0;
}