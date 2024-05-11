#include<bits/stdc++.h>
using namespace std;

#define int long long
#define float double
#define endl '\n'
#define pb push_back
#define po pop_back
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define shesh cout << endl
#define loop(i,n) for (int i =0; i < (n); ++i)
#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
typedef vector<int> vi;
int gcd ( int a, int b ) { return __gcd ( a, b ); }
int lcm ( int a, int b ) { return a * ( b / gcd ( a, b ) ); }
const double PI = acos(-1);
#define nabidtheboss() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define w(t) int t; cin >> t; cin.ignore(); while (t--) 


int32_t main () 
{

    nabidtheboss();
    w(t){

string t, p;
    cin >> t;
    cin >> p;
    int n = t.size(), m = p.size();
    vector<int> a(n);
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }

    auto ok = [&](int mid) {
        vector<bool> bad(n + 1);
        for (int i = 0;i < mid;i++) {
            bad[a[i]] = true;
        }
        int j = 0;
        bool found = false;
        for (int i = 0;i < n;i++) {
            if (t[i] == p[j] && !bad[i + 1]) {
                j++;
            }
            if (j == m) {
                found = true;
                break;
            }
        }
        return found;
        };

    int l = 1, r = 1e18, mid, ans = 1;

    while (l <= r)
    {
        mid = (l + (r - l) / 2);
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << ans << endl;
}

    return 0;
}