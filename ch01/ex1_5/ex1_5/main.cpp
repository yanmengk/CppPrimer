//
//  main.cpp
//  ex1_5
//
//  Created by 闫梦奎 on 2018/10/22.
//  Copyright © 2018年 com.yanmk. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    std::cout << "Enter two numbers:" ;
    std::cout << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    
    std::cout << "The sum of ";
    std::cout << v1;
    std::cout << " and ";
    std::cout << v2;
    std::cout << " is ";
    std::cout << v1*v2;
    std::cout << std::endl;
    
    return 0;
}
