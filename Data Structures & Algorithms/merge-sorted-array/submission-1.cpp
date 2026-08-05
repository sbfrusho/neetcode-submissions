class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;;
        int j = n-1;
        int k = m+n-1;
        while(i >= 0 & j >= 0) {
            cout << "comparing : " << nums1[i] <<" and " << nums2[j] << endl;
            if(nums1[i] > nums2[j]) {
                cout <<"executing if block" << endl;
                nums1[k] = nums1[i];
                k--;
                i--;
            } else {
                cout << "executing else block" << endl;
                nums1[k] = nums2[j];
                k--;
                j--;
            }
            
        }
        cout <<"last while : " << endl;
        while(j >= 0) {
            nums1[k] = nums2[j];
            cout <<"value of k : "<< k << "and j : " << j << " and value :  " << nums2[j] << endl;
            k--;
            j--;
        }
    }
};