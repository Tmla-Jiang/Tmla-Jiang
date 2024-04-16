/*************************************************************************
	> File Name: 489Uva.c
	> Author: tmla_jiang 
	> Mail: tmla_jiang@foxmail.com
	> Created Time: Fri 12 Apr 2024 09:07:24 PM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>

#define maxn 100

int left, chance;
char s[maxn], s2[maxn];
int win, lose;

void guess(char ch) {
    int bad = 1;
    for(int i = 0; i < strlen(s); i++)
        if (s[i] == ch) { left--; s[i] = ' '; bad = 0; }
    if(bad) --chance;
    if(!chance) lose = 1;
    if(!left) win = 1;
}

int main() {
    int rnd;
    while(scanf("%d%s%s", &rnd, s, s2)){
        printf("Round %d\n", rnd);
        win = lose = 0;
        left = strlen(s);
        chance = 7;
        for (int i = 0; i < strlen(s2); i++) {
            guess(s2[i]);
            if(win || lose) break;
        }
        if(win) printf("You win.\n");
        else if(lose) printf("You lose.\n");
        else printf("You chickened out.\n");
    }
    return 0;
}

