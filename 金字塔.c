
#include<stdio.h>
int main()
{
    // int i,j;
    // for (i=1;i<=3;++i)  // 控制金字塔的层数，本例输出3层，可以改变输出任意层
    // {
    //     for (j=1;j<=3-i;++j) printf(" "); // 控制金字塔每层前面输出的空格数
    //     for (j=1;j<=2*i-1;++j) printf("*");// 控制金字塔每层需要打印'*'的个数
    //     printf("\n");  // 一层金字塔输出完毕，换行继续输出下一层
    // }

    int i,k;
    for(k=0;k<=9;++k){
        for (i = 0; i <= 9-k; ++i) printf(" ");
        for (i = 0; i <= 2*k ; ++i) printf("*");
            printf("\n");
    }

// 倒金字塔
  // int i,k;
    for(k=0;k<=9;++k){
        for (i = 0; i <= k ; ++i)       printf(" ");
        for (i = 0; i <= 18-2*k ; ++i)     printf("*");
            // printf("\n");
          putchar('\n');
    }



// HiPhone版倒金字塔
//     int i,k;
//     for(i=0;i<=9;i++){

//     for(k=0;k<=18;k++)
//         if(k>=i&&k<=18-i)printf("*");
//         else printf(" ");
//     printf("\n");
// }
//     return 0;
}