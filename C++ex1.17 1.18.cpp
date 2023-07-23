// C++ex1.17 1.18.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
   /* int currVal = 0, val = 0;
    if (std::cin >> currVal) {
        int cnt = 1;
        while (std::cin >> val) {
            if (val == currVal)
                ++cnt;
            else {
                std::cout << currVal << "occurs" << cnt << "times" << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout << currVal << "occurs" << cnt << "times" << std::endl;
    }*/
    //输入都相同的值则会无输出，程序会一直停留在while循环体的if语句的前半部分
    //没有重复值则会正常显示出现某数字出现1次

   


     //数组写法，数组需要固定范围
        const int arraySize = 100;  // 假设我们只处理0到99之间的整数
        int numbers[arraySize] = { 0 };  // 初始化为0的数组
        int val = 0;

        while (std::cin >> val) {
            if (val < 0 || val >= arraySize) {
                std::cout << "Out of range!" << std::endl;
                continue;
            }
            ++numbers[val];  // 对应值的计数加1
        }

        for (int i = 0; i < arraySize; ++i) {
            if (numbers[i] > 0) {
                std::cout << i << " occurs " << numbers[i] << " times" << std::endl;
            }
        }

        return 0;
    }




// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
