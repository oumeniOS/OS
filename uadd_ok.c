#include <stdio.h>

//如果参数x和y相加不会产生溢出，则返回1
//否则返回0
int uadd_ok(unsigned x, unsigned y);

int uadd_ok(unsigned x, unsigned y) {
    unsigned sum = x + y;
    if (sum < x || sum < y)
        return 0;
    return 1;
}








void test_uadd_ok(){
    unsigned a = 4294967295;
    unsigned b = 4294967295;
    printf("uadd_ok = %d\n",uadd_ok(a, b));
}

int main () {
    test_uadd_ok();
    return 0;
}
