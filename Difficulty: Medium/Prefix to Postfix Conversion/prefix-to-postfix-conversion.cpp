//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string preToPost(string pre_exp) {
        int n=pre_exp.size();
        stack<string>st;
        for(int i=n-1;i>=0;i--){
            char c=pre_exp[i];
            if((c>='a'&& c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9')){
                st.push(string(1,c));
            }
            else if(c=='+'||c=='-'||c=='*'||c=='/'){
                string op1=st.top();
                st.pop();
                string op2=st.top();
                st.pop();
                st.push(op1+op2+c);
            }
        }
        return st.top();
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string prefix;
        cin >> prefix;

        Solution obj;
        cout << obj.preToPost(prefix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends