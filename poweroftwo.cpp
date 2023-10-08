#include <bits/stdc++.h>
using namespace std;

string countset(long long n){
    long long c=0;
    while(n>0){
        c++;
        n=n&(n-1);
        if(c>1){
            return 0?"True":"False";
        }
    }
    return 1?"True":"False";
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        cout<< countset(n)<<endl;
    }
    return 0;
}