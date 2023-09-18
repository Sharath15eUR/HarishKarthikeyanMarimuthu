#include<stdio.h>
int main()
{
    int a,b,c; 
    scanf("%d %d %d",&a, &b, &c); /*The length of three sides are entered from the test cases */
 
/* Complete the program. Copy and paste from the printf statements mentioned below wherever required for printing the outputs 

printf("Triangle is not possible");
printf("Right-angle Triangle");
printf("Isosceles Triangle");
printf("Equilateral Triangle");
printf("Scalene Triangle");

*/
if(a!=0 && b!=0 && c!=0){
  if(a==b && b==c){
    printf("Equilateral Triangle");
  }
  else if((a==b && b!=c) || (b==c && a!=c) || (a==c && b!=c)){
    printf("Isosceles Triangle");
  }
  else if((a*a==(b*b+c*c)) || (b*b==(a*a+c*c)) || (c*c==(a*a+b*b))){
    printf("Right-angle Triangle");
  }
  else{
    printf("Scalene Triangle");
  }
}
else{
  printf("Triangle is not possible");
}

}