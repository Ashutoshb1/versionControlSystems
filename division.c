#include <stdio.h>
int main() {    

    int number1, number2, quotient;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    quotient = number1 / number2;      
    
    printf("%d + %d = %d", number1, number2, quotient);
    return 0;
}
