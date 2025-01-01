class Solution {
public:
    int reverse(int x) {
        int final=0;
        int n=x;
        while(n!=0)
        {
            int last_digit = n%10;

            if (final > INT_MAX / 10 ) {
                return 0;
            }
            if (final < INT_MIN / 10 ) {
                return 0;
            }

            final=(final*10)+last_digit;
            n=n/10;
        }

        return final;

    }
};