//
//  main.cpp
//  ex2_17
//
//  Created by 闫梦奎 on 2018/10/23.
//  Copyright © 2018年 com.yanmk. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int i, &ri=i;
    i=5;ri=10;
    std::cout << i << " " << ri << std::endl;

}
