﻿// C++ex1.14.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
  /*  for循环：

        优点：

        for循环将循环控制的所有元素（初始化，条件，迭代）放在一个地方，这使得代码更加紧凑，更容易理解。
        当循环变量的生命周期仅限于循环时，for循环尤其有用，因为你可以在for循环的头部声明循环变量。
        for循环更适合于执行次数已知的循环。
        缺点：

        由于for循环将所有的控制元素放在一个地方，如果控制元素非常复杂，可能会使for循环的头部变得冗长且难以理解。
        for循环不适合在循环体中有多个出口或者有复杂的循环条件的情况。
        while循环：

        优点：

        while循环的形式简单，更适合于执行次数未知的循环，即循环的结束条件取决于循环体内部的某些事件。
        while循环可以容易地处理循环体中有多个出口的情况，以及有复杂的循环条件的情况。
        缺点：

        在while循环中，循环控制的元素可能会分散在循环的头部和体内，这可能会使得代码不如for循环那样紧凑。
        while循环不像for循环那样可以在循环头部控制循环变量的生命周期。
        总的来说，选择for循环还是while循环主要取决于具体的应用场景，以及你对代码可读性和易理解性的要求。*/
    std::cout << "Hello World!\n";
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