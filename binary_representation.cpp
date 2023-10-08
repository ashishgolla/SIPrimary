#include <bits/stdc++.h>
using namespace std;

long long brep(long long x){
    if(x>1){
        brep(x>>1);
    }
    
    cout<<(x&1);
    return 0;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;

    while(t--){
        long long x;
        cin>>x;

        brep(x);
        cout<<endl;
    }    
    
    return 0;
}