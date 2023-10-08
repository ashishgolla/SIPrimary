#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int x,y,i,j;
        int a[n][n];
        for(int x=0;x<n;x++){
            for(int y=0;y<n;y++){
                cin>>a[x][y];
            }
        }
        i=0;
        j=n-1;
        int s=0;
        while(j!=0){
            x=0,y=j;
            s=0;
            while(x<n && y<n){
                s=s+a[x][y];
                x++;
                y++;
            }
            cout<<s<<" ";
            j--;
        }

        i=0;
        j=0;
        while(i<n){
            x=i,y=0;
            s=0;
            while(x<n && y<n){
                s=s+a[x][y];
                x++;
                y++;
            }
            cout<<s<<" ";
            i++;
        }
        cout<<endl;
    }
    return 0;
}