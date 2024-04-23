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
        int n,c1=0,c2=0,mx1=INT_MIN ,mx2=INT_MIN;
        cin>>n;
        vi v(n),y(n);
        loop(i,n) cin>>v[i];
        loop(i,n) cin>>y[i];
        loop(i,n){
            if(v[i]!=0) {
                c1++;
                mx1=max(c1,mx1);
            }
            else c1=0;
        }
        loop(i,n){
            if(y[i]!=0) {
                c2++;
                mx2=max(c2,mx2);
            }
            else c2=0;
        }
        if(mx1>mx2) cout<<"Om"<<endl;
        else if(mx1==mx2) cout<<"Draw"<<endl;
        else cout<<"Addy"<<endl;
    }

    return 0;
}