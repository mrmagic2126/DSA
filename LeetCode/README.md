# LeetCode Solutions

- **4sum** ([solution](4sum.cpp)) - !function(){try{var d=document.documentElement,c=d.classList;c.remove('light','dark');var e=localStorage.getItem('lc-theme');if('system'===e||(!e&&true)){var t='(prefers-color-scheme: dark)',m=window.matchMedia(t);if(m.media!==t||m.matches){d.style.colorScheme = 'dark';c.add('dark')}else{d.style.colorScheme = 'light';c.add('light')}}else if(e){c.add(e|| '')}if(e==='light'||e==='dark')d.style.colorScheme=e}catch(e){}}()Problem ListProblem ListDebugging...Submit00StreaksExtend Your Streak!00:00:00ed23Hv2XQJAccess all features with our Premium subscription!My ListsNotebookProgressPointsTry New FeaturesOrdersMy PlaygroundsSettingsAppearanceAppearanceSystem DefaultLightDarkSign OutSystem DefaultLightDarkPremiumDescriptionDescriptionAcceptedAcceptedEditorialEditorialSolutionsSolutionsSubmissionsSubmissionsCodeCodeTestcaseTestcaseTest ResultTest Result All SubmissionsAccepted294 / 294 testcases passeded23Hv2XQJsubmitted at Feb 16, 2026 16:11EditorialSolutionRuntime25msBeats29.91%Analyze ComplexityMemory17.37MBBeats82.94%Analyze ComplexityCreated with Highcharts 11.1.03ms129ms256ms383ms0%20%40%60%
                  
                Created with Highcharts 11.1.03ms129ms256ms383msCodeC++1class Solution {
2public:
3    vector<vector<int>> fourSum(vector<int>& nums, int target) {
4        vector<vector<int>> res;
5        sort(nums.begin(), nums.end());
6        int n = nums.size();
7        for(int i=0; i<n-1; i++){
8            if(i>0 && nums[i] == nums[i-1]) continue;
9            
10            for(int j=i+1; j<n; j++ ){
11                if(j>i+1 && nums[j] == nums[j-1] )continue;
12                int k = j+1;
13                int l = n -1;
14                while(k<l){
15                    // if(nums[i] + nums[j] + nums[k] + nums[l] > MAXINT)
16                    long long r = (long long)nums[i] + nums[j] + nums[k] + nums[l];
17                    if(r == target){
18                        res.push_back({nums[i], nums[j], nums[k], nums[l]});
19                        while(k<l && nums[l] == nums[l-1]) l--;
20                        while(k<l && nums[k] == nums[k+1]) k++;
21                        l--;
22                        k++;
23                    }
24                    else if(r<target){
25                        k++;
26                    }else{
27                        l--;
28                    }
29                }
30            }
31        }
32        return res;
33    }
34};View more More challenges454. 4Sum II1995. Count Special Quadruplets0/5C++Auto1234567891011class Solution {public:    vector<vector<int>> fourSum(vector<int>& nums, int target) {        vector<vector<int>> res;        sort(nums.begin(), nums.end());        int n = nums.size();        for(int i=0; i<n-1; i++){            if(i>0 && nums[i] == nums[i-1]) continue;                        for(int j=i+1; j<n; j++ ){                if(j>i+1 && nums[j] == nums[j-1] )SavedLn 1, Col 1You must run your code firstFindHeaderBarSizeFindTabBarSizeFindBorderBarSize - Unknown - 2026-02-16T10:42:17.685Z
