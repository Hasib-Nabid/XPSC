#include <bits/stdc++.h>
using namespace std;

#define int long long
#define float double
#define endl '\n'
#define pb push_back
#define po pop_back
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define sz(x) (int)x.size()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define shesh cout << endl
#define loop(i, n) for (int i = 0; i < (n); ++i)
#define mem(a, b) memset(a, b, sizeof(a))
#define gcd(a, b) __gcd(a, b)
typedef vector<int> vi;
int gcd(int a, int b) { return __gcd(a, b); }
int lcm(int a, int b) { return a * (b / gcd(a, b)); }
const double PI = acos(-1);
#define nabidtheboss()            \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);
#define w(t)      \
    int t;        \
    cin >> t;     \
    cin.ignore(); \
    while (t--)

int32_t main()
{
    nabidtheboss();

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(m + 1);
    for (int i = 0;i <= m;i++) {
        cin >> a[i];
    }

    vector<vector<int>> binary;
    for (int i = 0;i <= m;i++) {
        vector<int> v;
        for (int k = 0;k < n;k++) {
            if ((a[i] >> k) & 1) {
                v.push_back(1);
            }
            else {
                v.push_back(0);
            }
        }
        binary.push_back(v);
    }
  int ans = 0;
    vector<int> fedor = binary[m];
    for (int i = 0;i < binary.size() - 1;i++) {
        vector<int> v = binary[i];
        int cnt = 0;
        for (int k = 0;k < n;k++) {
            if (fedor[k] != v[k]) {
                cnt++;
            }
        }
        if (cnt <= k) {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}