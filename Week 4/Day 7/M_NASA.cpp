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

    vi pre;
    const int mx=1<<15;

bool palindrome(int n){
    string s=to_string(n);
    string temp=s;
    reverse(all(s));
    return temp==s;
}

void precomputed_palindrome(){
for(int i=0;i<=mx;i++){
    if(palindrome(i)){
        pre.pb(i);
    }
}
}

int32_t main () 
{

    nabidtheboss();
    precomputed_palindrome();
w(t){
    int n;
    cin>>n;
    vi v(n);
    unordered_map<int,int>mp;
    loop(i,n){
         cin>>v[i];
         mp[v[i]]++;
    }

int ans=n;
for(int i=0;i<n;i++){
    for(int j=0;j<pre.size();j++){
        int curr=v[i]^pre[j];
        ans+=mp[curr];
    }
}

cout<<ans/2<<endl;
}
    return 0;
}