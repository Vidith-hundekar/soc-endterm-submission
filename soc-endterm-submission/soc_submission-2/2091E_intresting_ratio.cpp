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

const int MAXN = 10000000; // 10^7
vector<int> primes;
int smallest_prime_factor[MAXN + 1];

void primes_max(int n) {
    for (int i = 2; i <= n; i++) {
        if (smallest_prime_factor[i] == 0) {
            smallest_prime_factor[i] = i;
            primes.push_back(i);
        }
        for (int j = 0; j < primes.size() && primes[j] <= smallest_prime_factor[i] && i * primes[j] <= n; j++) {
            smallest_prime_factor[i * primes[j]] = primes[j];
        }
    }
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    primes_max(MAXN);
    
    ll ans;
    ll t, n;
    i1(t)
    while(t--){
        i1(n)
        ans = 0;
        for(ll i = 0; i < primes.size() && primes[i] <= n; i++){
           ans = (ans + (n/primes[i])); 
        }
        cout << ans << endl;
    }
    return 0;
}