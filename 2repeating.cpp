#include <bits/stdc++.h>
using namespace std;

int checkbit(int x){
    int res=0;
    while(x>0){
        if(x&1){
            return res;
        }
        x=x>>1;
        res=res+1;
    }
}

void repeating(int a[],int n){
    int ans=0;

    for(int i=0;i<n;i++){
        ans=ans^a[i];
    }

    for(int i=1;i<n-1;i++){
        ans=ans^i;
    }
    int b=0,c=0;
    for(int i=0;i<n;i++){
        if((1<<checkbit(ans)) & a[i]){
            b=b^a[i];
        }
        else{
            c=c^a[i];
        }
    }

    for(int i=1;i<n-1;i++){
        if((1<<checkbit(ans)) & i){
            b=b^i;
        }
        else{
            c=c^i;
        }
    }
    if(b<c){
        cout<<b<<" "<<c<<endl;
    }
    else{
        cout<<c<<" "<<b<<endl;
    }
    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        repeating(a,n);
    }
    return 0;
}