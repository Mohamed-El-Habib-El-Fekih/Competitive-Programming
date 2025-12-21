#include <bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
 
///-----new feature----///
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
///-end of new feature-///
template <typename Fi, typename Se> ostream& operator<<(ostream& os, pair<Fi,Se> x){os << '(' << x.fi << ',' << x.se << ')';return os;}
template <typename T> ostream& operator<<(ostream& os, vector<T> v){for(const auto& x : v)os << x << ' ';return os;}
void args_out(ostream& os){ os << '\n'; }
template <typename Head, typename... Tail> void args_out(ostream& os, Head H, Tail... T){os << H << ' ' ;args_out(os, T...);}
// DebuGGing
#define pyprint(...) args_out(cout, __VA_ARGS__)
#define dbg(...) cerr << "--->(" << #__VA_ARGS__ << ") :\n", args_out(cerr, __VA_ARGS__);
#define sep() cerr << "--------------------" << "\n";
 
/* Combinatorics
const int maxn = (int)2e5 + 1; // (^-^)Update me pls(.^.)
LL fact[maxn], invf[maxn];
LL P(int n){return fact[n];}
LL A(int n, int k){return fact[n]*invf[n-k];}
LL C(int n, int k){return fact[n]*invf[n-k]*invf[k];}
void preprocess(){
    //call me once at the start of main (0_0)(;_;)
    fact[0] = 1;
    FOR(i,1,maxn)
        fact[i] = fact[i-1] * i;
    invf[maxn-1].v = modInverse(fact[maxn-1].v);
    RFOR(i,maxn-1,0)
        invf[i] = invf[i+1] * (i+1);
}
*/
//---> Short Data Structures:
template<typename T> using ordered_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>; // aka indexed_set
// ordered_set<int> s;
//s.insert(1);
//s.order_of_key(3);
//s.find_by_order(1);
//s.find(1);
#define all(x) x.begin(),x.end()
#define sz(x) (int)(x.size())
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define nl "\n"
#define YES cout<<"YES"<<nl
#define NO cout<<"NO"<<nl
#define yes cout<<"yes"<<nl
#define no cout<<"no"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
#define REP(i,n) for(int i = 0 ; i < (n) ; i++)
#define FOR(i,a,b) for (int i = (a); i < (b); i++)
 
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
const ll mod = 1e9 + 7;
// const ll mod = 998244353;
const ll inf = 1e18;
 
//---> Graph :
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
 
//---> Number Theory :
ll gcd(ll a, ll b){while(b){swap(a,b);b%=a;}return(a);}
ll lcm(ll a, ll b){return (a*b)/gcd(a, b);}
ll po2(ll b, ll e){if(e==0)return 1; ll res = 1;while(e>1){if(e%2)res=(res*b)%mod;e/=2;b=(b*b)%mod;}return(res*b)%mod;}
ll modInverse(ll a){ return po2(a, mod-2); } // phi[mod] - 1 // assert(gcd(a,mod) == 1);
 
 
vi a,b,ind;
vector<bool> vis;
 
void solve()
{
	int n,cpt=0,nbr;
	cin >> n;
	a.clear(),b.clear(),ind.clear(),vis.clear();
	vis.resize(n,false);
	a.resize(n);
	b.resize(n);
	ind.resize(n+1,0);
	REP(i,n)
	{
	    cin >> a[i];
	    ind[a[i]]=i;
    }
	REP(i,n)
	    cin >> b[i];
	if(n<=3)
	{
	    REP(i,n)
	        if(a[i]!=b[i])
	        {
	            pyprint(-1);
	            return;
	        }
	    pyprint(0);
	    return;
	}
	ll val=-1,cy1=0,szz=0,test=0,test1=0;
	REP(i,n)
	{    
	    cpt+=(!vis[i]);
	    szz+=(!vis[i]);
	    vis[i]=true;
	    nbr=ind[b[i]];
	    while(!vis[nbr])
	    {
            val++;
            vis[nbr]=true;
            nbr=ind[b[nbr]];
            szz++;
	    }
	    if(szz==3)
	    	val=3;
	    test+=(szz==1);  
	    test1+=(szz==2);
	    szz=0;	
	}
	if(n==4)
	{
	    if(cpt==2 && test1==2)
	        pyprint(1);
	    else if(cpt==4)
	        pyprint(0);
	    else
	        pyprint(-1);
	    return;
	}
	if(test==(n-val) && val==3)
	{
        pyprint(2);
        return;
	}
	if((n-cpt)%2==0)
	    pyprint((n-cpt)/2);
	else
	    pyprint(-1);
}
 
int main()
{
	FastIO;	
	int t = 1 ;
	cin >> t;
	while(t--)
		solve();
	return 0;
}
