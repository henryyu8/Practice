//
//  FindtheNumber.hpp
//  FindtheNumber
//
//  Created by Xiangdong Yu on 4/9/16.
//
//

#ifndef FindtheNumber_hpp
#define FindtheNumber_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
    struct greater
    {
        template<class T>
        bool operator()(T const &a, T const &b) const { return a > b; }
    };
public:
    int findtheLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end(), greater());
        return nums[k-1];
    }
};

#endif /* FindtheNumber_hpp */
