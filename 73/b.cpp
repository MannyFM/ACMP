
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

char s[300], t[300];
int n;

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%s", s + 1);
	n = strlen(s + 1);
	for (int i = 1; i <= n; i++)
	{
		int x = '0' <= s[i] && s[i] <= '9' ? (s[i] - '0') : (s[i] - 'A' + 10);
		x = (x - i + 27 * 27) % 27;
		if (x == 0)
			t[i] = ' ';
		else
			t[i] = x + 'a' - 1;
	}
	puts(t + 1);
}
