//Find Minimum in Rotated Sorted Array
class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=0, n=nums.size(), e=n-1;
        int ans = nums[0];
        while(s<=e){
            int mid = (s+e)/2;
            //checking element in right part
            if(nums[mid]<=nums[n-1]){
                ans=nums[mid];
                e=mid-1;
            }else{
                s=mid+1;
            }//checking element in left part
        }
        return ans;
    }
};