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
int n,m;

bool valid(int ci,int cj){
    return ci>=0 and cj>=0 and ci<n and cj<m;
}

int topleft(int ci,int cj,vector<vector<int>>&v){
    int sum=0;
    while(valid(ci,cj)){
        sum+=v[ci][cj];
        ci--;
        cj--;
    }
    return sum;
}
int topright(int ci,int cj,vector<vector<int>>&v){
    int sum=0;
    while(valid(ci,cj)){
        sum+=v[ci][cj];
        ci--;
        cj++;
    }
    return sum;
}
int bottomleft(int ci,int cj,vector<vector<int>>&v){
    int sum=0;
    while(valid(ci,cj)){
        sum+=v[ci][cj];
        ci++;
        cj--;
    }
    return sum;
}
int bottomright(int ci,int cj,vector<vector<int>>&v){
    int sum=0;
    while(valid(ci,cj)){
        sum+=v[ci][cj];
        ci++;
        cj++;
    }
    return sum;
}

int32_t main () 
{

    nabidtheboss();
    w(t){
        int ans=INT_MIN;
        cin>>n>>m;
      vector<vector<int>>v(n,vector<int>(m));
        loop(i,n){
            loop(j,m) cin>>v[i][j];
        }

        loop(i,n){
            loop(j,m) {
               int sum=v[i][j]+(topright(i-1,j+1,v)+topleft(i-1,j-1,v)+bottomleft(i+1,j-1,v)+bottomright(i+1,j+1,v));
                ans=max(ans,sum);
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}