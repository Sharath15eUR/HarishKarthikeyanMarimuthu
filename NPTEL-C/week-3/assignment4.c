#include <stdio.h>
int main()
{
    int n1, n2, n3;

    scanf("%d %d %d", &n1, &n2, &n3); /*Three numbers are accepted from the test case */

/*  Complete the code in the box provided below. Use printf statement as provided below:
printf("%d is the largest number.", n1);
It may be n1, n2 or n3.
*/
	int arr[3] = {n1, n2, n3};
	int i, prev, temp;
	prev = arr[0];
	for (i=0; i<3; i++){
      if(prev<arr[i])
      	prev=arr[i];
    }
    printf("%d is the largest number.", prev);
}