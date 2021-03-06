
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <set>
#include <ctime>
#include <cmath>

using namespace std;

#define ll long long
#define str string
#define INF (int)(1e9+7)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define fr(ii, ee) for (int ii = 0; ii < ee; ii++)
#define fbr(ii, bb, ee) for (int ii = bb; ii < ee; ii++)
#define frv(ii, ite, vv) for(vector<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)
#define frs(ii, ite, vv) for(set<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)
#define frq(ii, ite, vv) for(queue<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	str a, b;
	cin >> a >> b;
	int n = a.size();
	int uk = 0;
	if (a == b)
	{
		cout << 0;
		return 0;
	}
	str out = a;
	int res = -1;
	fr(i, n)
	{
		str bu = "";
		for(int j = 0; j < n; j++)
			bu += out[(j-1+n)%n];
		out = bu;
		if (out == b)
		{
			res = (i+1);
			break;
		}
	}
	cout << res;
}