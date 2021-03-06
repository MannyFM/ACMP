
#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;
typedef unsigned long long ull;
typedef map <int, int> mii;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

int const maxn = int(1e5 + 12);
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
#define LOCAL

int a[33], n;
char s[33];

ll rec(int pos, int same)
{
	if (!same)
		return (1ll << (n - pos));
	if (n == pos)
		return 1;
	ll ans = 0;
	if (4 < a[pos])
		ans += rec(pos + 1, 0);
	if (7 < a[pos])
		ans += rec(pos + 1, 0);
	if (4 == a[pos] || 7 == a[pos])
		ans += rec(pos + 1, 1);
	return ans;
}

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%s", s);
	n = strlen(s);
	for (int i = 0; i < n; i++)
		a[i] = s[i] - '0';
	ll ans = 0;
	for (int i = 1; i < n; i++)
		ans += (1ll << i);
	ans += rec(0, 1);
	printf(I64, ans);
}
