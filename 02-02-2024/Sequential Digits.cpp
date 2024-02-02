



//this code contain only the functional code no header files or main are include in it.

 vector<int> sequentialDigits(int low, int high) {
        string str="123456789";
        vector<int>ans;
        for(int i=0;i<9;i++)
        {
            for(int len=1;len<=9;len++)
            {
                if(i+len<=9)
               {
                    string ss=str.substr(i,len);
                    int val=stoi(ss);
                    if(val>=low && val<=high)
                    ans.push_back(val);
               }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }