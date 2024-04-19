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
        cin>>n;

        int msb=__lg(n);
        int a= (n & (~(1 << msb)));
        int b=n^a;

        vector<vector<int>>binary;

        vi x,y;
        for(int i=msb;i>=0;i--){
            if((a>>i)&1){
                x.push_back(1);
            }
            else x.push_back(0);
        }

        binary.push_back(x);
        for(int i=msb;i>=0;i--){
            if((b>>i)&1){
                y.push_back(1);
            }
            else y.push_back(0);
        }
        binary.push_back(y);

        int cnt=0;
    
    //   for(int i=0;i<2;i++){
    //     for(int j=0;j<=msb;j++){
    //         cout<<binary[i][j];
    //     }
    //     shesh;
    //   }
    //     shesh; 

if(a==0 or b==0){
    cout<<1<<endl;
}
else{
    for(int i=0;i<=msb;i++){
        if(binary[0][i]==0 and binary[1][i]==0) cnt++;
    }
  cout<<(1<<cnt)<<endl;
    }
    }

return 0;
}