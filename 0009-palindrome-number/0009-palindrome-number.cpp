class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        
        int final=0;
        int last_digit = 0;
        int n=x;
        while(n!=0)
        {
            last_digit = n%10;
            if (final >= INT_MAX/10 || final <= INT_MIN/10  ) 
            {
                return 0;
            }
            final=(final*10)+last_digit;
            n=n/10;
        }

        if(final==x) return true ;
        return false;
    }
};