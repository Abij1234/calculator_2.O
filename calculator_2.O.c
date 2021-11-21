#include <stdio.h>
#include <stdlib.h>

int main(void) {
int lim;
int opt;
int sum=0;
int a[100];
int i;
int sub;
int num1;
int mul;
int mulnum;
float b[100];
int divnum;
float div;
printf("\033[1;36mENTER HOW MANY NUMBERS YOU WANT TO USE==> \033[0m");
scanf("%d",&lim);
printf("\n");
printf("\033[1;31m1»» To add \033[0m\n");
printf("\033[1;31m2»» To substract \033[0m\n");
printf("\033[1;31m3»» To multiply \033[0m\n");
printf("\033[1;31m4»» To divide \033[0m\n");
printf("\n");
printf("\033[1;34mEnter your option hear>>>> \033[0m");
scanf("%d",&opt);
if(opt==1){
printf("\033[1;31mYOU SELECTED TO ADD \033[0m");
printf("\n");
printf("\033[1;34mEnter numbers to add>>>> \033[0m");
for(i=0;i<lim;i++){
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("\n");
printf("result--»»%d",sum);
}
else if(opt==2){
printf("\033[1;31mYOU SELECTED TO SUBSTRACT \033[0m");
printf("\n");
printf("\033[1;34mEnter your 1st number to substract==> \033[0m");
scanf("%d",&num1);
for(i=0;i<lim-1;i++){
printf("\033[1;34menter next numbers: \033[0m");
scanf("%d",&a[i]);
sum=sum+a[i];
sub=num1-sum;
}
printf("\n");
printf("result--»»%d",sub);
}
else if(opt==3){
printf("\033[1;31mYOU SELECTED TO multiply \033[0m");
printf("\n");
printf("\033[1;34mEnter 1st numbers to multiply>>>> \033[0m");
scanf("%d",&mulnum);
for(i=0;i<lim-1;i++){
printf("\033[1;34mEnter next number: \033[0m");
scanf("%d",&a[i]);
sum=sum+a[i];
mul=mulnum*sum;
}
printf("\n");
printf("result--»»%d",mul);
}
else if(opt==4){
printf("\033[1;31mYOU SELECTED TO DIVIDE \033[0m");
printf("\n");
printf("\033[1;34mEnter 1st number to divide>>>> \033[0m");
scanf("%d",&divnum);
for(i=0;i<lim-1;i++){
printf("\033[1;34mEnter next number: \033[0m");
scanf("%f",&b[i]);
sum=sum+b[i];
div=divnum/sum;
}
printf("\n");
printf("result--»»%f",div);
}

}
