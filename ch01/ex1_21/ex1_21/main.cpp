//
//  main.cpp
//  ex1_21
//
//  Created by 闫梦奎 on 2018/10/22.
//  Copyright © 2018年 com.yanmk. All rights reserved.
//

#include <iostream>
#include "/Users/yanmk/学习/技术学习/C++/CPP_Primer/CppPrimer/include/Sales_item.h"


int main() {
    // insert code here...
    
    Sales_item item1,item2;
    std::cin >> item1 >> item2;
    
    if (item1.isbn()==item2.isbn())
    {
        std::cout << item1+item2 << std::endl;
        return 0;
        
    }
    else{
        std::cerr << "Data must refer to same ISBN" << std::endl;
        return -1;
    }

}
