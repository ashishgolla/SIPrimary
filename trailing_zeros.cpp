#include <bits/stdc++.h>
using namespace std;
#include<string>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long t;
    cin>>t;

    while(t--){
        long long x;
        cin>>x;
  
        long long c=0;
        for(long long i=5;x/i>=1;i*=5){
            c+=(x/i);
        }      
        cout<<c<<endl;
    }  
    return 0;
}