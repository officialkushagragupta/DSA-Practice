// Leetcode Question
// Done in Coding BLocks---Important

#define vvs vector<vector<string>>
class Solution
{
public:
    bool isPalindrome(const string &x)
    {
        int i = 0;
        int j = x.length() - 1;
        while (i < j)
        {
            if (x[i++] != x[j--])
            {
                return false;
            }
        }
        return true;
    }
    vvs ans;
    void solve(string &s, int i, vector<string> &temp) // Always remember to send string by reference,varna utni baar copy constructor call hoga
    {
        if (i == s.length())
        {
            ans.push_back(temp);
            return;
        }
        for(int j=i;j<s.length();j++)
        {
            string x=s.substr(i,j-i+1);
            if(isPalindrome(x))
            {
                temp.push_back(x);
                solve(s,j+1,temp);
                temp.pop_back();
            }

        }
    }
    vector<vector<string>> partition(string s)
    {
        vector<string> temp;
        solve(s,0,temp);
        return ans;
    }
};