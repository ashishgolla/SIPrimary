#include <bits/stdc++.h>
using namespace std;
long long apowerb(int a, int b){
    long long ans=1;
    int x=1e9+7;
    for(int i=0;i<b;i++){
        ans = ans * a;
        ans=ans % x;
    }
    return ans;
}
int main() {
    /* O(n) and O(1)  and */   
    int t;
    cin>>t;

    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<apowerb(a,b)<<endl;
    }
    return 0;
}

//optimal solution using recursion
#include <iostream>
using namespace std;
const long long c=1e9+7;
long long compute(long long a, long long b){
    if(b==0){
        return 1;
    }
    
    long long x= compute(a,b/2) % c;
    x=(x*x) % c;
    if(b&1!=0){
        x=(x*a) % c;
    }
    
    return x;
 
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;

    while(t--){
        long long a,b;
        cin>>a>>b;

        long long result=compute(a,b);
        cout<<result<<endl;
    }
    return 0;
}