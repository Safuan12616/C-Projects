#include<stdio.h>

int main() {
    float x, y, answer;
    char c;
    printf("Enter your calculation: \n");
    scanf("%f %c %f", &x, &c, &y);
    switch(c) {
        case '+':
            answer= x+y;
            break;
        case '-':
            answer= x-y;
            break;
        case '*':
            answer= x*y;
            break;
        case '/':
            answer= x/y;
            break;
        default:
            printf("Error\n");
    }
    printf("Result: %.2f\n", answer);
    return 0;
}
