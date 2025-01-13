//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int binaryToDecimal(string &b) {
        int n=b.length();
        int res=0;
        
        for(int i=0;i<=n;i++){
            if(b[i]=='1'){
                res+=pow(2,n-i-1);
            }
                
            }
            return res;
          
        // Code here.
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.binaryToDecimal(str);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends