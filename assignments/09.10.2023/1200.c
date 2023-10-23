class Solution {
public:
int findPartition(vector<int>& nums, int low, int high){
        int pivot = nums[low];
        int i = low;
        int j = high;
        while(i < j){
            while(i <= high - 1 && nums[i] <= pivot){
                i++;
            }
            while(j >= low + 1 && nums[j] > pivot){
                j--;
            }
            if(i < j){
                swap(nums[i], nums[j]);
            }
        }
        swap(nums[low], nums[j]);
        return j;
    }
    void quicksort(vector<int>& nums, int low, int high){
        if(low >= high){
            return;
        }
        int ind = findPartition(nums,low,high);

        quicksort(nums,low, ind-1);
        quicksort(nums,ind+1,high);
    }
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n=arr.size();
        quicksort(arr,0,n-1);
        vector<vector<int>> ans;
        int mini=arr[1]-arr[0];
        for(int i=0;i<n-1;i++){
            mini=min(mini,arr[i+1]-arr[i]);
        }
         for(int i=0;i<n-1;i++){
           if(arr[i+1]-arr[i]==mini){
               ans.push_back({arr[i],arr[i+1]});
           }
        }
        return ans;
    }
};