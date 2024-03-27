#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define pb push_back
#define po pop_back
#define F first
#define S second
#define endl '\n'
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define sz(x) (int)x.size()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define shesh cout << endl
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define mem(a, b) memset(a, b, sizeof(a))
#define gcd(a, b) __gcd(a, b)

ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }
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

bool palindrome(vector<int> &arr, int i, int j)
{
    while (i < j)
    {
        if (arr[i] != arr[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()
{
    nabidtheboss();
    w(t)
    {
        int n, mx = 0, ans = 0;
        cin >> n;
        int a[n];
        forn(i, n)
        {
            cin >> a[i];
        }

        bool flag = true;

        int x, y;
        int i = 0, j = n - 1;
        while (i < j)
        {
            if (a[i] != a[j])
            {
                flag = false;
                x = a[i];
                y = a[j];
                break;
            }
            i++;
            j--;
        }

        if (flag)
            yes;
        else
        {
            vector<int> ans1, ans2;

            for (int i = 0; i < n; i++)
            {
                if (a[i] != x)
                    ans1.push_back(a[i]);
                if (a[i] != y)
                    ans2.push_back(a[i]);
            }

            bool ans = palindrome(ans1, 0, ans1.size() - 1) || palindrome(ans2, 0, ans2.size() - 1);

            if (ans)
                yes;
            else
                no;
        }
    }
    return 0;
}