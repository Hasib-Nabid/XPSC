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
        vector<string>v(n);
        set<string>s;
        loop(i,n) {
            cin>>v[i];
            s.insert(v[i]);
        }
        
        string ss="";
        for(int i=0;i<n;i++){
        string t=v[i];
        bool flag=false;
            int size=t.size();
            for(int j=1;j<size;j++){
               string temp1=t.substr(0,j);
               string temp2=t.substr(j);
               if(s.count(temp1) and s.count(temp2)){
                flag=true;
                ss+='1';
                break;
               }
            // cout<<temp1<<endl;
            // cout<<temp2<<endl;
            }
         //  cout<<endl;
           if(!flag) ss+='0';
        }

cout<<ss<<endl;
    }

    return 0;
}