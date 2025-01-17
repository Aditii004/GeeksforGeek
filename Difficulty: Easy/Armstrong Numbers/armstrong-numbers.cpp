//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
       int originalNumber = n;
    int ans = 0;
    int cnt = 0;

    
    int temp = n;
    while (temp > 0) {
        cnt++;
        temp /= 10; 
    }

    
    temp = n; 
    while (temp > 0) {
        int digit = temp % 10;
        ans += pow(digit, cnt);
        temp /= 10; 
    }

   
    return ans == originalNumber;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        bool flag = ob.armstrongNumber(n);
        if (flag) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends