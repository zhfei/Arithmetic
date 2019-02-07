//
//  ArrayUtil.hpp
//  SortAlgorithm
//
//  Created by 周飞 on 2019/2/6.
//  Copyright © 2019年 周飞. All rights reserved.
//

#ifndef ArrayUtil_hpp
#define ArrayUtil_hpp

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cassert>

using namespace std;

namespace ArrayUtil {
    int *generateRandomArray(int n, int rangeL, int rangeR) {
        assert(n > 0 && rangeL <= rangeR);
        int *arr = new int[n];
        
        srand(time(NULL));
        for (int i = 0; i < n; i++) {
            arr[i] = rand() % (rangeR - rangeL + 1) + rangeL;
        }
        return arr;
    }
    
    int *generateOrderedArray(int n) {
        assert(n > 0);
        
        int *arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = i;
        }
        return arr;
    }
    
    template<typename T>
    void printArray(T arr[], int n) {
        for (int i = 0; i< n; i++) {
            cout << arr[i] << " ";
            cout << endl;
        }
        return;
    }
}


#endif /* ArrayUtil_hpp */
