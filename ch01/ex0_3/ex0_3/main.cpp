//
//  main.cpp
//  ex0_3
//
//  Created by 闫梦奎 on 2018/10/22.
//  Copyright © 2018年 com.yanmk. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int sum=0,val=1;
    while (val<=10)
    {
        sum+=val;
        ++val;
    }
    std::cout << sum << std::endl;

}
