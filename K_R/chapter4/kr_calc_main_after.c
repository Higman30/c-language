// kr_calc_main_after.c

#include <stdlib.h> /* atof()用 */
#include "headercalc_after.h"


/* 逆ポーランド電卓プログラム */
int main(void)
{
    int type;
    double op2;
    char s[MAXOP];

    while ((type =kr_getop_after(s)) != EOF)
    {
        switch (type)
        {
            case NUMBER:
                kr_push_after(atof(s));
                break;
            case '+':
                kr_push_after(kr_pop_after() + kr_pop_after());
                break;
            case '*':
                kr_push_after(kr_pop_after() * kr_pop_after());
                break;
            case '-':
                op2 = kr_pop_after();
                kr_push_after(kr_pop_after() - op2);
                break;
            case '/':
                op2 = kr_pop_after();
                if (op2 != 0.0)
                    kr_push_after(kr_pop_after() / op2);
                else
                    printf("error: zero divisor\n");
                break;
            case '\n':
                printf("\t%.8g\n", kr_pop_after());
                break;
            default:
                printf("error: unknown command %s\n", s);
                break;
        }
    }    
    return 0;
}