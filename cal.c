/*************************************************************************
	> File Name: cal.c
	> Author: tmla_jiang 
	> Mail: tmla_jiang@foxmail.com
	> Created Time: Tue 09 Apr 2024 07:26:12 PM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    double sum = 1;
    for (int i = 1; ;i++) {
        double a = 1.0 / (i*2+1);
        if (i % 2 == 0) {
            sum -= a;
        } else {
            sum += a;
        }
        if (sum > 10e-6) break;
    }
    printf("%0.6lf\n", sum);

    return 0;
}
