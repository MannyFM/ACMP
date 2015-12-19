
#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;
typedef unsigned long long ull;
typedef map <int, int> mii;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

int const maxn = 9;
int const maxb = int(2e6 + 12);
int const inf = int(1e9 + 7);
ll const linf = ll(1e18 + 12);
double const eps = 1e-7;
double const pi = acos(-1);
#ifdef _WIN32
	#define I64 "%I64d"
#else
	#define I64 "%lld"
#endif
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define next MyLittleNext
//#define end MyLittleEnd
#define all(x) x.begin(), x.end()
//#define fn ""

int dp[maxn][maxn][1 << maxn];

int rec(int n, int k, int mask)
{
	if (!k)
		return 1;
	if (k > n)
		return 0;
	int & ans = dp[n][k][mask];
	if (ans != -1)
		return ans;
	ans = rec(n - 1, k, mask);
	for (int i = 0; i < n; i++)
		if ((mask & (1 << i)) == 0)
			ans += rec(n - 1, k - 1, mask & (1 << i));
	return ans;
}

int main()
{
	#ifdef fn
		freopen(fn ".in", "r", stdin);
		freopen(fn ".out", "w", stdout);
	#endif
	int n, k;
	scanf("%d%d", &n, &k);
	memset(dp, -1, sizeof(dp));
	printf("%d", rec(n, k, 0));
}
