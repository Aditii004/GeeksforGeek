//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*you are required to complete this method*/
class Solution { 
  public:
    int convertFive(int n) {
         string st=to_string(n);
         for(int i=0;i<st.length();i++){
             if(st[i]=='0'){
                 st[i]='5';
             }
         }
         return stoi(st);
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.convertFive(n) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends