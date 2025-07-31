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

// Function to count the number of divisors of a number
ll countDivisors(ll n) {
    if (n == 1) return 1;
    
    ll count = 1;  // Start with 1 (since 1 is a divisor of every number)
    
    // Handle 2 separately
    ll exponent = 0;
    while (n % 2 == 0) {
        exponent++;
        n /= 2;
    }
    count *= (exponent + 1);
    
    // Check for odd divisors up to sqrt(n)
    for (ll i = 3; i <= sqrt(n); i += 2) {
        exponent = 0;
        while (n % i == 0) {
            exponent++;
            n /= i;
        }
        count *= (exponent + 1);
    }
    
    // If remaining n is a prime number > 2
    if (n > 2) {
        count *= 2;
    }
    
    return count;
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s1,s2;
    string ans1="",ans2="";
    bool ans=true;
    vector<ll> pos1;
    vector<ll> pos2;
    bool a1;
    i2(s1,s2)
    ll l1=s1.length(),l2=s2.length();
    for(int i=1;i<=l1;i++){
        if(l1%i==0){
            pos1.pb(i);
        }
    }
    for(int i=1;i<=l2;i++){
        if(l2%i==0){
            pos2.pb(i);
        }
    }
    for(auto x:pos1){
        a1=true;
        for(int i=0;i<l1-x;i++){
            if(s1[i]!=s1[i+x]){
                a1=false;
                break;
            }
        }
        if(a1){
            for(int i=0;i<x;i++){
                ans1+=s1[i];
            }
            break;
        }
    }
    for(auto x:pos2){
        a1=true;
        for(int i=0;i<l2-x;i++){
            if(s2[i]!=s2[i+x]){
                a1=false;
                break;
            }
        }
        if(a1){
            for(int i=0;i<x;i++){
                ans2+=s2[i];
            }           
            break;
        }
    }
    if(ans1==ans2){
        cout<<countDivisors(gcd_recursive((s1.length()/ans1.length()),(s2.length()/ans2.length())));
    }else cout<<0;
}