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
    ll t,n;
    i1(t)
    while(t--){
        i1(n)
        if(n==1){
            o1(2)
        }else if(n==2){
            o1(3)
        }else{
            ll x= (1 + sqrtl( 8 * n + 1)) / 2;
            ll k;
            if(x%2==0){
                k=(x/2)*(x-1);
            }else k=x*((x-1)/2);

            o1(x+n-k)
        }
    }
    cout<<endl;
}
