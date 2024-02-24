


//this is a functional code no header files or main are included in it.

 int solve(int n)
        {
            if(n==0||n==1)
            return n;
            int a=solve(n/2);
            int b=solve(n/3);
            int c=solve(n/4);
            return max(n,a+b+c);
        }
        int maxSum(int n)
        {
            //code here.
            return solve(n);
        }