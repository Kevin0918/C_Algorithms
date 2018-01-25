//
//  main.c
//  NumbersCount
//
//  Created by gKevin on 2018/1/25.
//  Copyright © 2018年 gKevin. All rights reserved.
//

#include <stdio.h>
int main() {
    char a[1001];
    int b[10];
    int i,t;
    gets(a);
    for (i=0; i<strlen(a); i++) {
        t=a[i]-'0';
        b[t]++;
    }
    for (i=0; i<10; i++) {
        if (b[i]!=0) {
            printf("%d:%d\n",i,b[i]);
        }
    }
    return 0;
}
