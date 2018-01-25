//
//  main.c
//  Bucket_sort
//
//  Created by gKevin on 2018/1/23.
//  Copyright © 2018年 gKevin. All rights reserved.
//

#include <stdio.h>
int main() {
    // insert code here...
    //printf("Hello, World!\n");
    int a[11];
    int i,j,k;
    
    for (i=0; i<11; i++) {
        a[i]=0;
    }
    
    printf("请输入5个数：\n");
    for(i=1;i<=5;i++) {
        scanf("%d",&k);
        a[k]++;
    }
    
    for (i=0; i<11; i++) {
        for (j=1; j<=a[i]; j++) {
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}

