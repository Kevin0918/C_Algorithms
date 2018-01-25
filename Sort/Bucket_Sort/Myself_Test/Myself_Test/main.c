//
//  main.c
//  Myself_Test
//
//  Created by gKevin on 2018/1/24.
//  Copyright © 2018年 gKevin. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
//    printf("Hello, World!\n");
    int L[1001];
    int i,j,n,t;
    // Initial
    for(i=0;i<1001;i++)
        L[i]=0;
    // Input
    printf("请输入您要排序的个数：\n");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&t);
        L[t]++;
    }
    
    for(i=0;i<1001;i++){
        for (j=1; j<=L[i]; j++) {
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}
