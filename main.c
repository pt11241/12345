#include <stdio.h>


/* switch (<value>){
    case <constant_1>: <code_1>;break;
    case <constant_1>: <code_1>;break;
    case <constant_1>: <code_1>;break;
    [default]
}
*/

void main(){
    char c;
    float a,b;
    printf("Введите два числа и операцию над ними (+ - * /)\n");
    scanf("%f %f %c", &a,&b,&c);
    printf("\n");
    switch (c){
    case '+': 
        printf("%f",a + b);break;
    case '-': 
        printf("%f",a-b);break;
    case '*':
        printf("%f",a*b);break;
    case '/':
        printf("%f",a/b);break;
    default:printf("такой операции нет");
    }
    printf("\n");
}

