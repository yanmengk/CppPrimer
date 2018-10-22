//
//  main.cpp
//  ex0_5
//
//  Created by 闫梦奎 on 2018/10/22.
//  Copyright © 2018年 com.yanmk. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {

    // if 语句
    
    int curVal=0,val=0; //curVal表示我们正在统计的数，我们将读入的新值存入val

    if (std::cin >> curVal)
    {
        int cnt=1;
        while (std::cin >> val) //读取剩余的数
        {
            if (val==curVal)
                ++cnt;
            else{
                std::cout << curVal <<" occurs " << cnt << " times " << std::endl;

                curVal=val;
                cnt=1;
            }
        }
        //打印最后一个值的个数
        std::cout << curVal << " occurs " << cnt << " times " << std::endl;
    }
    return 0;
}
