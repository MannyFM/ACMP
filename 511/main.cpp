
#include <iostream>
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
#define mk make_pair
#define F first
#define S second
#define fr(ii, ee) for (int ii = 0; ii < ee; ii++)
#define frv(ii, ite, vv) for(vector<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)
#define frs(ii, ite, vv) for(set<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)
#define frq(ii, ite, vv) for(queue<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)

int main()
{ 
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int k, x, y;
	cin >> k;
	if (k > 144)
	{
		cout << "NO";
		return 0;
	}
	y = (k-1)*5;
	printf("%i %i", y/60, y%60);
}