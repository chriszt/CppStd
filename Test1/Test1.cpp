/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2018. All rights reserved.
 * XX 功能实现
 * 注意：
 *      - 注意点 1
 *      - 注意点 2
 */

#include <stdio.h>

int MyCmp(int a, int b);

enum MyColor {
    BLACK,
    WHITE
} g_bgColor = WHITE;

int XXX_YYY_FuncName(void);

const int NAME_MAX_LEN = 100;

// 这是Foo()的注释
int Foo(void)
{
    // 这是变量a的注释
    int a = INIT_A_VALUE;
    ...
    int foo = 100; // 这里是注释内容，与代码至少留1个空格
}

#define A_CONST 100         // 此处两行注释属于同类
#define ANOTHER_CONST 200   // 可保持左侧对其

int main(void)
{
    printf("Hello World\n");
}
