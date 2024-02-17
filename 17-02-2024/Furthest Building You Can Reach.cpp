


//this is functioal code no header files or main are included in it.

#define ll long long int
class Solution {
public:
    int furthestBuilding(vector<int>& arr, int bricks, int ladders) {
        priority_queue<ll>pq;
        int j=0;
        while(j+1<arr.size())
        {
            if(arr[j]>arr[j+1])
            j++;
            else if(bricks>=arr[j+1]-arr[j])
            {
                int val=(arr[j+1]-arr[j]);
                bricks-=val;
                pq.push(val);
                j++;
            }
            else if(ladders>=1)
            {
                int val=(arr[j+1]-arr[j]);
                if(!pq.empty() && pq.top()>val && bricks+pq.top()>=val)
                {
                     bricks=bricks+pq.top();
                     bricks-=val;
                    pq.pop();
                    pq.push(val);
                    // bricks=bricks
                }
                ladders-=1;
                j++;
            }
            else
            break;
        }
        return j;
    }
};