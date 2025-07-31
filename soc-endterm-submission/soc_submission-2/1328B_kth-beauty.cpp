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

long long ncr(int n, int r) {
    if (r < 0 || r > n) return 0;
    if (r > n - r) r = n - r;  // Optimize calculation
    long long res = 1;
    for (int i = 1; i <= r; i++) {
        res *= (n - r + i);
        res /= i;
    }
    return res;
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,a,k;
    string s;
    i1(n);
    while(n--){
        i2(a,k)
        s.assign(a,'a');
        for(int i=2;i<=s.length();i++){
            if(ncr(i,2)==k){
                s[a-i]='b';
                s[a-i+1]='b';
                break;
            }else if(ncr(i,2)>k){
                s[a-i]='b';
                s[a-k+ncr(i-1,2)]='b';
                break;
            }
        }
        o1(s)
    }
    }