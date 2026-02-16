class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int n= nums.size();
       vector<int> arr(n);
       arr[0] = nums[0];
       for(int i=1; i<n;i++){
        arr[i] = nums[i] + arr[i-1];
       } 
       for(int i=0;i<n;i++){
        int l=0,r=0;
        r = arr[n-1] - arr[i];
        if(i>0) l = arr[i-1];
        if(l == r){
            return i;
        }
       }
       return -1;
    }
};