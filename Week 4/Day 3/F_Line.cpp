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
        int n;
        cin >> n;
        string s;
        cin >> s;

        vi diff, ans(n);
        int sum = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int l = i;
            int r = n - i - 1;
            sum += max(l, r);
            if (s[i] == 'L')
            {
                if (l >= r)
                {
                    continue;
                }
                else
                {
                    diff.push_back(r - l);
                    cnt++;
                }
            }
            else if (s[i] == 'R')
            {
                if (l <= r)
                {
                    continue;
                }
                else
                {
                    diff.push_back(l - r);
                    cnt++;
                }
            }
        }
        if(n==1) cout<<"0"<<endl;
        else{
        sort(all(diff));

        // for (int i = cnt; i < n; i++)
        // {
        //     ans[i] = sum;
        // }

        for (int i = cnt-1; i < n; i++)
        {
            ans[i] = sum;
        }
        
        int a = 0;
        for (int i = cnt-2; i>=0; i--)
        {
            ans[i] = ans[i+1] - diff[a];
            a++;
        }

        for (auto u : ans)
        {
            cout << u << " ";
        }
        cout << endl;
    }
    }
    return 0;
}