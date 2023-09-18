#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N); /* The value of N is taken from the test case data */
 
/* Complete the code.
Use the printf statements as below
printf("%d is a number that can be expressed as power of 2.",N);
printf("%d cannot be expressed as power of 2.",N);
*/
int num=1;
while(1){
  if(N==num){
    printf("%d is a number that can be expressed as power of 2.",N);
    break;
  }
  else if(N<num){
    printf("%d cannot be expressed as power of 2.",N);
    break;
  }
  else{
    num *= 2;
  }
 }
 return 0;
}