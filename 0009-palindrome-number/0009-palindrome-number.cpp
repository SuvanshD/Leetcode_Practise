class Solution {
public:
    bool isPalindrome(int x) {
        if (x >= INT_MAX || x <= INT_MIN  ) 
        {
            return 0;
        }
        
        long final=0;
        int n=abs(x);
        while(n!=0)
        {
            int last_digit = n%10;

            // if (final >= INT_MAX / 10 ) {
            //     return false;
            // }
            // if (final <= INT_MIN / 10 ) {
            //     return false;
            // }

            final=(final*10)+last_digit;
            n=n/10;
        }

        if(final==x) return true ;
        return false;
    }
};