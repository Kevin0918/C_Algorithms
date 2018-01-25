//
//  main.c
//  Book
//
//  Created by gKevin on 2018/1/24.
//  Copyright © 2018年 gKevin. All rights reserved.
//

#include <stdio.h>
int main() {
    int book[1001];
    int i,n,t,j;

    for (i=0; i<=1000; i++) {
        book[i]=0;
    }
    
    printf("需要排序的个数:\n");
    scanf("%d",&n);
    
    for (i=1; i<=n; i++) {
        scanf("%d",&t);
        book[t]++;
    }
    
    for (i=1000; i>=0; i--) {
        for (j=1; j<=book[i]; j++) {
            printf("%d ",i);
        }
    }
    printf("\n");
    //getchar();getchar();
    return 0;
}
