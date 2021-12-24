class Solution {
public:
    void reorderList(ListNode* head) {
        	int n = 0;
	ListNode *ptr = head;
	stack<ListNode*> s;
	while(ptr) {
		s.push(ptr);
		ptr = ptr->next;
		n++;
	}
	ptr = head;
	int i = 0;
	while(i<n-1) {
		ListNode *next = ptr->next;
		ptr->next = s.top();
		i++;
		s.pop();
		ptr->next->next = next;
		ptr = next;
		i++;
	}
	ptr->next = nullptr;
    }
};
