//
//  main.cpp
//  C++Learning
//
//  Created by shenAlexy on 16/12/10.
//  Copyright © 2016年 shenAlexy. All rights reserved.
//

#include <iostream>
#include "custom.hpp"
#include "Algorithm.hpp"

using namespace std;

namespace tests {
    void DLog() {
        cout << "log" << endl;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    //命名空间的使用
    tests::DLog();
    
    //test函数调用
    IOFunc();
    customFunc();
    
    //C++ 算法
    char *str = (char *)"I'm a good boy...";
    findMaxChar(str);

    return 0;
}
