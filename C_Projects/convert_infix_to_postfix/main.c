#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 50

struct stack {
    char data;
    struct stack* next;
};

int operator_pri(char op);
void infix_to_post(char exp1[], char oexp[], struct stack* s1);
struct stack* push(struct stack* s, char c);

int main()
{
    char infix[MAXSIZE], postfix[MAXSIZE];
    struct stack* sop = NULL;

    printf("Enter expression: ");
    scanf("%s", infix);
    printf("Expression: %s\n", infix);

    infix_to_post(infix, postfix, sop);
    printf("Postfix Expression: %s\n", postfix);

    return 0;
}

void infix_to_post(char exp1[], char oexp[], struct stack* s1) {
    int i = 0, j = 0;
    while (exp1[i] != '\0') {
        if ((exp1[i] >= 'a' && exp1[i] <= 'z') || (exp1[i] >= '0' && exp1[i] <= '9')) {
            oexp[j++] = exp1[i++];
        } else {
            if (exp1[i] == '(') {
                s1 = push(s1, exp1[i++]);
            } else if (exp1[i] == ')') {
                while (s1 != NULL && s1->data != '(') {
                    oexp[j++] = s1->data;
                    s1 = s1->next;
                }
                if (s1 != NULL && s1->data == '(') {
                    s1 = s1->next;
                }
                i++;
             }
            else
             {
                while (s1 != NULL && operator_pri(s1->data) >= operator_pri(exp1[i]))
                {
                    oexp[j++] = s1->data;
                    s1 = s1->next;
                }
                s1 = push(s1, exp1[i++]);
            }
        }
    }

    while (s1 != NULL) {
        oexp[j++] = s1->data;
        s1 = s1->next;
    }
    oexp[j] = '\0';
}

int operator_pri(char op) {
    if (op == '^')
        return 5;
    else if (op == '/' || op == '*')
        return 4;
    else if (op == '+' || op == '-')
        return 3;
    else if (op == '(')
        return 2;
    else
        return 1;
}

struct stack* push(struct stack* s, char c) {
    struct stack* node = (struct stack*)malloc(sizeof(struct stack));
    if (node == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    node->data = c;
    node->next = s;
    return node;
}
