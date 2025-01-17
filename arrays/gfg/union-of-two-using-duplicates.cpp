//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    // vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        // return vector with correct order of elements
    //     int s1 = a.size();
    //     int s2 = b.size();
    //     vector<int> unionArr;
    //     int i = 0;
    //     int j = 0;
        
        
    //     while(i<s1 && j < s2) {
    //         if(a[i] < b[j]) {
    //             if(unionArr.empty() ||
    //             unionArr.back() != a[i]) {
    //                 unionArr.push_back(a[i]);
    //                 i++;
    //             }
    //         } else if(a[i] > b[j]){
    //             if(unionArr.empty() ||
    //             unionArr.back() != b[j]) {
    //                 unionArr.push_back(b[j]);
    //                 j++;
    //             }
    //         } else {  
    //             if (unionArr.empty() || unionArr.back() != a[i]) {
    //                 unionArr.push_back(a[i]);
    //             }
    //             i++;
    //             j++;
    //         }
    //     }
        
    //     while(j < s2) {
    //         if(unionArr.size() == 0 ||
    //             unionArr.back() != b[j]) {
    //                 unionArr.push_back(b[j]);
    //                 j++;
    //         } 
    //     }
        
    //     while (i < s1) {
    //         if(unionArr.size() == 0 ||
    //             unionArr.back() != a[i]) {
    //                 unionArr.push_back(a[i]);
    //                 i++;
    //             }
    //     }
    //     return unionArr;
    // }

///This is the accepted code of GFG by using SET Dta structure
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        // return vector with correct order of elements
        int s1 = a.size();
        int s2 = b.size();
        set<int> unionArr;
        vector<int> ans;
        int i = 0;
        
        
        for(int i = 0;i<s1;i++) {
            unionArr.insert(a[i]);
        }
         
        for(int j =0; j < s2;j++) {
            unionArr.insert(b[j]);
        }
        
        for(auto it: unionArr) {
            ans.push_back(it);
            i++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a, b;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        // Read second array
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            b.push_back(number);
        }

        Solution ob;
        vector<int> ans = ob.findUnion(a, b);
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends