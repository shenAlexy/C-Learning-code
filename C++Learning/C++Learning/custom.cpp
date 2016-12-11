//
//  custom.cpp
//  C++Learning
//
//  Created by shenAlexy on 16/12/11.
//  Copyright © 2016年 shenAlexy. All rights reserved.
//

#include "custom.hpp"

using namespace std;

static int a[3] = {3, 6, 2};

/**
 空指针的几种表示
 */
namespace ptrNull {
    void ptr() {
        int *p = 0;
        int *p1 = nullptr;
        int *p2 = NULL;
        int *p3 = 0;
        
        p = a;
        p1 = &a[1];
        p2 = &a[2];
        p3 = &a[0];
        cout << *p << " " << *p1 << " " << *p2 << " " << *p3 << endl;
    }
}

/**
 iostream输入输出
 */
void IOFunc() {
    const int v1 = 5, v2 = 8;
//    cin >> v1 >> v2;
    cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << endl;
    printf("\n");
    
    long long int u = 12, u1 = 3;
    auto u2 = u - u1;
    cout << u2 << endl;
    cout << sizeof(malloc(u2)) << endl;
    
    ptrNull::ptr();
    
    //指针:指向指针的指针
    _LIBCPP_CONSTEXPR_AFTER_CXX11 int *q = a;
    _LIBCPP_CONSTEXPR_AFTER_CXX11 int **q1 = &q;
    cout << **q1 << endl;
    
    //decltype类型指示符：类型引用
    decltype(v1) sum = 9;
    cout << sum << endl;
    
    string x = "7832";
    cout << x << endl;
}

void customFunc() {
    //String的定义
    const string AuthorName("shenAlexy");
    cout << AuthorName << endl;
    
}

//class
class person {
private:
    static const int age = 25;
    string name = "shenAlexy";
    int a[12];
public:
    const int num = 0001;
};
