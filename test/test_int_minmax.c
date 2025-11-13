// kr_swap.c
// test_intmin_negation.c
#include <stdio.h>
#include <limits.h>  // INT_MIN, INT_MAX 定義用

int main(void)
{
    int n = INT_MIN;
    long int l;
    void kr_printd_before(int);
    void kr_printd_after(int);

    printf("INT_MIN  = %d\n", INT_MIN);
    printf("INT_MIN  = %x\n", INT_MIN);
    printf("INT_MAX  = %d\n", INT_MAX);
    printf("INT_MAX  = %x\n", INT_MAX);
    printf("n        = %d\n", n);
    printf("n        = %x\n", n);
    printf("Before K&R printd: n = ");
    kr_printd_before(INT_MIN);
    printf("\n");
    printf("Before C17 printd: n = ");
    kr_printd_after(INT_MIN);
    printf("\n");

    printf("Now executing: n = -n;\n");
    l = -(-2147483648);
//    l = -n;   // -nの段階で処理系に依存することがわかる
    n = -n;   // ←ここでマイナスの最小値の絶対値がプラスでは1大きいから不定になる可能性がある

    printf("After negation: n = %ld\n", l);
    printf("After negation: n = %lx\n", l);
    printf("After negation: n = %d\n", n);
    printf("After negation: n = %x\n", n);
    
    return 0;
}
