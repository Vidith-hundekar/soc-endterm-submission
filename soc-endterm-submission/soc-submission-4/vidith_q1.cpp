#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,m,n_0,n_1;
    string s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m;
        cin>>s;
        n_0=count(s.begin(),s.end(),'0');
        n_1=count(s.begin(),s.end(),'1');     
        cout<<n_0+(s.length()-1)*n_1<<endl;
    }
}