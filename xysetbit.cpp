#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int t;
    cin>>t;

    while(t--){
        int x,y;
        cin>>x>>y;
        cout<< ( ((1<<x) | (1<<y))  % 1000000007)<<endl;
    }   
    return 0;
}