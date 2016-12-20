#include <setjmp.h>
#include <stdio.h>

jmp_buf buf; // 数组变量，保存栈等信息

double Divide(double a, double b)
{
    if (b == 0.0)
        longjmp(buf, 1); // 长跳转，可以跳转到其他的函数，go to 是短跳转，只能在函数内部跳转
        // 跳转到buf保存点，返回到ret中的是longjmp的第二个参数，返回值为1
    else
        return a/b;
}

int main()
{
    int ret;
    ret = setjmp(buf); // 设置一个保存点，保存程序的运行环境到buf缓冲区中
    if(ret == 0)
    {
        printf("This is ret == 0\n");
        Divide(5.0, 0.0);
    }
    else if (ret == 1)
    {
        printf("This is ret == 1\n");
    }

    return 0;
}
