



//this code is functional code no header files or main function is included.


 bool checkPangram (string s) {
        // your code here
        vector<int>arr(26,0);
        for(int i=0;i<s.size();i++)
        {
            if(isalpha(s[i]))
            s[i]=tolower(s[i]);
        }
        for(auto it:s)
        {
            if(isalpha(it))
            arr[it-'a']+=1;
        }
        for(int i=0;i<26;i++)
        {
            if(arr[i]==0)
            {
                return false;
            }
        }
        return true;
    }