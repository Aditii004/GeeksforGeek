//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

//Position this line where user code will be pasted.
class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
         // code here
        int n1=arr1.size();
        int n2=arr2.size();
        int n=n1+n2;

        // even means two middle elements
        int ans=0;
        int temp=0;
        int count=n/2+1;
        int i=0, j=0;
        while(count--){
            if(i<n1 && j<n2){
                if(arr1[i]<arr2[j]){
                    temp=ans;
                    ans=arr1[i];
                    i++;
                }
                else{
                    temp=ans;
                    ans=arr2[j];
                    j++;
                }
            }
            else if(i<n1){
                temp=ans;
                ans=arr1[i];
                i++;
            }
            else{
                temp=ans;
                ans=arr2[j];
                j++;
            }
        }
        return ans+temp;
    
        // code here
    }
};

//{ Driver Code Starts.
//Back-end complete function template in C++

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, brr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            brr.push_back(number2);
        }
        Solution ob;
        int res = ob.SumofMiddleElements(arr, brr);
        cout << res << endl;
    }
}
// } Driver Code Ends