#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }

        int top=0,left=0,right=n-1,bottom=n-1;

        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                cout<<a[top][i]<<" ";
            }
            top++;

            for(int i=top;i<=bottom;i++){
                cout<<a[i][right]<<" ";
            }
            right--;

            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    cout<<a[bottom][i]<<" ";
                }
                bottom--;
            }

            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    cout<<a[i][left]<<" ";
                }
                left++;
            }
        }
        cout<<endl;
    }
    
    return 0;
}