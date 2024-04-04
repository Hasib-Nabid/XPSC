#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
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
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define shesh cout << endl
#define forn(i, n) for(int i = 0; i < int(n); i++)
#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)

ll gcd ( ll a, ll b ) { return __gcd ( a, b ); }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }
const double PI = acos(-1);

#define nabidtheboss() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define w(t) int t; cin >> t; cin.ignore(); while (t--) 


int main()
{
    nabidtheboss();
    w(t)
    {
        ll n, q;
        cin >> n >> q;
        ll a[n+1], pre[n+1];
        for (ll i = 1; i <= n; i++)  cin >> a[i];
        pre[1] = a[1];
        for (ll i = 2; i <= n; i++)
        {
            pre[i] = pre[i - 1] + a[i];
        }
        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            ll sum = 0;
            if (l == 1) sum = pre[r];
            else sum = pre[r] - pre[l - 1];
            ll ans = pre[n] - sum + (k * (r - l + 1));
            if (ans % 2 == 1)  yes;
            else no;
        }
    }

    return 0;
}