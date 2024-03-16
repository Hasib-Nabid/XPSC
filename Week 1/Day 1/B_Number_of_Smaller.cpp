#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
#define forn(i, n) for(int i = 0; i < int(n); i++)

#define nabidtheboss() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define w(t) int t; cin >> t; cin.ignore(); while (t--) 

int main()
{
    nabidtheboss();
    int n, m;
    cin >> n >> m;
    vi v1(n), v2(m);
    forn(i, n) cin >> v1[i];
    forn(i, m) cin >> v2[i];

    long long l = 0, r = 0, ans=0;
    while (r < m) {
        while(l<n and v1[l]<v2[r]){
            l++;
            ans++;
        }
      cout<<ans<<" ";
      r++;
    }

    return 0;
}
