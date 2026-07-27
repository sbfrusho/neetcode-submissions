class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
            nums1.insert(nums1.end(),nums2.begin(),nums2.end());
            int size = nums1.size();
            sort(nums1.begin(),nums1.end());
            cout << "size : " << size << endl;
            if(size&1){
                int mid = size/2;
                return double(nums1[mid]);
            }
            int l = size/2;
            int r = l-1;
            cout << "1st : " << nums1[l] << " 2nd: " << nums1[r] << endl;
            double med = (double)(nums1[l]+nums1[r])/2;
            cout << med << endl;
            return med;
            
    }
};
