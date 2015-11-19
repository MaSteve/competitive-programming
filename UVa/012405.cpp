#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <stack>
#include <algorithm> // max...
#include <utility> // pair
#include <complex>
#include <climits> // int, ll...
#include <limits> // double...
#include <cmath> // abs, atan...
#include <cstring> // memset
#include <string>
#include <functional> // greater, less...

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ll, ll> ll_ll;
typedef vector<int> vi;
typedef map<int, int> mii;
typedef vector<ii> vii;
typedef vector<ll> vll;
typedef vector<vi> vvi;

int main() {
    int testcases, n;
    char arr[100];
    
    scanf("%d", &testcases);
    
    for (int tc = 1; tc <= testcases; tc++) {
        scanf("%d %s", &n, arr);
        int ans = 0;

        for (int i = 0; i < n; ) {
            if (arr[i] == '#') i++;
            else {
                ans++;
                i += 3;
            }
        }
        printf("Case %d: %d\n", tc, ans);
    }

    return 0;
}
