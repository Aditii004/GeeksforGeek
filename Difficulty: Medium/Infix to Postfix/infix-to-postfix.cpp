//{ Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
 
    
    int preced(char c) {
        if(c == '^') return 4;
        else if(c == '*' || c == '/') return 3;
        else if(c == '+' || c == '-') return 2;
        else return 1;
    }
    
    public:
    
    string infixToPostfix(string s) {
        
        int n = s.size();
        string res = "";
        stack<char> st;
        
        for(int i=0; i<n; i++){
            
            char ch = s[i];
            
            // Case 1: If any character add to string
            if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
                res += ch;
            
            // Case 2: If '(' or any operator
            else{
                
                // Case 2a: If '('
                if(ch == '(') {
                    st.push(ch);
                }
                
                // Case 2b: If ')'
                else if(ch == ')'){
                    while(!st.empty() && st.top() != '('){
                        res += st.top();
                        st.pop();
                    }
                    st.pop();
                }
                
                // Case 2c: if operator
                else{
                
                    while(!st.empty() && preced(st.top()) >= preced(ch)){
                        res +=  st.top();
                        st.pop();
                    }
                    
                    st.push(ch);
                
                }
                        
                
            }
            
        }
        
        while(!st.empty()){
            res += st.top();
            st.pop();
        }
        
        return res;
        
        
    }

};


//{ Driver Code Starts.
// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    }
    return 0;
}

// } Driver Code Ends