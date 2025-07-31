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
    ll t,n,val,ans;
    map<ll,ll> freq;
    i1(t)
    while(t--){
        i1(n)
        ans=0;
        freq.clear();
        while(n--){
            i1(val)
            if(val==2 || val==1){
                ans+=(freq[1]+freq[2]);
                freq[val]++;
            }else {
            ans+=freq[val];
            freq[val]++;
            }
        }
    cout<<ans<<endl;    
    }
}