#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
  
    while(t--){
        long long n;
        cin>>n;
        long long x=0;
        long long s=0;
        while(n--){
            cin>>x;
            s=s+x;
        }
        cout<<s<<endl;;

    }
    return 0;
}