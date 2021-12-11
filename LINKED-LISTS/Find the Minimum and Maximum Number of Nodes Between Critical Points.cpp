class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {             
        vector<int> criticalPoints; 
        int i=1; 
        ListNode* curr = head->next; 
        int prev = head->val ; 
        while(curr->next) {
            if(curr->val > prev && curr->val> curr->next->val)                          
                criticalPoints.push_back(i); 
            else if(curr->val < prev && curr->val < curr->next->val)
                criticalPoints.push_back(i); 
            prev = curr->val;             
            curr = curr->next; 
            i++;
        }        
        if(criticalPoints.size()<2) {
            return {-1,-1}; 
        }
        vector<int> result;          
        int minDist = INT_MAX;
        for(int i=1;i<criticalPoints.size();i++) {
            minDist = min(minDist , criticalPoints[i]-criticalPoints[i-1]); 
        }
        result.push_back(minDist); 
        result.push_back(criticalPoints[criticalPoints.size()-1] - criticalPoints[0]);
        return result; 
    }
};
