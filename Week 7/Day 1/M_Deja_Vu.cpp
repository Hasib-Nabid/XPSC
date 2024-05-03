#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define pb push_back
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
#define nabidtheboss() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define w(t) int t; cin >> t; cin.ignore(); while (t--) 


int32_t main () 
{

    nabidtheboss();
    w(t){
        int n,q;
        cin>>n>>q;
        vi v(n),x(q);
        loop(i,n) cin>>v[i];
        loop(i,q) cin>>x[i];
vector<bool>vis(q,0);
        for(int i=0;i<q;i++){
            if(vis[x[i]]){
                continue;
            }
            else{
                vis[x[i]]=1;
            for(int j=0;j<n;j++){
                if(v[j]% (1<<x[i])==0){
                    v[j]+=(1<<(x[i]-1));
                }
            }
        }
        }
        for(auto u:v){
            cout<<u<<" ";
        }
        shesh;
    }

    return 0;
}
