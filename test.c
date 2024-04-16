/*************************************************************************
	> File Name: test.c
	> Author: tmla_jiang 
	> Mail: tmla_jiang@foxmail.com
	> Created Time: Tue 09 Apr 2024 01:15:26 PM CST
 ************************************************************************/

#include <stdio.h>
#include <limits.h>

int max = INT_MAX;
int min = INT_MIN;

void int_value(){
    printf("%d %d", max, min);
}

int haha() {
    int a, b;
    scanf("%d%d", &a, &b);
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    printf("%d %d\n", a, b);
    return 0;
}

int test1() {
    int a, b, m ,n;
    scanf("%d%d", &n, &m);
    a = (4*n-m) / 2;
    b = n - a;
    if (m % 2 == 1 || a < 0 || b < 0) {
        printf("No answer");
    } 
    else {
        printf("%d %d\n", a, b);
    }
    return 0;
}

int ttt() {
    int a, b, c, max;
    scanf("%d%d%d", &a, &b, &c);
    if (a > b) {max = a; a = b; b = max;};
    if (a > c) {max = a; a = c; c = max;};
    if (b > c) {max = b; b = c; c = max;};
    printf("%d %d %d\n", a, b, c);
    return 0;
}

int i() {
    int x, n = 0, min, max, s = 0;
    while (scanf("%d", &x) == 1) {
        s += x;
        if (x < min) min = x;
        if (x > max) max = x;
        n++;
    }
    printf("%d %d %.3f\n", min, max, (double)s/n);
    return 0;
}

int sum(int *a, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]); 
    }
    return 0;
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 6};
    sum(a + 1, 3);
    return 0;
}




