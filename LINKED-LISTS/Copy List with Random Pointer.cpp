Node* copyRandomList(Node* head) {
        if(!head) return NULL;
        Node* newHead, *copyNode, *temp= head;
        while(temp)
        {
            copyNode = new Node(temp->val);
            copyNode->next = temp->next;
            temp->next = copyNode;
            temp = copyNode->next;
        }
        newHead = head->next;
        temp = head;
        while(temp)
        {
            if(temp->random == NULL)
                temp->next->random = NULL;
            
            else 
                temp->next->random = temp->random->next;
            
            temp = temp->next->next;
        }
        temp = head;
        while(temp)
        {
            copyNode = temp->next;
            temp->next = copyNode->next;
            
            if(copyNode->next)
                copyNode->next = copyNode->next->next;
            
            temp = temp->next;
        }
        
        return newHead;
    }


                  (OR)

class Solution {
public:
Node* copyRandomList(Node* head) {

    map<Node*,Node*> mp;
    
    Node* A=head;
    
    while(A!=NULL)
    {
        mp[A]=new Node(A->val);
        A=A->next;
    }
    
    Node* B=head;
    
    while(B!=NULL)
    {
        mp[B]->next=mp[B->next];
        mp[B]->random=mp[B->random];
        B=B->next;
    }
    
    return mp[head];
}
};
