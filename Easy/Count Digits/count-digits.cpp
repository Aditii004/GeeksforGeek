//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
       int ans=0;
       int originalNum=N;
       while(N>0){
         int lastDigit=N%10;
         if(lastDigit!=0&&originalNum%lastDigit==0){
             ans++;
         }
         N=N/10;
           
       }
       return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends