/*************************************************************************
	> File Name: 7744.c
	> Author: tmla_jiang 
	> Mail: tmla_jiang@foxmail.com
	> Created Time: Tue 09 Apr 2024 06:26:22 PM CST
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    for (int a = 1; a <= 9; a++){
        for (int b = 0; b <= 9; b++){
            int n = a*1100 + b*11;
            int m = floor(sqrt(n));
            if (m * m == n) printf("%d\n", n);
        }
    }
    return 0;
}

