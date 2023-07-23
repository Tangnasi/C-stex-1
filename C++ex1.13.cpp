// C++ex1.13.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    //50到100之内的整数相加
    /*int sum = 0;
    for (int i = 50; i <= 100; i++)
        sum += i;
    std::cout << sum << std::endl;*/

    //按递减顺序打印出10到0之间的整数
    /*int num = 10;
    for (int i = 0; i <= 10; i++)
        std::cout << num-- << std::endl;*/

    //输入两个整数，打印出这两个整数之间的所有整数
    int v1 = 0, v2 = 0;
    std::cout << "Please enter two integers" << std::endl;
    std::cin >> v1 >> v2;
    if (v1 > v2) {
        int temp = v1;
        v1 = v2;
        v2 = temp;
    }
    for (int i = v1; i <= v2; i++)
        std::cout << i << std::endl;
    
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
