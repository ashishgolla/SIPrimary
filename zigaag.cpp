#include <bits/stdc++.h>
using namespace std;

int main() {
 
    int n,m;
    cin>>n>>m;
    
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    int top=0,left=0,right=m-1,bottom=n-1;

    while(top<=bottom){
        if(top<=bottom){
            for(int i=left;i<=right;i++){
                cout<<a[top][i]<<" ";
            }
        }
        top++;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                cout<<a[top][i]<<" ";
            }
            top++;
        }
    }
    cout<<endl;
   
    
    return 0;
}