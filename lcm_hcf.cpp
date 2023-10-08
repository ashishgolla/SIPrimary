#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;

    while(t--){
        long long a,b;
        cin>>a>>b;

        cout<<(a*b)/gcd(a,b)<<" "<<gcd(a,b)<<endl;
    }
    
    return 0;
}