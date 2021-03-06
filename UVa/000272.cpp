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
    string input;
    int c = 0;
    while (getline(cin, input)) {
        for (int i = 0; i < input.length(); i++) {
            if (input[i] == '"') {
                cout << (c == 1 ? "''" : "``");
                c = 1 - c;
            } else cout << input[i];
        }
        cout << endl;
    }
    return 0;
}