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
    string s1,s2;
    i2(s1,s2)
    int n1=0,n2=0,quest=0,rem;
    for(int i=0;i<s1.length();i++){
        if(s1[i]=='+'){
            n1++;
        }else n1--;
    }
    for(int i=0;i<s2.length();i++){
        if(s2[i]=='+'){
            n2++;
        }else if(s2[i]=='-'){
            n2--;
        }else quest++;
    }
    rem=abs(n1-n2);
    if(rem<=quest && (quest-rem)%2==0){
        cout<<fixed<<setprecision(12)<<double((ncr(quest,((quest-rem)/2)))/pow(2,quest));
    }else cout<<"0";
}
