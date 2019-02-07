//
//  cppSort.cpp
//  SortAlgorithm
//
//  Created by 周飞 on 2019/2/7.
//  Copyright © 2019年 周飞. All rights reserved.
//

#include "cppSort.hpp"
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <unordered_map>
#include <queue>


using namespace std;

class Sort {
    //冒泡排序
    void bubbleSort(int arr[], int n) {
        for (int i = 0; i < n-1; i++) {
            for (int j = n-1; j > i+1; j--) {
                if (arr[j] < arr[j-1]) {
                    __swap(arr[j], arr[j-1]);
                }
            }
        }
    }
    
    //选择排序
    void selectionSort(int arr[], int n) {
        
        for (int i = 0; i < n; i++) {
            int min = i;
            for (int j = i+1; j < n; j++) {
                if (arr[min] < arr[j]) {
                    min = j;
                }
                
                if (i != min) {
                    __swap(arr[i], arr[min]);
                }
            }
        }
    }
    
    
    
    
    
    
    
    
    void __swap(int &a, int &b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    
};
