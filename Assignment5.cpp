/*
Assignment 5: Implement C++ program for expression conversion as infix to postfix and its evaluation using stack based on given conditions 	

Name-Gavali swapnil annasaheb
Roll no.-03
Subject-DSL
*/
#include<iostream>
#include<ctype.h>
using namespace std;

int s[10], top = -1;

class Myclass {
public:
    int evaluate(char post[10]);
    int operation(int x, int y, char op);
    void push(int x);
    int pop();
    void inftopost(char inf[10], char post[10]);
    int priority(char op);
};

void Myclass::inftopost(char inf[10], char post[10]) {
    int i = 0, j = 0;
    char token, x;
    while (inf[i] != '\0') {
        token = inf[i];
        if (isalnum(token)) {
            post[j] = token;
            j++;

        } else if (token == '(')
            push(token);
        else if (token == ')') {
            while ((x = pop()) != '(') {
                post[j] = x;
                j++;
            }
        } else {
            while (priority(token) <= priority(s[top]) && top != -1) {
                x = pop();
                post[j] = x;
                j++;
            }
            push(token);
        }
        i++;
    }
    while (top != -1) {
        post[j] = pop();
        j++;
    }
    post[j] = '\0';
    cout << "Postfix expression is=" << post << endl;
}

int Myclass::priority(char op) {
    if (op == '(')
        return 0;
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    if (op == '^')
        return 3;
}

int Myclass::evaluate(char post[10]) {
    int i, x, y, z, res, val;
    for (i = 0; post[i] != '\0'; i++) {
        if (isalpha(post[i])) {
            cout << "Enter value for " << post[i] << ": ";
            cin >> val;
            push(val);
        } else {
            x = pop();
            y = pop();
            z = operation(y, x, post[i]); // Corrected order of operands
            push(z);
        }
    }
    res = pop();
    cout << "Evaluated expression is: " << res << endl;
    return res;
}

int Myclass::operation(int x, int y, char op) {
    if (op == '+')
        return y + x;
    if (op == '-')
        return y - x;
    if (op == '*')
        return y * x;
    if (op == '/')
        return y / x;
}

void Myclass::push(int x) {
    top++;
    s[top] = x;
}

int Myclass::pop() {
    int x;
    x = s[top];
    top--;
    return x;
}

int main() {
    Myclass ob;
    char inf[10], post[10];
    int x;

    cout << "Enter infix expression: ";
    cin >> inf;

    ob.inftopost(inf, post);

    x = ob.evaluate(post);

    return 0;
}

