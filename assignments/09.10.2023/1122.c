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
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
      vector<int> ans;
        for (int i=0; i<arr2.size(); i++){
            for (int j=0; j<arr1.size(); j++){
                if (arr1[j]==arr2[i]){
                   ans.push_back(arr1[j]);
                }
            }
        }
        vector<int> temp;
        for (int i=0; i<arr1.size(); i++){
            int j=0;
            while (j<ans.size()){
                if (arr1[i]==ans[j]){
                    break;
                }
                j++;
            }
            if(j==ans.size()){
                temp.push_back(arr1[i]);
            }
        }
        quicksort(temp,0,temp.size()-1);
        for(int i=0; i<temp.size(); i++){
            ans.push_back(temp[i]);
        }
        return ans;  
    }
};