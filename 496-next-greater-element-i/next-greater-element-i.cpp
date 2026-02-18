class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        unordered_map<int, int> meow;
        stack<int> ladle;
        for (int i = 0; i < n; i++) {
            while (!ladle.empty() && nums2[i] > ladle.top()) {
                meow[ladle.top()] = nums2[i];
                ladle.pop();
            }
            ladle.push(nums2[i]);
        }
        while (!ladle.empty()) {
            meow[ladle.top()] = -1;
            ladle.pop();
        }
        vector<int> bow(nums1.size());
        // vector<int> bow(nums1.size());

        for (int i = 0; i < nums1.size(); i++) {
            bow[i] = meow[nums1[i]];
        }

        return bow;
    }
};