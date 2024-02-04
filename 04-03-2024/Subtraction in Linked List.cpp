


// this code contain only the functional code no header files or main are include.


class Solution {
public:
    Node *revlink(Node *start)
    {
        Node *prev=NULL,*nex=NULL,*curr=start;
        while(curr!=NULL)
        {
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }
        return prev;
    }
    Node *fun(Node *head1,Node *head2)
    {
        // cout<<"inside function  "<<endl;
        Node *t1=head1,*t2=head2;
        Node *dummy=new Node(-1);
        Node *node=dummy;
        while(t1!=NULL)
        {  int sev=0;
        // cout<<"while loop inside "<<endl;
            if(t2!=NULL)
            sev=t2->data;
            if(t1->data<sev)
            {
                t1->next->data=t1->next->data-1;
                t1->data=t1->data+10;
            }
            // cout<<"new value added "<<t1->data-sev<<endl;
            Node *newnode=new Node(t1->data-sev);
            node->next=newnode;
            node=node->next;
            t1=t1->next;
            if(t2)
            t2=t2->next;
            
        }
        return dummy->next;
    }
    bool check(Node *head1,Node *head2)
    {
        int n=0,m=0;
        Node *t1=head1,*t2=head2;
        while(t1)
        {
            n++;
            t1=t1->next;
        }
        while(t2)
        {
            m++;
            t2=t2->next;
        }
        return n>=m;
    }
    Node* subLinkedList(Node* head1, Node* head2) {
        // Your implementation of subLinkedList goes here
        // Make sure to return the head of the resulting linked list
        
        string str1="",str2="";
        Node *cur1=head1,*cur2=head2;
        while(cur1!=NULL && cur1->data==0)
        {
            cur1=cur1->next;
        }
        
        while(cur2!=NULL && cur2->data==0)
        {
            cur2=cur2->next;
        }
        if(cur1==NULL && cur2==NULL)
        return new Node(0);
        if(cur1==NULL)
        return cur2;
        if(cur2==NULL)
        return cur1;
        Node *ans;
        cur1=revlink(cur1);
        
        cur2=revlink(cur2);
        
       
        if(check(cur2,cur1))
        {
            ans=fun(cur2,cur1);
        }
        else
        {
            ans=fun(cur1,cur2);
        }
        ans=revlink(ans);
        while(ans!=NULL && ans->data==0)
        {
            ans=ans->next;
        }
        if(ans==NULL)
        return new Node(0);
        else
        return ans;
    }
};