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


ll gcd_recursive(ll a, ll b) {
    if (b == 0) return a;
    return gcd_recursive(b, a % b);
}
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t,n,gcd,val;
    ll decide;
    vector<ll> v;
    i1(t)
    while(t--){
        gcd=1;
        decide=0;
        v.clear();
        i1(n)
        while(n--){
            cin>>val;
            v.pb(val);
            gcd=(val*gcd)/gcd_recursive(gcd,val);
        }
        for(auto i:v){
            decide+=(gcd)/i;
        }
        if(gcd>decide){
            for(auto i:v){
                cout<<1+(gcd-1)/i<<" ";
            }
        }else cout<<-1;
        cout<<endl;
    }
}
