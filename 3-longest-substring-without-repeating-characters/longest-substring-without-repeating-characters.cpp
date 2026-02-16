class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int, int> store;
        int maxl = 0;
        int left = 0;
        for(int i=0; i<s.length(); i++){
            int k = s[i] - 'a';

            if(store.find(k) != store.end()){
                left = max(left, store[k] + 1);
                // left++;
            }
            store[k] = i;
            maxl = max(maxl, i-left+1);
        }
        return maxl;
    }
};