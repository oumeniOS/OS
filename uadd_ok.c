#include <stdio.h>

//无符号数相加溢出判断
//如果参数x和y相加不会产生溢出，则返回1
//否则返回0
int uadd_ok(unsigned x, unsigned y);

//补码相加溢出检测
//如果参数x和y相加不会产生溢出，则返回1
//否则返回0
int tadd_ok(int x, int y);

//无符号数相乘溢出判断
//如果参数x和y相乘不会产生溢出，则返回1
//否则返回0
int tmult_ok(int x, int y);

int uadd_ok(unsigned x, unsigned y) {
    unsigned sum = x + y;
    if (sum < x || sum < y)
        return 0;
    return 1;
}

int tadd_ok(int x, int y) {
    int sum = x + y;
    if((x > 0 && y > 0 && sum < 0)||(x < 0 && y < 0 && sum > 0))
        return 0;
    return 1;
}

int tmult_ok(int x, int y) {
    int mul = x * y;
    return !x || p/x == y;
}




void test_uadd_ok(){
    unsigned a = 4294967295;
    unsigned b = 4294967295;
    printf("uadd_ok = %d\n",uadd_ok(a, b));
}

void test_tadd_ok(){
    //假设int 4个字节
    int aa = 2;
    int bb = 2147483646;
    printf("tadd_ok = %d\n",tadd_ok(aa,bb));
}

int main () {
    //test_uadd_ok();
    test_tadd_ok();
    return 0;
}
