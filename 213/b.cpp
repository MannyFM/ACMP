
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
#define all(x) x.begin(), x.end()
#define next MyLittleNext
//#define end MyLittleEnd

int n, a[maxn];
int m, b, cnt, ans, add;

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", a + i);
	scanf("%d%d", &add, &m);
	for (int i = 1; i <= m; i++)
	{
		int sum = 0;
		cnt = 0;
		for (int j = 1; j <= n; j++)
		{
			scanf("%d", &b);
			cnt += b;
			sum += b * a[j];
		}
		sum += cnt == n ? add : 0;
		sum -= (i - 1) * 2;
		ans = max(ans, sum);
		printf("%d\n", ans);
	}
}
