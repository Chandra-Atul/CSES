/*
    Author: Atul chandra
*/
#include<bits/stdc++.h>
using namespace std;
#define f(i,a,b) for(long long i=a;i<b;i++)
#define rf(i,a,b) for(long long i=a;i>=b;i--)
#define ll long long
#define mp make_pair
#define pb push_back
#define vc vector<int>
#define vll vector<long long>
#define vvl vector<vll>
#define pll pair<ll,ll>
#define vc vector<int>
#define ff first
#define ss second
#define lb lower_bound
#define POW(a,b) (ll)(pow(a,b)+0.5)
#define gcd __gcd
#define remove_unique(x) x.erase(unique(x.begin(),x.end()),x.end())
#define to_lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define to_upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
#define p_q priority_queue
#define pqmax priority_queue<ll>
#define pqmin priority_queue<ll,vector<ll>,greater<ll>>
#define all(x) x.begin(),x.end()
#define rall(x) x.end(), x.begin()
#define inc(x,start) iota(x.begin(),x.end(),start)
#define pi  3.141592653589793238
#define inf  LONG_LONG_MAX
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define ios ios_base::sync_with_stdio(0)
#define tie cin.tie(NULL),cout.tie(NULL) 
#define endl '\n'

// long long Ceil(long long a,long long b){return (a+b-1)/b;}
// long long Sqrt(long long x){ long long y=sqrt(x)+5;while(y*y>x)y--;return y;}


template <class T> void _print(T t){ cerr << t;}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}

//--------------------------------------------------------------------------------------------------------------------------------------//
                                                /*  Atul chandra    */
//--------------------------------------------------------------------------------------------------------------------------------------//

const int mod = 1e9 + 7;
int helper(int n, int tar, vector<int>nums)
{
	vector<int>dp(tar+1, 1e9);

	dp[0] = 0;
	for(int i=1;i<=tar;i++){
		for(int j=0;j<n;j++){
			if(i-nums[j] >=0 ){
				dp[i] = min(dp[i], dp[i-nums[j]]+1);
			}
		}
	}

	return dp[tar]==1e9?-1:dp[tar];
}
void red(){
    int n, x;
    cin >> n >> x;

    vc nums(n, 0);
    f(i, 0, n)  cin  >> nums[i];
    // vector<int>dp(x+1, 0);

   	cout << helper(n, x, nums) << endl;
}
int main(){
    ios;tie;
    
    int T = 1;
    // cin>>T;
    while(T--){
        red();
    }
    return 0;
}