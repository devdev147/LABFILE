//5.	WAP using ternary operator, the user should input the length and breadth of a rectangle, one has to find out which rectangle has the highest perimeter. The minimum number of rectangles should be three.
#include <stdio.h>
int main() {
    float length1, breadth1, length2, breadth2, length3, breadth3;
    float perimeter1, perimeter2, perimeter3;
    float maxPerimeter;

    // Input for first rectangle
    printf("Enter length and breadth of first rectangle: ");
    scanf("%f %f", &length1, &breadth1);
    perimeter1 = 2 * (length1 + breadth1);

    // Input for second rectangle
    printf("Enter length and breadth of second rectangle: ");
    scanf("%f %f", &length2, &breadth2);
    perimeter2 = 2 * (length2 + breadth2);

    // Input for third rectangle
    printf("Enter length and breadth of third rectangle: ");
    scanf("%f %f", &length3, &breadth3);
    perimeter3 = 2 * (length3 + breadth3);

    // Finding maximum perimeter using ternary operator
    maxPerimeter = (perimeter1 > perimeter2) ? 
                    ((perimeter1 > perimeter3) ? perimeter1 : perimeter3) : 
                    ((perimeter2 > perimeter3) ? perimeter2 : perimeter3);

    printf("The highest perimeter among the three rectangles is: %.2f\n", maxPerimeter);

    return 0;
}