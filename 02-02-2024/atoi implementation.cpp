


//this function contain only the functional code no header files or main are included.


 int fun(string &str)
    {
        int i=0,ans=0;
        if(str[0]=='-')
        {
            i=1;
        }
        for(int j=i;j<str.size();j++)
        {
            ans=ans*10+(str[j]-'0');
        }
        if(str[0]=='-')
        return -1*ans;
        else
        return ans;
    }
    int atoi(string s) {
        //Your code here
        int ans=1;
        for(int i=0;i<s.size();i++)
        {
            if(i==0)
            {
                if(s[i]=='-' || (s[i]>='0' && s[i]<='9'))
                {
                    // cout<<"- or something "<<s[i]<<endl;
                    continue;
                }
                else
                return -1;
            }
            else if(s[i]>='0' && s[i]<='9')
            {
                continue;
            }
            else
            return -1;
        }
        return fun(s);
    }