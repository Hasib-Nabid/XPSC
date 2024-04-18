#include<bits/stdc++.h>
using namespace std;

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
        int n,ok=0,pblm=0;
        cin>>n;
       string s;
       cin>>s;

        int l=0,r=n-1;
        while(l<r){
            if(s[l]==s[r]) ok+=2;
            else {
                pblm++;
            }
            l++;
            r--;
        }

string ans = "";
        for (int i = 0; i <= n; i++)
        {
  
            int total = i-pblm;
            if(total < 0) {
                ans.pb('0'); 
                continue;
            }
            total = max((total % 2), total - ok); 
            total = max(0, total - (n%2));

            if(total == 0) {
                ans.pb('1');
            }
            else{ ans.pb('0'); 
        }
        }
        cout<<ans<<endl;
    }
    return 0;
}