#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define int long long
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

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef double dl;

const double PI = acos(-1);
#define MOD 1000000007

#define nabidtheboss() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define w(t) int t; cin >> t; cin.ignore(); while (t--) 


int32_t main()
{

    nabidtheboss();
    int n,k;
    cin>>n>>k;

    vi v(n);

    loop(i,n) cin>>v[i];

    int l=0,r=0,ans=0,sum=0;

    pbds<pii>p;
    while(r<n and l<n){
            p.insert({ v[r],r });
            sum+=v[r];
        if (r - l + 1 == k) {
            int pos = k / 2;
            if (k % 2 == 0) {
                pos--;
            }
            auto it = p.find_by_order(pos);

            int ans=0;
            for(int i=l;i<r;i++){
                 ans+=abs(it->first-v[l]);
            }
            cout<<ans<<" ";
            sum-=v[l];
            p.erase({ v[l],l });
            l++;
        }
        r++;
        }
 
    return 0;
}