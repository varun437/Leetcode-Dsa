ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * res; //node to store the resultant data
        
        if(list1 == NULL){
            return list2; //return list2 if list1 is empty
        }
        else if(list2 == NULL){
            return list1; //return list1 if list2 is empty
        }
        if(list1->val <= list2->val){
            res = list1; //store the data of list1
            res->next = mergeTwoLists(list1->next, list2); //recursively call the function to store res->next
        }
        else{
            res = list2; //store the data of list2
            res->next = mergeTwoLists(list2->next, list1); //ecursively call the function to store res->next
        }
        
        return res; //return the resultant list
    }
};
