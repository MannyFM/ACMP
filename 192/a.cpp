
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
//#define fn

template <typename T>
bool umax(T & a, T b)
{
	return a < b ? (a = b, 1) : 0;
}

template <typename T>
bool umin(T & a, T b)
{
	return a > b ? (a = b, 1) : 0;
}

int n, a[maxn];

int main()
{
	#ifdef fn
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", a + i);
	a[0] = n;
	int j = 0;
	set <int> se;
	for (int i = n; i > 0; i--)
	{
		se.insert(a[i]);
		auto it = se.upper_bound(a[i]);
		if (it != se.end())
		{
			j = i;
			a[i] = *it;
			se.erase(it);
			break;
		}
	}
	for (int i = j + 1; i <= n; i++)
	{
		a[i] = *se.begin();
		se.erase(a[i]);
	}
	for (int i = 1; i <= n; i++)
		printf("%d ", a[i]);
}

