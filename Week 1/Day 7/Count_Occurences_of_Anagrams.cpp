//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
        unordered_map<char, int> m1, m2;
        for (auto c : pat) m1[c]++;

        int l = 0, r = 0, x = pat.size(), y = txt.size(), ans = 0;

        while (r < y) {
            m2[txt[r]]++;
            if (r - l + 1 == x) {
                if (m1 == m2) ans++;
                m2[txt[l]]--;
                if (m2[txt[l]] == 0) m2.erase(txt[l]);
                l++;
                r++;
            }
        else r++;
        }
        return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends