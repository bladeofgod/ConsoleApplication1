// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

using namespace std;

void whileMethod(int xx) {
    int nm = 0;
    int x = xx;
    while (nm < 5) {
        cout << "xx value is :" << x << endl;
        x++;
        nm++;
    }
}

int main()
{
    cout << "Hello World!\n";
    double radius;
    cout << "plz input a radius" << endl;

    cin >> radius;
    cout << "your input value : " << radius << endl;

    //类型转换
    int z = 2;
    //三者等价
    double x = (double)z;
    double y = double(z);
    double a = static_cast<double>(z);
    

    cout << "the size of int is : \t\t" << sizeof(int) << "byte\n";

    int xx = 10;
    int yy = 20;
    if (xx < 20) cout << "xx is smaller " << endl;

    switch (xx)
    {
    case 10:
        cout << "xx value is :" << xx << endl;
        break;
    default:
        break;
    }

    whileMethod(xx);

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
