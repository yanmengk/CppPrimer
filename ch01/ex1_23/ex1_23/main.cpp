//
//  main.cpp
//  ex1_23
//
//  Created by 闫梦奎 on 2018/10/22.
//  Copyright © 2018年 com.yanmk. All rights reserved.
//

#include <iostream>
#include "/Users/yanmk/学习/技术学习/C++/CPP_Primer/CppPrimer/include/Sales_item.h"

int main()
{
    Sales_item currItem, valItem;
    if (std::cin >> currItem) {
        int cnt = 1;
        while (std::cin >> valItem) {
            if (valItem.isbn() == currItem.isbn())
                ++cnt;
            else {
                std::cout << currItem << " occurs " << cnt << " times "
                << std::endl;
                currItem = valItem;
                cnt = 1;
            }
        }
        
        std::cout << currItem << " occurs " << cnt << " times " << std::endl;
    }
    return 0;
}
