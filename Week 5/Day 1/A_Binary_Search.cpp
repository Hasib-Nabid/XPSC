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
    int x,y;
    cin>>x>>y;
    vi a(x),b(y);
    loop(i,x) cin>>a[i];

    loop(i,y){ 
          int l=0,r=x-1,ans=-1;
        cin>>b[i];

   while(l<=r){
    int mid=(l+r)/2;
    if(a[mid]==b[i]){
        ans=mid;
        break;
    }
    else if(b[i]>a[mid]){
        l=mid+1;
    }
    else{
         r=mid-1;
    }
   }

   if(ans!=-1) yes;
   else no;
    }

    return 0;
}