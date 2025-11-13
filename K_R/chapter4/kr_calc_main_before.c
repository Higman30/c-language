// kr_calc_main.c

#include <stdlib.h> /* atof()用 */
#include "headercalc.h"


/* 逆ポーランド電卓プログラム */
main()
{
    int type;
    double op2;
    char s[MAXOP];

    while ((type = kr_getop_before(s)) != EOF)
    {
        switch (type)
        {
            case NUMBER:
                kr_push_before(atof(s));
                break;
            case '+':
                kr_push_before(kr_pop() + kr_pop());
                break;
            case '*':
                kr_push_before(kr_pop() * kr_pop());
                break;
            case '-':
                op2 = kr_pop_before();
                kr_push_before(kr_pop_before() - op2);
                break;
            case '/':
                op2 = kr_pop_before();
                if (op2 != 0.0)
                    kr_push_before(kr_pop_before() / op2);
                else
                    printf("error: zero divisor\n");
                break;
            case '\n':
                printf("\t%.8g\n", kr_pop_before());
                break;
            default:
                printf("error: unknown command %s\n", s);
                break;
        }
    }    
    return 0;
}