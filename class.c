//  第一题
// #include <stdio.h>
// int main() {
//    int max,a,b,c;
//     scanf("%d%d%d",&a,&b,&c);
//     if(a>b){
//         max=a;
//     }else{
//         max=b;
//     }
//     if (max>c)
//     {
//         printf("%d",max);
//     }else{
//         printf("%d",c);
//     }
//     return 0;
// }
//  第二题
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     n/=10;
//     switch(n){
//         case 6:printf("D");break;
//         case 7:printf("C");break;
//         case 8:printf("B");break;
//         case 9:
//         case 10:printf("A");break;
//         default:printf("E");break;
//     }
//     return 0;
// }
//第三题
#include <stdio.h>
int main()
{
    
}
// 第六题
// #include <stdio.h>
// int main()
// {
//     char a;
//     scanf("%c",&a);
//     if(a>=48&&a<58){
//         printf("It is a digit");
//     }else if((a>=65&&a<=90)||(a<=97+25&&a>=97)){
//         printf("It is an alphabetic character");
//     }else {
//         printf("It is other character");
//     }
//     return 0;
// }
// 第十三题
// #include <stdio.h>
// int main()
// {
//     int len,count;
//     scanf("%d",&len);
//     if(len>=0&&len<250){
//         count=0;
//     }else if(len>=250&&len<500){
//         count=2;
//     }else if(len>=500&&len<1000){
//         count=5;
//     }else if(len>=1000&&len<2000){
//         count=8;
//     }else if(len>=2000&&len<3000){
//         count=10;
//     }else if(len>=3000){
//         count=15;
//     }
//     printf("%.2f",(len*10.0)*(100-count)/100);
//     return 0;
// }
//第十一题
// #include <stdio.h>
// int main()
// {
//     int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
//     int n;
//     scanf("%d",&n);
//     if(n>=1&&n<=12){
//         printf("%d",a[n-1]);
//     }else{
//         printf("error!");
//     }
//     return 0;
// }