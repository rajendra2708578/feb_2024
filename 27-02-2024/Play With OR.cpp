




// this is functional code no header files or main function are not included.
int* game_with_number(int arr[], int n)
{
    
    // Complete the function
    for(int i=0;i<n-1;i++)
    {
        arr[i]=(arr[i]|arr[i+1]);
        // cout<<arr[i]<<" ";
    }
    // cout<<endl;
    return arr;
    
}