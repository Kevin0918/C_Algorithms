//
//  main.c
//  NumberCode
//
//  Created by gKevin on 2018/1/27.
//  Copyright © 2018年 gKevin. All rights reserved.
//

#include <stdio.h>
struct Number
{
    char name[21];
    int score;
};
int main() {
    struct Number a[100],t;
    int n,i,j;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        scanf("%s %d",&a[i].name,&a[i].score);
    }
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if (a[j].score<a[j+1].score) {
                t=a[j];a[j]=a[j+1];a[j+1]=t;
            }
        }
    }
    printf("\n");
    for (i=0; i<n; i++) {
        printf("%s\n",a[i].name);
    }
    return 0;
}
