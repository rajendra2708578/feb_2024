


//this code contain only the functional code no header files or main are include.

class Solution {
public:
    bool check(unordered_map<char,int>&vec,unordered_map<char,int>&tt)
    {
        for(auto it:tt)
        {
            if(tt[it.first]>vec[it.first])
            return false;
        }
        return true;
    }
    string minWindow(string s, string t) {
        unordered_map<char,int>tt,vec;
        for(auto it:t)
        {
            tt[it]++;;
        }
        int i=0,j=0,minlen=INT_MAX;
        int start=-1;
        while(j<s.size())
        {
            vec[s[j]]++;
            while(check(vec,tt))
            {
               
                if((j-i)+1<=minlen)
                {
                    //  cout<<"true for  "<<j<<" "<<i<<endl;
                    minlen=(j-i)+1;
                    start=i;
                }
                vec[s[i]]--;
                i++;
            }
            if(check(vec,tt))
            {
               
                if((j-i)+1<=minlen)
                {
                    //  cout<<"true for  "<<j<<" "<<i<<endl;
                    minlen=(j-i)+1;
                    start=i;
                }
            }

            j++;
        }
        // cout<<"value of min len "<<start<<" "<<minlen<<endl;
        if(minlen>=INT_MAX)
        return "";
        else
        {
            string ans=s.substr(start,minlen);
            return ans;
        }
    }
};