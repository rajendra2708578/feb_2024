


// This code contain only the functional code no header files or main are included in it.

#define ll long long int
class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        ll m=left,n=right,cnt=0;
        while(m!=n)
        {
            m>>=1;
            n>>=1;
            cnt++;
        }
        return (m<<cnt);
    }
};