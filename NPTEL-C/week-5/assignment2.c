#include <stdio.h>
 int main()
{
    int N; 
    scanf("%d",&N); /*The number is accepted from the test case data*/

/* Complete the rest of the code. Please use the printf statements as below
by just changing the variables used in your program 

printf("The number %d contains %d digits.",N,count);

*/
int count=0, m=N;
while(N!=0){
  count++;
  N = N/10;
}
printf("The number %d contains %d digits.",m,count);
return 0;
}