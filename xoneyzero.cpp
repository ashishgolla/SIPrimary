#include <bits/stdc++.h>
using namespace std;
long long generate(long long x,long long y){
    int a=(1<<x)*(1<<y);
    int b=(1<<y);
    return (a-b);
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;

    while(t--){
        long long x,y;
        cin>>x>>y;
        
        cout<<generate(x,y)<<endl;
    }  
    return 0;
}