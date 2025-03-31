#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        // Merge the two vectors
        std::vector<int> mergedVec(nums1);
        mergedVec.insert(mergedVec.end(), nums2.begin(), nums2.end());

        // Sort the merged vector
        std::sort(mergedVec.begin(), mergedVec.end());

        // Calculate the median
        int n = mergedVec.size();
        if (n % 2 == 0) {
            return (mergedVec[n / 2 - 1] + mergedVec[n / 2]) / 2.0;
        } else {
            return mergedVec[n / 2];
        }
    }
};

