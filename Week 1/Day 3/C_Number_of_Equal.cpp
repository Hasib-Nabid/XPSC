#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
#define forn(i, n) for(int i = 0; i < int(n); i++)

#define nabidtheboss() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define w(t) int t; cin >> t; cin.ignore(); while (t--) 

int main()
{
    nabidtheboss();
    int n, m;
    ll ans=0;
    cin >> n >> m;
    vi v1(n), v2(m);
    forn(i, n) cin >> v1[i];
    forn(i, m) cin >> v2[i];

    int l = 0, r = 0;

    while (l < n and r < m) { 

      int prev=v1[l];
      ll cnt1=0,cnt2=0;

        while(l<n and v1[l]==prev){
            cnt1++;
            l++;
        }
        while(r<m and prev>v2[r]){
            r++;
        }
        while(r<m and v2[r]==prev){
            cnt2++;
            r++;
        }

    ans+=(cnt1*cnt2);
    }
    cout<<ans<<endl;

    return 0;
}
