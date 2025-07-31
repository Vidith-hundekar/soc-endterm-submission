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
const ll INF = LONG_LONG_MAX;
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define all(x) x.begin(), x.end()

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    i1(t);
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        vector<int> p(m + 1, n + 1), S(m + 1, -1);
        p[0] = 0;
        int j = 0;
        for (int i = 0; i < m; i++) {
            while (j < n && a[j] < b[i]) {
                j++;
            }
            if (j == n) {
                break;
            }
            p[i + 1] = ++j;
        }
        S[m] = n;
        j = n - 1;
        for (int i = m - 1; i >= 0; i--) {
            while (j >= 0 && a[j] < b[i]) {
                j--;
            }
            if (j < 0) {
                break;
            }
            S[i] = j--;
        }
        if (p[m] > n) {
            cout << 0 << "\n";
            continue;  
        }
        int ans = INF;
        for (int i = 0; i < m; i++) {
            if (p[i] <= S[i + 1]) {
                ans = min(ans, b[i]);
            }
        }
        if (ans == INF){
            ans = -1;
        }
        cout << ans << "\n";
    }
    return 0;
}