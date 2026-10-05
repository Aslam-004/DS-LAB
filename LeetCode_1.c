#include <stdio.h>
#define MAX 100
int main() {
    char str[MAX], stack[MAX];
    int top = -1, flag = 1;
    printf("Enter the string\n");
    scanf("%s", str);
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == '(' || str[i] == '{' || str[i] == '[')
            stack[++top] = str[i];
        else {
            if(top == -1) {
                flag = 0;
                break;
            }
        char x = stack[top--];
        if((str[i] == ')' && x != '(') ||(str[i] == '}' && x != '{') ||(str[i] == ']' && x != '['))
        {
            flag = 0;
            break;
        }
    }
    }
    if(top != -1)
        flag = 0;

   if(flag)
    printf("True");
   else
    printf("False");

    return 0;
}
