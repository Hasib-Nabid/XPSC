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

const int maxN = 1e4;

    vector<int > pw;
    for (int i = 1;i <= maxN;i++) {
        pw.push_back(pow(i, 3));
    }

w(t){
        int x;
        cin >> x;
        bool found = false;

        for (int i = 0;i < maxN;i++) {
            if (pw[i] >= x) {
                break;
            }
            int l = 0, r = maxN - 1, mid;
            long long need = x - pw[i];
            bool ok = false;
            while (l <= r) {
                mid = l + (r - l) / 2;
                if (pw[mid] == need) {
                    ok = true;
                    break;
                }
                else if (pw[mid] > need) {
                    r = mid - 1;
                }
                else {
                    l = mid + 1;
                }
            }
            if (ok) {
                found = true;
                break;
            }
        }

        if (found) yes;
        else no;
}
    

    return 0;
}
