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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0;i < n;i++) {
            cin >> a[i];
        }

        map<int, int> cnt;
        for (int i = 0;i < n;i++) {

            for (int j = 2;j * j <= a[i];j++) {
                if (a[i] % j == 0) {
                    while (a[i] % j == 0) {
                        cnt[j]++;
                        a[i] /= j;
                    }
                }
            }
            if (a[i] > 1) {
                cnt[a[i]]++;
            }
        }

        bool ok = true;

        for (auto [x, y] : cnt) {
            if (y % n != 0) {
                ok = false;
                break;
            }
        }

        if (ok) yes;
        else no;
    }

    return 0;
}