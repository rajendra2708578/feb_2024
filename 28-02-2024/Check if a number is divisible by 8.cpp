


//this is functional code no header files or main function are included in it
class Solution{
    public:
    int DivisibleByEight(string s){
        //code here
        int val=0;
        int n=s.size();
        if(s.size()>=3)
        {
            val+=(s[n-3]-'0')*100+(s[n-2]-'0')*10+(s[n-1]-'0');
        }
        else
        {
            val=stoi(s);
        }
        return val%8==0?1:-1;
    }
};