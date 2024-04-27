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
        string s;
        cin>>s;

        int mn=min(s[0],s.back());
        int mx=max(s[0],s.back());

        vector<pair<char,int>>v;
    for(int i=0;i<sz(s);i++){
        if(s[i]>=mn and s[i]<=mx){
            v.push_back({s[i],i+1});
        }
    }
    if(s[0]==mn){
    sort(all(v));
    }
    else sort(rall(v));
    int cost=0;

    for(int i=1;i<v.size();i++){
        cost+= abs(v[i].first-v[i-1].first);
    }
    cout<<cost<<" "<<v.size()<<endl;
    for(auto u:v){
        cout<<u.second<<" ";
    }
    shesh;
    }

    return 0;
}