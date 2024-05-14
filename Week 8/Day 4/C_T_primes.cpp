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

const int mx=1e6+5;
vector<bool>prime(mx+1,true);

void sieve(){
    for(int i=2;i<=mx;i++){
        if(prime[i]){
            for(int j=i*i;j<=mx;j+=i){
                prime[j]=false;
            }
        }
    }
}

int32_t main () 
{

    nabidtheboss();
    sieve();

    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        if(x==1) no;
        else{
        int root=sqrt(x);
        if(root*root==x and prime[root]) yes;
        else no;
    }
    }
    return 0;
}