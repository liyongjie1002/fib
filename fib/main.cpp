//
//  main.cpp
//  fib
//
//  Created by 国富集团赵 on 2023/11/8.
//

#include <iostream>

// 斐波那契数列，0、1、1、2、3、5、8、13、、、、求第n个数字

int fib(int n) {
    // 终止条件 f(1) = 0, f(2) = 1
    if (n == 1 || n == 2)
        return n - 1;
    // 递归调用 f(n) = f(n-1) + f(n-2)
    int res = fib(n - 1) + fib(n - 2);
    // 返回结果 f(n)
    return res;
}

int main(int argc, const char * argv[]) {
    
    int result = fib(2);
    std::cout << "Hello - " << result << "\n";
    return 0;
}

