//
//  main.cpp
//  ex2_18
//
//  Created by 闫梦奎 on 2018/10/23.
//  Copyright © 2018年 com.yanmk. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a=0,b=1;
    int *p1=&a,*p2=p1;
    std::cout << p1 <<" "<< p2<<std::endl;
    
    p1=&b;
    *p2=b;  //指针p2并没有改变，相反a的值被改变了
    std::cout << a<<std::endl;
    std::cout << p1 <<" "<< p2<<std::endl;
    
    
//    int i=42;
//    int &r =i;
//    std::cout <<r<<std::endl;
    
//    int i=42;
//    int *p;
//    p=&i;
//    int &r2=*p;
//    std::cout <<r2<<std::endl;
//    std::cout <<p<<std::endl;
//    std::cout <<*p<<std::endl;
    
    

  

}
