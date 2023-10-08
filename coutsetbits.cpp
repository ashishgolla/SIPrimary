#include <bits/stdc++.h>
using namespace std;
long long setbit(long long n){
    int c=0;
    while(n!=0){
        c++;
        n=n&(n-1);
    }
    return c;
} 
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        cout<<setbit(n)<<endl;
    }

    return 0;
}