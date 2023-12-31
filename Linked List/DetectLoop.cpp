class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        bool flag=false;
        if(head==NULL || head->next==NULL)
        return flag;
        Node *slow=head;
        Node *fast=head;
        while(slow!=NULL && fast!=NULL)
        {
            fast=fast->next;
            if(fast!=NULL)
            {
                fast=fast->next;
            }
            slow=slow->next;
            if(slow==fast)
            {
                flag=true;
                break;
            }
        }
        return flag;
        
    }
};