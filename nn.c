/*************************************************************************
	> File Name: nn.c
	> Author: tmla_jiang 
	> Mail: tmla_jiang@foxmail.com
	> Created Time: Tue 09 Apr 2024 08:10:03 PM CST
 ************************************************************************/

#include <stdio.h>

int f(int n) {
    if (n == 0 || n == 1) return 1;
    return n*f(n-1);
}

int s(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += f(i);
    }
    sum %= 1000000;
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", s(n));
    return 0;
}
