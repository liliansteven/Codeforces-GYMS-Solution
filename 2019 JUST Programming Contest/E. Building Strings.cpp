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
#define mod(a, b) ((a-b*(a/b))
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
/*
bool issubsequence(string& s1, string& s2)
{
    int n = s1.length(), m = s2.length();
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (s1[i] == s2[j])
            i++;
        j++;
    }

    return i == n;
}
int vis[30];
void hashh(string &s)
{
    int cnt=1;
    int n=s.size();
    for(int i=0;i<N;i++)
    {
        if(vis[s[i]-'a']==0)vis[s[i]-'a']=cnt++;
        s[i]=vis[s[i]-'a']+'a'-1;


    }


}
//int nextt[N][27];
int primes[N+5];
vector<int >p;
void solve()
{
    for(int i=2;i<=N;i++)primes[i]=1;
    for(int i=2;i*i<=N;i++)
    {
        for(int j=2;j*i<N;j++)
        {
            primes[i*j]=0;
        }
    }
    for(int i=2;i<=N;i++)
    {
        if(primes[i])p.push_back(i);
    }
}
*/
int n,m;
vector<int>adj[N];
vector<bool>visted;
int cnt[N];
vi parent;
int ans=0;
/*
vector<int> color;
vector<vector<char>>arr;
bool done=0;
bool y=0;
bool valid(int i,int j,int previ,int prevj)
{
    if(i<2&&i>=0&&j>=0&&j<m&&!visted[i][j]&&(previ!=i||prevj!=j))
    {
        if(arr[i][j]=='B')
            return true;
        else return false;
    }
    else return false;
}*/
vi d(N);
void dfs(int u,int p)
{
    visted[u]=1;
    parent[u]=p;
    for(auto v:adj[u])
    {
        if(!visted[v])dfs(v,u);
    }
}
void dfs(int u)
{
    visted[u]=1;
    for(auto v:adj[u])
    {
        if(!visted[v])dfs(v);
    }
}


/*

long long MOD=1e9+7;

ll add(ll x, ll y) {
    return (x + y) % MOD;
}

ll diff(ll x, ll y) {
    return (x - y + MOD) % MOD;
}ll mult(ll x, ll y) {
    return (1LL * (x%MOD) * (y%MOD))%MOD;
}

ll egcd(ll a, ll b, ll &x, ll &y){
    if(!b){
        x=1;
        y=0;
        return a;
    }
    ll g=egcd(b,a%b,y,x);
    y-=(a/b)*x;
    return g;
}
ll modInverse(ll a, ll m){ /// (a/b)%m = ((a%m)*(modInverse(b)%m))%m
    ll x,y,g;
    g=egcd(a,m,x,y);
    if(g>1)
        return -1;
    return (x+m)%m;
}


ll inv(ll a, ll b)
{
    ll ans = ((a%MOD)*(modInverse(b,MOD)%MOD))%MOD;
    return ans;
}

int a;
int DP[2000005];
*/
/*
void memmset(int n)
{
    for(int i=0;i<=n ;i++){d[i]=-1;
        adj[i].clear();
    }
}*/
/*
vi adj[N];
int color[N];

void dfs(int u)
{
    for(auto v:adj[u])
    {
        if(color[v]==-1)
        {
            color[v]=1^color[u];
            dfs(v);
        }
    }


}
 */


int andrange(int l,int r)
{
    int cnt=0;
    while(l!=r)
    {
        l>>=1;
        r>>=1;
        cnt++;
    }
    return (r<<cnt);
}
int pprev,k;
vi p;
int lb(int targ)
{
    int l=pprev, r=m-1,ans=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(p[mid]>=targ-k)
        {
            ans=p[mid];
            r=mid-1;
        }
        else
        {
            l=mid+1;

        }
    }
    return ans;

}

signed  main() {




    sakura
    int t=1;
    cin>>t;


    while(t--)
    {
        int n,targ;
        cin>>n>>targ;
        string s,c,p;
        cin>>s>>c>>p;
        map<char,int>m;
        for(int i=0;i<n;i++)
        {
            if(m.find(s[i])==m.end())m[s[i]]=c[i]-'0';
            else m[s[i]]=min((int)(c[i]-'0'),m[s[i]]);
        }
        int ans=0;
        bool donee=0;
        for(int i=0;i<targ;i++)
        {
            if(m.find(p[i])==m.end()) {
                donee=1;
                break;
            }
            else ans+=m[p[i]];
        }
        if(donee)cout<<-1<<endl;
        else cout<<ans<<endl;




    }

    return 0;
}
