#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cmath>
#include <iomanip>
#include <cctype>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <utility>
#include <deque>
#include <ctime>
#include <sstream>
#include <list>
#include <bitset>
#include <climits>
#include <functional>
#include <complex>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/hash_policy.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int int
#define itn int
using namespace std;
using namespace __gnu_pbds;
typedef long long ll ;
typedef pair <int, int> PII;
#define x first
#define y second
#define pq priority_queue
const double pi = acos (-1);
namespace fastIO {
	template <class T>
	inline void read (T &x) {
		x = 0;
		bool fu = 0;
		char ch = 0;
		while (ch > '9' || ch < '0') {
			ch = getchar ();
			if (ch == '-') fu = 1;
		}
		while (ch <= '9' && ch >= '0') x = (x * 10 - 48 + ch), ch = getchar ();
		if (fu) x = -x;
	}
	inline int read () {
		int x = 0;
		bool fu = 0;
		char ch = 0;
		while (ch > '9' || ch < '0') {
			ch = getchar ();
			if (ch == '-') fu = 1;
		}
		while (ch <= '9' && ch >= '0') x = (x * 10 - 48 + ch), ch = getchar ();
		return fu ? -x : x;
	}
	template <class T, class... Args>
	inline void read (T& t, Args&... args) {
		read (t);
		read (args...);
	}
	char num[40];
	template <class T>
	inline void write (T x) {
		if (x == 0) {
			putchar ('0');
			return ;
		}
		T tmp = x > 0 ? x : -x;
		if (x < 0) putchar ('-');
		register int ct = 0;
		while (tmp) {
			num[ct ++] = tmp % 10 + '0';
			tmp /= 10;
		}
		while (ct) {
			putchar (num[-- ct]);
		}
	}
	template <class T>
	inline void write (T x, char ch) {
		write (x);
		putchar (ch);
	}
}
using namespace fastIO;
int a[100005], b[100005];
int mp[200010];
int mini[200010];
int c[100005];
signed main () {
	int t;
	cin >> t;
	while (t --) {
		memset (mp, 0, sizeof mp);
		memset (mini, 0, sizeof mini);
		int n;
		read (n);
		int ans = 0x7f7f7f7f;
		for (int i = 1;i <= n; ++ i) {
			read (a[i]);
			mp[a[i]] = i - 1;
		}
		for (int i = 1;i <= n; ++ i) {
			read (b[i]);
			mp[b[i]] = i - 1;
		}
		if (a[1] < b[1]) {
			cout << "0" << endl;
		}
		else {
			for (int i = 1;i <= 2 * n; i += 2) {
                                for (int j = 1;j <= 2 * n; j += 2) {
                                        if (i < j) ans = min (ans, mp[i] + mp[j]);
                                }
			}
			cout << ans << endl;
		}
	}
	return 0;
}