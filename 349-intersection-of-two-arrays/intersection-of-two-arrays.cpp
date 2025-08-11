class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums2.begin(), nums2.end());
        unordered_set<int> resultSet;     
        
        for (int num : nums1) {
            if (binarySearch(nums2, num)) {
                resultSet.insert(num); 
            }
        }
        
        return vector<int>(resultSet.begin(), resultSet.end());
    }
    
private:
    bool binarySearch(vector<int>& arr, int target) {
        int low = 0, high = arr.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == target) return true;
            else if (arr[mid] < target) low = mid + 1;
            else high = mid - 1;
        }
        return false;
    }
};
