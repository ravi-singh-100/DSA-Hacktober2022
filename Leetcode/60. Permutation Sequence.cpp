// Question link : https://leetcode.com/problems/permutation-sequence/


//your code goes here

class Solution {
public:
    void solve(string &s) {
        int pos,flag=0;
        for(int i=s.length()-1;i>0;i--){
            if(s[i]>s[i-1]) {
                flag=1;
                pos=i-1;
                break;
            }
        }
        if(flag==1) {
            for(int i=s.length()-1;i>=pos;i--) {
                if(s[i]>s[pos]) {
                    swap(s[i],s[pos]);
                    break;
                }
            }
        }
        sort(s.begin()+pos+1,s.end());
    }
    string getPermutation(int n, int k) {
        string s;
        int fact=1;
        for(int i=1;i<=n;i++) {
            char ch=(char)(48+i);
            s.push_back(ch);
        }
        for(int i=1;i<=n;i++)
            fact*=i;
        if(k==1)
            return s;
        else if(k==fact) {
            sort(s.begin(),s.end(),greater<int>());
            return s;
        }
        for(int i=1;i<k;i++) {
            solve(s);
        }
        return s;
    }
};
