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
    ll t,n,m;
    ll x[200001];
    ll r[200001];  
	i1(t)
	while(t--){
		i2(n,m)
        map<ll,ll> p;
        ll count=0;
		for(int i=1;i<=n;i++)cin>>x[i];
		for(int i=1;i<=n;i++)cin>>r[i];
        
        for(int i=1; i<=n; i++){
        for(int j=x[i]-r[i]; j<=x[i]+r[i]; j++){
            ll temp = (ll)(sqrtl(r[i]*r[i]-(j-x[i])*(j-x[i])));
            p[j] = max(p[j], temp); 
        }
        }
        for (auto x:p){
            count+=(1+2*x.second);
        }
        cout<<count<<endl;
	}
	return 0;
}