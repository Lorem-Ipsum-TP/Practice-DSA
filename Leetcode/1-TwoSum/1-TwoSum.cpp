class Solution {
public:
    int findIt(vector<int>& nums,int index,int value){
        for(int i=index+1;i<nums.size();i++){
            if(nums[i] == value)
                return i;
        }
        return -1;
    }
    
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> out;
        int k;
        for(int i = 0;i < nums.size()-1;i++){
            // cout<<target-nums[i]<<"<\n";
            k = findIt(nums,i,(target - nums[i]));
            if(k != -1){
                out.push_back(i);
                out.push_back(k);
                break;
            }
        }
        return out;    
    }
};