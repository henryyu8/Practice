//
//  FindtheNumber.cpp
//  FindtheNumber
//
//  Created by Xiangdong Yu on 4/9/16.
//
//

#include "FindtheNumber.hpp"

int main() {
    Solution FindtheNumber;
    vector<int> a { 3,2,1,5,6,4 };
    cout << "The result will be: " << FindtheNumber.findtheLargest(a, 2) << endl;
    return 0;
}