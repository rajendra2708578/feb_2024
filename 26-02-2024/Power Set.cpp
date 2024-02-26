

//this code is functional code no header files or main are not included in it.
void solve(int index,vector<string>&st,string s,string &og)
	{
	    if(index==og.size())
	    {
	        if(s.size()>=1)
	        st.push_back(s);
	        return ;
	    }
	    solve(index+1,st,s+og[index],og);
	    solve(index+1,st,s,og);
	}
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string>st;
		    solve(0,st,"",s);
		   
		   sort(st.begin(),st.end());
		    return st;
		}