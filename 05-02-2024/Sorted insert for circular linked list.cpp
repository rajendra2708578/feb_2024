



// this code contain only the functional code no header files or main function is inlcuded.

class Solution
{
    public:
    Node *sortedInsert(Node* head, int data)
    {
       //Your code here
       if(head==NULL)
       {
           Node *newnode=new Node(data);
           newnode->next=newnode;
           return newnode;
       }
       if(head->data>=data)
       {
           Node *newnode=new Node(data);
           newnode->next=head;
           Node *cur=head;
           while(cur->next!=head)
           {
               cur=cur->next;
           }
           cur->next=newnode;
           return newnode;
       }
       else
       {
           Node *cur=head;
           while(cur->next!=head && cur->next->data<data)
           {
               cur=cur->next;
           }
           Node *nex=cur->next;
           Node *newnode=new Node(data);
           cur->next=newnode;
           newnode->next=nex;
           return head;
       }
    }
};