




// this code contain only the functional code no header files or main function are included.



class Solution {
public:
    bool check(string str)
    {
        int i=0,j=str.size()-1;
        while(i<j)
        {
            if(str[i]!=str[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
       for(auto it:words)
       {
           if(check(it))
           return it;
       } 
       return "";
    }
};