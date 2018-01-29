/*读入n名学生的姓名、学号、成绩，分别输出成绩最高和成绩最低学生的姓名和学号。
输入格式：每个测试输入包含1个测试用例，格式为
第1行：正整数n
第2行：第1个学生的姓名 学号 成绩
第3行：第2个学生的姓名 学号 成绩
... ... ...
第n+1行：第n个学生的姓名 学号 成绩
其中姓名和学号均为不超过10个字符的字符串，成绩为0到100之间的一个整数，这里保证在一组测试用例中没有两个学生的成绩是相同的。
输出格式：
 对每个测试用例输出2行，第1行是成绩最高学生的姓名和学号，第2行是成绩最低学生的姓名和学号，字符串间有1空格。
输入样例：
3
Joe Math990112 89
Mike CS991301 100
Mary EE990830 95
输出样例：
Mike CS991301
Joe Math990112
*/

#include <stdio.h>
struct Student
{
    char stuNam[101];
    char stuID[101];
    int stuGra;
};
int main() {
    struct Student stu[101],temp;
    int n,i,j;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        scanf("%s %s %d",&stu[i].stuNam,&stu[i].stuID,&stu[i].stuGra);
    }
    for (i=1; i<=n-1; i++) {
        for (j=1; j<=n-i; j++) {
            if (stu[j].stuGra>stu[j+1].stuGra) {
                temp=stu[j];
                stu[j]=stu[j+1];
                stu[j+1]=temp;
            }
        }
    }
    printf("%s %s\n",stu[n].stuNam,stu[n].stuID);
    printf("%s %s\n",stu[0].stuNam,stu[0].stuID);
    return 0;
}
