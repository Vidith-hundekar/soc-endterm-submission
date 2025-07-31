#include <bits/stdc++.h>
using namespace std;
 
typedef int64_t ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef complex<ll> P;
 
#define X real()
#define Y imag()
#define pb push_back
#define pob pop_back
#define ff first
#define ss second
#define sz size
#define iArray(a, n) for (ll i = 0; i < n; i++) cin >> a[i];
#define i1(a) cin>>a;
#define i2(a, b) cin >> a >> b;
#define o1(a) cout << a << "\n";
#define o2(a, b) cout << a << ' ' << b << "\n";
#define oArray(a, n) for (ll i = 0; i < n; i++) cout << a[i] << ' '; cout << endl;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define all(x) x.begin(), x.end()

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    i1(t)
    while(t--){
        ll n,k,maxi=INT_MIN,mini=INT_MAX,sum,ans=1;
        i2(n,k)
        vector<ll> a(n),b(n);
        stack<int> ind,inda;
        for(int i=0;i<n;i++)i1(a[i]);
        for(int i=0;i<n;i++)i1(b[i]);
        for(int i=0;i<n;i++){
            if(maxi<a[i])maxi=a[i];
            if(mini>a[i])mini=a[i];
            if(b[i]!=-1)ind.push(i);
            else inda.push(i);
        }
        if(ind.empty() ){
            ans=k-(maxi-mini)+1;
            if(maxi-mini > k)ans=0;
        }
        else{
            sum=a[ind.top()]+b[ind.top()];
            ind.pop();
            while(!ind.empty()){
                if(sum!=a[ind.top()]+b[ind.top()]){
                    ans=0;
                    break;
                }
                ind.pop();
            }
            while(!inda.empty()){
                if(sum-a[inda.top()]>k || sum - a[inda.top()] <0 ){
                    ans=0;
                    break;
                }
                inda.pop();
            }

        }
        o1(ans)
    }   
}