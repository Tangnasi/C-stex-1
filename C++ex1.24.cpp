// C++ex1.24.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <algorithm>
#include "Sales_item.h"

int main()
{
    std::vector<Sales_item> items;  // 使用vector来存储所有的销售记录
    Sales_item item;
    while (std::cin >> item) {
        items.push_back(item);
    }

    // 根据ISBN将所有的销售记录进行排序
    sort(items.begin(), items.end(), [](const Sales_item& lhs, const Sales_item& rhs) {
        return lhs.isbn() < rhs.isbn();
        });

    // 对排序后的销售记录进行统计
    Sales_item currItem = items[0];
    int cnt = 1;
    for (size_t i = 1; i < items.size(); ++i) {
        if (items[i].isbn() == currItem.isbn()) {
            ++cnt;
        }
        else {
            std::cout << currItem << " occurs " << cnt << " times " << std::endl;
            currItem = items[i];
            cnt = 1;
        }
    }
    std::cout << currItem << " occurs " << cnt << " times " << std::endl;

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
