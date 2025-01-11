//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int isPrime(int N) {
        if(N<=1){
            return 0;
        }
        for(int i=2;i<=sqrt(N);i++ ){
            if(N%i==0){
                return 0;
            }
        }
        return 1;
        // Code here
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution obj;
		int ans = obj.isPrime(N);
		cout  << ans <<"\n";
	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends