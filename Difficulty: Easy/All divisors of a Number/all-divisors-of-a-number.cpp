//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  void solve(int n,int i){
      if(i>n/i){
          return;
      }
      if(n%i==0){
          cout<<i<<" ";
      }
      solve(n,i+1);
      if(n%i==0&&n/i!=i){
          cout<<n/i<<" ";
      }
  }
    void print_divisors(int n) {
       int i=1;
       solve(n,i);
        // Code here.
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
        ob.print_divisors(n);
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends