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
    w(t)
    {
        int n, ans = 0;
        cin >> n;
        vector<pair<int, int>> a, b, c;
        loop(i, n)
        {
            int x;
            cin >> x;
            a.push_back({x, i});
        }

        loop(i, n)
        {
            int x;
            cin >> x;
            b.push_back({x, i});
        }
        loop(i, n)
        {
            int x;
            cin >> x;
            c.push_back({x, i});
        }

        sort(rall(a));
        sort(rall(b));
        sort(rall(c));

        int mx = INT_MIN;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    if ((a[i].second != b[j].second) && (a[i].second != c[k].second) && (b[j].second != c[k].second))
                    {
                        ans = a[i].first + b[j].first + c[k].first;
                        mx = max(mx, ans);
                    }
                }
            }
        }
        cout << mx << endl;
    }

    return 0;
}