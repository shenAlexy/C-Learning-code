//
//  Algorithm.cpp
//  C++Learning
//
//  Created by shenAlexy on 16/12/11.
//  Copyright © 2016年 shenAlexy. All rights reserved.
//

#include "Algorithm.hpp"
#include <vector>

using namespace std;

void findMaxChar(char *str);

/**
    问题一：找出字符串出现最多的字符:
    最优解决：利用哈希表的思想 或者说是计数排序的思想，ASCII码中字符的个数不超过256，我们就创建一个大小为256的数组，然后遍历数组，直接将字符对应的ASCII码作为数组的索引，索引对应的计数次数+1.这样统计每个字符出现的次数的时间复杂度就是是O(n)了。然后的就简单了，遍历计数数组，遇到跟当前出现次数一样大的就压栈，如果遇到更大的就把之前的出栈，再把当前最大的压栈，如此即可。
 */
void findMaxChar(char *str) {
    
    int strn[256] = {0};
    char *p = str;
    while(*p != '\0') {
        strn[*p]++;
        p++;
    }
    
    vector<char> vec;
    int nMax = -1;
    
    for(int i = 0; i < 256; i++) {
        if(strn[i] == nMax) {
            vec.push_back(i);
        }
        
        if(strn[i] > nMax) {
            while(!vec.empty()) {
                vec.pop_back();
            }
            vec.push_back(i);
            nMax = strn[i];
        }
    }
    
    vector<char>::iterator iter;
    for(iter = vec.begin(); iter < vec.end(); iter++) {
        cout << *iter << endl;
    }
}
