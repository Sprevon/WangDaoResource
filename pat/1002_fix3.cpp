//
// Created by Seven on 2024/7/23.
//
#include <stdio.h>

#define MAX_TERMS 20

typedef struct {
    int exponent;
    double coefficient;
} Term;

void sort(Term terms[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (terms[j].exponent < terms[j + 1].exponent) {
                Term temp = terms[j];
                terms[j] = terms[j + 1];
                terms[j + 1] = temp;
            }
        }
    }
}

int main() {
    int k1, k2;
    Term terms[MAX_TERMS] = {0};
    int termCount = 0;

    // 读取第一组多项式
    scanf("%d", &k1);
    for (int i = 0; i < k1; i++) {
        int exp;
        double coef;
        scanf("%d %lf", &exp, &coef);
        int found = 0;
        for (int j = 0; j < termCount; j++) {
            if (terms[j].exponent == exp) {
                terms[j].coefficient += coef;
                found = 1;
                break;
            }
        }
        if (!found) {
            terms[termCount].exponent = exp;
            terms[termCount].coefficient = coef;
            termCount++;
        }
    }

    // 读取第二组多项式
    scanf("%d", &k2);
    for (int i = 0; i < k2; i++) {
        int exp;
        double coef;
        scanf("%d %lf", &exp, &coef);
        int found = 0;
        for (int j = 0; j < termCount; j++) {
            if (terms[j].exponent == exp) {
                terms[j].coefficient += coef;
                found = 1;
                break;
            }
        }
        if (!found) {
            terms[termCount].exponent = exp;
            terms[termCount].coefficient = coef;
            termCount++;
        }
    }

    // 删除系数为0的项
    int validCount = 0;
    for (int i = 0; i < termCount; i++) {
        if (terms[i].coefficient != 0) {
            terms[validCount++] = terms[i];
        }
    }
    termCount = validCount;

    // 排序
    sort(terms, termCount);

    // 输出结果
    printf("%d", termCount);
    for (int i = 0; i < termCount; i++) {
        printf(" %d %.1f", terms[i].exponent, terms[i].coefficient);
    }
    printf("\n");

    return 0;
}

