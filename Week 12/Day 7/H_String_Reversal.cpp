#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

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

    int n;
    cin >> n;
    string s;
    cin >> s;
    string r = s;
    reverse(r.begin(), r.end());

    map<char, vector<int>> pos_s, pos_r;
    for (int i = 0; i < n; i++) {
        pos_s[s[i]].push_back(i);
        pos_r[r[i]].push_back(i);
    }

    vector<int> permutation(n);
    for (char ch = 'a'; ch <= 'z'; ch++) {
        for (int i = 0; i < pos_s[ch].size(); i++) {
            permutation[pos_r[ch][i]] = pos_s[ch][i];
        }
    }

    pbds<int> p;
    int ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        ans += p.order_of_key(permutation[i]);
        p.insert(permutation[i]);
    }
    cout << ans << endl;

    return 0;
}

