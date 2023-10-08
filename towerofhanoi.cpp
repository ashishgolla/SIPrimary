#include <bits/stdc++.h>
using namespace std;

void toh(int n,char src, char dest,char temp){
    if(n==0){
        return;
    }
    toh(n-1,src,temp,dest);
    cout<<"Move "<<n<<" from "<<src<<" to "<<dest<<endl;
    toh(n-1,temp,dest,src);

}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        cout<<(1<<n)-1<<endl;
        toh(n,'A','C','B');
    }   
    return 0;
}