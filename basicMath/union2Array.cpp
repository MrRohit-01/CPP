class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        int i =0;
        int j=0;
        int k =INT_MIN;
        while(i<nums1.size() && j<nums2.size()){
            
            if(nums1[i]=>nums2[j] && nums1[i] != k){

                arr.push_back(i);
                k= nums1[i];
                i++;
            }
            else if(nums2[j] != k){
                arr.push_back(j);
                k= nums2[j];
                j++;
             }
        }
        while(i<nums1.size()){
            if(nums1[i]!=k){
                arr.push_back(nums1[i]);
                k= nums1[i];
                i++;
        }
          while(j<nums2.size()){
            if(nums2[i]!=k){
                arr.push_back(nums2[j]);
                k= nums2[j];
                j++;
        };
          };
        };
    };
};
