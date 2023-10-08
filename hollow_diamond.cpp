#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    int k=1;
    while(t--){
        long long n;
        cin>>n;
        
        if(n%2==1){
            n++;
        }
        int mid=n/2;
        cout<<"Case #"<<k<<":"<<endl;
        k=k+1;
        for(long long i=1;i<mid;i++){
            for(long long j=(mid-i);j>=1;j--){
                cout<<" ";
            }
            for(long long j=1;j<=i;j++){
                if(j==1 || j==i){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
        for(long long i=mid;i>=1;i--){
            for(long long j=1;j<=(mid-i);j++){
                cout<<" ";
            }
            for(long long j=1;j<=i;j++){
                if(j==1 || j==i){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
    }  
    return 0;
}