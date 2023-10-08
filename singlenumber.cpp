#include<iostream>
using namespace std;
#include<vector>

int singleNumber(vector<int> &a) {
    int c=0;
    
    for(int i=0;i<a.size();i++){
        c=c^a[i];
    }
    return c;
}

int main(){
    int n;
    cin>>n;
    vector<int>a;
    int c;

    for(int i=0;i<n;i++){
        cin>>c;
        a.push_back(c);
    }
    cout<<singleNumber(a);
    return 0;
}
