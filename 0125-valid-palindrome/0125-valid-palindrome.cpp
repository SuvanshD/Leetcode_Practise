class Solution {
public:

    bool f(int i,int n,string &s)
    {
        if(i>=n/2) return true;
        if(s[i]!=s[n-i-1]) return false;
        return f(i+1,n,s);
    }

    string preprocess(string s)
    {
        string result;
        for(char c:s)
        {
            if(isalnum(c)) result+= tolower(c);
        }
        return result;
    }

    bool isPalindrome(string s) {
        string cleaned=preprocess(s);
        int n=cleaned.size();
        return f(0,n,cleaned);
    }

};