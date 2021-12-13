class Solution {
public:
    Node* flatten(Node* head) {
        Node *temp=head,*next,*c;
        if(!head)
            return head;
        while(temp!=NULL)
        {
            if(temp->child!=NULL)
            {
                next=temp->next;
                c=flatten(temp->child);
                temp->child=NULL;
                temp->next=c;
                c->prev=temp;
                while(c->next!=NULL)
                {
                    c=c->next;
                }
                c->next=next;
                if(next)
                {
                    next->prev=c;
                }
                temp=c;
            }
            temp=temp->next;
        }
        return head;
    }
};
