#include <iostream>
#include <fstream>

using namespace std;

/**
 * ofstream 写操作  o->output->指的是从控制台输出(output)到文件
 * ifstream 读操作  都是相对于控制台
 * fstream  读写操作
 */

/**
 * 写文件
 * 
 * 1.包含头文件
 * #include <fstream>
 * 
 * 2.创建流对象
 * ostream ofs;
 * 
 * 3.打开文件
 * ofs.open("文件路径"，打开方式);
 * 
 * 4.写数据
 * ofs << "写入的数据";
 * 
 * 5.关闭文件
 * ofs.close();
 */

/**
 * 打开方式
 * 
 * ios::in  读文件          !
 * ios::out 写文件          !
 * ios::ate 初始位置 文件尾
 * ios::app 追加方式写文件
 * ios::trunc 如果文件存在 先删除 再创建
 * ios::binary 二进制方式
 */

void test01() {
    ofstream ofs;

    ofs.open("test.txt", ios::out);

    ofs << "姓名：李四" << endl;

    ofs.close();
}

int main() {
    test01();

    return 0;
}