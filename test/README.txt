test_int_minmax.c   K&R4章のprintdで境界条件を調べる

INT_MIN  = -2147483648
INT_MIN  = 80000000
INT_MAX  = 2147483647
INT_MAX  = 7fffffff
n        = -2147483648
n        = 80000000
Before K&R printd: n = --214748364(
Before C17 printd: n = -2147483648
Now executing: n = -n;
After negation: n = -2147483648  <- n = -nをしてない
After negation: n = 80000000