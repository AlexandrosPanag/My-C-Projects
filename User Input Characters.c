#include <stdio.h>
int main()
{
    char array[20];
    printf("Enter a string: ");
    scanf("%s", array);
    printf("Your string is %s.", array);
    //Alternative method
    /*
   char array[20]; 
   scanf("%[^\n]%*c", array); 
   printf("%s", array); 
   */
    return 0;
}
