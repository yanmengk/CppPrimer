//
//  main.cpp
//  ex1_9
//
//  Created by 闫梦奎 on 2018/10/22.
//  Copyright © 2018年 com.yanmk. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    int sum=0,val=50;
    while (val<=100)
    {
        sum+=val;
        ++val;

    }
    std::cout << "Sum of 50 to 100 inclusive is " << sum <<std::endl;

    return 0;
}
