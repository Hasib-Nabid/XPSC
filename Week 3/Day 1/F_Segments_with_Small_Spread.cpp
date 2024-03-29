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

    int n;
    ll k;
    cin >> n >> k;
    vl a(n);
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }

    long long l = 0, r = 0, ans = 0;
    multiset<long long> ml;

    while (r < n) {
        ml.insert(a[r]);
        long long mn, mx;
        mn = *ml.begin(), mx = *ml.rbegin();
        if ((mx - mn) <= k) {
            ans += (r - l + 1);
        }
        else {
            while (l < r) {
                mn = *ml.begin(), mx = *ml.rbegin();
                if ((mx - mn) <= k) {
                    break;
                }
                auto it = ml.find(a[l]);
                ml.erase(it);
                l++;
            }
            mn = *ml.begin(), mx = *ml.rbegin();
            if ((mx - mn) <= k) {
                ans += (r - l + 1);
            }
        }
        r++;
    }

    cout << ans << endl;

    return 0;
}

