/*本题要求你写个程序把给定的符号打印成沙漏的形状。例如给定17个“*”，要求按下列格式打印
*****
 ***
  *
 ***
*****
所谓“沙漏形状”，是指每行输出奇数个符号；各行符号中心对齐；相邻两行符号数差2；符号数先从大到小顺序递减到1，再从小到大顺序递增；首尾符号数相等。
给定任意N个符号，不一定能正好组成一个沙漏。要求打印出的沙漏能用掉尽可能多的符号。

输入格式：
输入在一行给出1个正整数N（<=1000）和一个符号，中间以空格分隔。
输出格式：
首先打印出由给定符号组成的最大的沙漏形状，最后在一行中输出剩下没用掉的符号数。
输入样例：
19 *
输出样例：
*****
 ***
  *
 ***
*****
2
*/


#include <stdio.h>
int main() {
    int a[1001]={0};
    int n,t=0,b=0;
    char d;
    int i,j,x;
    scanf("%d %c",&n,&d);
    //对数据预处理，先算好存放，后查找，直接对应
    for (i=1; i<1001; i++) {
        a[i]=i*i*2-1;
    }
    for (i=1; i<1001; i++) {
        if(a[i]<=n && a[i+1]>n) {
            t=a[i];
            b=i;
            break;
        }
    }
    //打印正着的沙漏上半部分
    for (i=b;i>0;i--) {
        for (x=i; x<b; x++) {
            printf(" ");
        }
        for(j=0;j<2*i-1;j++)
            printf("%c",d);
        printf("\n");
    }
    //打印倒着的沙漏下半部分
    for (i=1; i<b; i++) {
        for (x=i; x<b-1; x++) {
            printf(" ");
        }
        for (j=2*i+1; j>0; j--) {
            printf("%c",d);
        }
        printf("\n");
    }
    printf("%d",n-t);
    getchar();getchar();
    return 0;
}
