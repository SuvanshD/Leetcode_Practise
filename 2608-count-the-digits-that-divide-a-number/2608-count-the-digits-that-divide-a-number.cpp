class Solution {
public:
    int countDigits(int num) {
        int m=num;
        int cnt=0;
        
        while(m>0)
        {
            if((m%10)!=0 && num%(m%10)==0)
            {
                cnt++;
            }
            m=m/10;
        }
        return cnt;
    }
};