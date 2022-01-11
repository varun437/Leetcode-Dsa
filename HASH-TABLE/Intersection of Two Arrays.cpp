class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> nums1_counter;
        unordered_set<int> result_set;
        for(int i = 0; i < nums1.size(); ++i){
            nums1_counter.insert(nums1[i]);
        }
        
        for (auto i = 0; i < nums2.size(); ++i){
            if(nums1_counter.find(nums2[i]) != nums1_counter.end()){
                result_set.insert(nums2[i]);
            }
        }
        return vector<int>(result_set.begin(), result_set.end());
    }
};
        
