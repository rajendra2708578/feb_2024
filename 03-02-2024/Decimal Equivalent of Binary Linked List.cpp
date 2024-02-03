


// this code contain only the functional code no header files or main function are included

const int mod=1e9+7;
class Solution
{
    public:
        // Should return decimal equivalent modulo 1000000007 of binary linked list 
        Node *reverse(Node *root)
        {
            Node *rev=NULL,*nex=NULL;
            Node *cur=root;
            while(cur!=NULL)
            {
                nex=cur->next;
                cur->next=rev;
                rev=cur;
                cur=nex;
            }
            return rev;
        }
        long long unsigned int decimalValue(Node *head)
        {
           // Your Code Here
           head=reverse(head);
           long long int sum=0,count=1;
           Node *root=head;
           
           while(root)
           {
               if(root->data)
                sum=(sum+count)%mod;
               
               count=(count*2)%mod;
               root=root->next;
           }
           return sum%mod;
        }
};