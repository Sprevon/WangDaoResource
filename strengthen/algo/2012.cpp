//
// Created by Seven on 2024/7/31.
//

#include <iostream>
#include <cstdlib>

typedef struct strNode {
    char data;
    struct strNode *next;
} StrNode, *Str;

int findFirstPostfix(Str str1, Str str2, Str &postfix) {
    int count1 = 0;
    Str head1 = str1->next;    //注意区分遍历统计时的指针和之后计算用的指针
    while (str1->next != nullptr) {
        str1 = str1->next;
        count1++;
    }
    int count2 = 0;
    Str head2 = str2->next;
    while (str2->next != nullptr) {
        str2 = str2->next;
        count2++;
    }
    if (count1 > count2) {
        for (int i = 0; i < count1 - count2; i++) {
            head1 = head1->next;
        }
    }
    if (count2 > count1) {
        for (int i = 0; i < count2 - count1; i++) {
            head2 = head2->next;
        }
    }
    while (head1 != nullptr) {
        if (head1 == head2) {
            postfix = head1;
            return 1;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return 0;
}

int main() {
    Str str1 = (Str) malloc(sizeof(StrNode));
    Str head1 = str1;
    str1->next = (Str) malloc(sizeof(StrNode));
    str1 = str1->next;
    str1->data = 'l';
    str1->next = (Str) malloc(sizeof(StrNode));
    str1 = str1->next;
    str1->data = 'o';
    str1->next = (Str) malloc(sizeof(StrNode));
    str1 = str1->next;
    str1->data = 'a';
    str1->next = (Str) malloc(sizeof(StrNode));
    str1 = str1->next;
    str1->data = 'd';
    Str i = (Str) malloc(sizeof(StrNode));
    str1->next = i;
    str1 = str1->next;
    str1->data = 'i';
    Str n = (Str) malloc(sizeof(StrNode));
    str1->next = n;
    str1 = str1->next;
    str1->data = 'n';
    Str g = (Str) malloc(sizeof(StrNode));
    str1->next = g;
    str1 = str1->next;
    str1->data = 'g';
    str1->next = nullptr;

    Str str2 = (Str) malloc(sizeof(StrNode));
    Str head2 = str2;
    str2->next = (Str) malloc(sizeof(StrNode));
    str2 = str2->next;
    str2->data = 'b';
    str2->next = (Str) malloc(sizeof(StrNode));
    str2 = str2->next;
    str2->data = 'e';
    str2->next = i;
    str2 = str2->next;
    str2->data = 'i';
    str2->next = n;
    str2 = str2->next;
    str2->data = 'n';
    str2->next = g;
    str2 = str2->next;
    str2->data = 'g';
    str2->next = nullptr;

    Str postfix = nullptr;
    findFirstPostfix(head1, head2, postfix);
    std::cout << postfix->data;
}

