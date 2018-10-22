//
//  main.cpp
//  ex1_25
//
//  Created by 闫梦奎 on 2018/10/22.
//  Copyright © 2018年 com.yanmk. All rights reserved.
//

#include <iostream>
#include "/Users/yanmk/学习/技术学习/C++/CPP_Primer/CppPrimer/include/Sales_item.h"


int main() {
    Sales_item total;
    if (std::cin >> total)
    {
        Sales_item trans;
        while (std::cin >> trans)
        {
            if (trans.isbn()==total.isbn())
            {
                total+=trans;
            }else{
                //打印前一本书的结果
                std::cout<< total << std::endl;
                total=trans;
            }
        }
        std::cout << total << std::endl;
        
    }else{
        //没有输入，警告
        std::cerr <<"No data?" <<std::endl;
        return -1;
    }
    return 0;
}
