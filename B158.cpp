// for c++14         g++ -std=c++14 test.cpp
// for c++17         g++ -std=c++1z test.cpp
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define int long long int
#define ld long double
#define lop(i, a, b) for (int i = a; i < b; i++)
#define lope(i, a, b) for (int i = a; i <= b; i++)
#define rlop(i, b, a) for (int i = b - 1; i >= a; i--)
#define nl '\n'
#define pb push_back
#define F first
#define S second
#define pii pair<int, int>
#define vi vector<int>
#define vpi vector<pii>
#define mii map<int, int>
#define umii unordered_map<int, int>
#define si set<int>
#define sc set<char>
#define spi set<pii>
#define usi unordered_set<int>
#define que_max priority_queue<int>
#define que_min priority_queue<int, vi, greater<int>>
#define clr(x) x.clear()
#define all(p) p.begin(), p.end()
#define mset(a, b, c) lop(i, 0, c) a[i] = b
#define minimum(a) *min_element(a.begin(), a.end())
#define maximum(a) *max_element(a.begin(), a.end())

typedef tree<pii, null_type, less<pii>, rb_tree_tag,
             tree_order_statistics_node_update>
    new_set;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int b[4] = {0};
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        b[t - 1]++;
    }
    int count = b[3];
    //cout << count << endl;
    count += b[2];
    if (b[0] >= b[2])
        b[0] -= b[2];
    else
        b[0] = 0;
    //cout << count << endl;
    count += b[1] / 2;
    //cout << b[0] << endl;
    if (b[1] % 2 != 0)
        b[0] += 2;
    count += b[0] / 4;
    if (b[0] % 4 != 0)
        count++;
    cout << count << endl;
    return 0;
}
