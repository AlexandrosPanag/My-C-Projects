#include <stdio.h>

int main(){
    int simple=0;  //int value
    double doubletype=0; //double value
    float floattype=0; //float value
    char string[100]; //string value
    char character;
        /* User input for integer type comment variation 1*/
        printf("\n->Give an integer value:");
        scanf("%d",&simple);
        printf("\n->The integer value is %d:",simple);
        // User input for double type comment variation 2
        printf("\n\n->Give a double value:");
        scanf("%lf", &doubletype);
        printf("\n->The result is %.1f:",doubletype);
        /* User Input for float type
        comment variant 3*/
        printf("\n\n->Give a float value:");
        scanf("%2g", &floattype);
        printf("\n->The result is %.2g:",floattype);
    return 0;
}
