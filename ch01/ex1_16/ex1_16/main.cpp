//
//  main.cpp
//  ex1_16
//
//  Created by 闫梦奎 on 2018/10/22.
//  Copyright © 2018年 com.yanmk. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    //1.16
    
    int sum=0,value=0;
    while (std::cin>> value)
    {
        sum+=value;
    }
    std::cout<< sum << std::endl;

    return 0;
}
