



//this is functional code no header files or main are included in it.

class Solution{
    public:
    bool isMaxHeap(int arr[], int n)
    {
        // Your code goes here
        for(int i=0;i<n;i++)
        {
            if((i*2)+1<n && arr[i]<arr[(i*2)+1])
            return false;
            if((i*2)+2<n && arr[i]<arr[(i*2)+2])
            return false;
        }
        return true;
    }
};