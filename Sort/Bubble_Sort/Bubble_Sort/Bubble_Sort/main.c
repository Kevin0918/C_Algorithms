//
//  main.c
//  Bubble_Sort
//
//  Created by gKevin on 2018/1/27.
//  Copyright © 2018年 gKevin. All rights reserved.
//

#include <stdio.h>

int main() {
    int n,temp;
    int a[10];
    int i,j;
    scanf("%d",&n);
    for (i=0; i<10; i++) {
        scanf("%d",&a[i]);
    }
    for (i=0; i<n-1; i++) {
        for (j=0; j<n-1; j++) {
            if (a[j]<a[j+1]) {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for (i=0; i<n; i++) {
        printf("%d ",a[i]);
    }
    printf("\n");
    getchar();getchar();
    return 0;
}
