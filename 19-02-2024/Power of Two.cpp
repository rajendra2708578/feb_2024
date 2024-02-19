


//this code is functional code no header files or main are included in it.

#define ll long long int
class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        int count=0;
        ll nn=n;
        if(n<0)
        return false;
        for(int i=0;i<32;i++)
        {
            // cout<<"enter the loop  "<<endl;
            if((nn&(1<<i))>=1)
            count++;
        }
        cout<<count<<endl;
        return count==1;
    }
};