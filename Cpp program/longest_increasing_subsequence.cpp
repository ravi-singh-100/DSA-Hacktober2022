//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
        int lis[n];
        lis[0] = 1;
        for (int i = 1; i < n; i++)
        {
            lis[i] = 1;
            for (int j = 0; j <= i - 1; j++)
            {

                if (a[j] < a[i])
                {
                    lis[i] = max(lis[i], lis[j] + 1);
                }
            }
        }
        int res = lis[0];

        for (int i = 1; i < n; i++)
        {

            res = max(res, lis[i]);
        }
        return res;
        // your code here
    }
};

//{ Driver Code Starts.
int main()
{
    // taking total testcases
    int t, n;
    cin >> t;
    while (t--)
    {
        // taking size of array
        cin >> n;
        int a[n];

        // inserting elements to the array
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        // calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends