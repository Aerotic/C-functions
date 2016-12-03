#include<stdio.h>
//000000000000000000000000000
//获取程序当前的位置
//000000000000000000000000000
#include<windows.h>
void main()
{
    char location[100];
     GetCurrentDirectory(100, location);//100是location的长度
}
