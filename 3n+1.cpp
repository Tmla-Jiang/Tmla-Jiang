/*************************************************************************
	> File Name: 3n+1.cpp
	> Author: tmla_jiang 
	> Mail: tmla_jiang@foxmail.com
	> Created Time: Tue 09 Apr 2024 07:04:42 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int u = 0;
    long long n;
    cin >> n;
    while(n>1){
        if (n % 2 !=0) {
            n = 3 * n + 1;
        } else {
            n = n / 2;
        }   
        u++;
    }
    cout << u << endl;
    return 0;
}
