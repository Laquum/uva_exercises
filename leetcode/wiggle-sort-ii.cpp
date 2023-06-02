class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> temp = nums;

        int mid = 0;
        if(nums.size() % 2 == 0)
            mid = nums.size() / 2 - 1;
        else
            mid = nums.size() / 2;

        int end = nums.size() - 1;

        for(int i = 0; i < nums.size(); i++)
        {
            nums[i] = (i % 2 == 1)? temp[end--]: temp[mid--];
        }
    }
};
