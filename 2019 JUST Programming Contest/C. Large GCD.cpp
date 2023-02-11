//الحمد لله
// أن ليس للانسان الا ما سعى
#include <bits/stdc++.h>
#define ll long long
#define sakura ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
#define  all(v) (v).begin(),(v).end()
#define sz(v) ((int)( (v).size()))
using namespace std;
ll GCD(ll a, ll b){ if (b==0)return a;GCD(b,a%b);}
ll LCM(ll a, ll b) { return a * b /__gcd(a, b); }
#define mod(a, b)(a-b*(a/b))
#define ceill(a,b) ((a / b) + ((a % b) != 0))
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define E '/n'
//devide and conqur
ll mod=1e9+7 ;
const double pi = acos(-1) ;
# define popcount __builtin_popcount
#define int long long
const int N=2e5+50;
#define endl '\n'
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1,1};
ll fpow(ll b, ll p) { if (!p) return 1; ll ret = fpow(b, p/ 2); ret =(((ret%mod) *(ret%mod))%mod); if (p & 1) ret =(((ret%mod)*(b%mod))%mod); return ret; }
ll fastPow(ll a, ll p = mod - 2, ll m = mod)
{
    if (p == 0)
        return 1;
    if (p % 2 == 1)
        return (a * fastPow(a, p - 1, m)) % m;
    ll c = fastPow(a, p / 2, m);
    return (c * c) % m;
}
typedef vector<int> vi;
typedef vector<ll> vl;
signed  main() {
    sakura
    int t=1;
    cin>>t;
    while(t--)
    {
      int n,m;
      cin>>n>>m;
      if(n%2!=m%2)
          cout<<2<<endl;
      else cout<<12<<endl;
    }

    return 0;
}