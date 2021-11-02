//
// Created by kinteg on 02.11.2021.
//

#include "lab2/moduleMatrixSum.h"
#include <iostream>

int cppLabMain2::Lab2::moduleMatrixSum(int *arr[], int rows, int columns) {
    int sum = 0;

    for (int i = 0; i < rows - 1; i++) {
        for (int j = 0; j < columns - i - 1; j++) {
            sum += abs(arr[i][j]);
        }
    }
    return sum;
}

int **cppLabMain2::Lab2::matrixSmoothing(int *arr[], int rows, int columns) {
    int **rez = new int *[rows];

    for (int i = 0; i < rows; ++i) {
        rez[i] = new int[columns];
    }

    for (int i = 0; i < rows; i++) {
        int min_k = i > 1 ? i - 1 : i;
        int max_k = i + 1 < rows ? i + 1 : i;
        for (int j = 0; j < columns; j++) {
            int tmp = 0;
            int m = 0;

            int min_l = j > 1 ? j - 1 : j;
            int max_l = j + 1 < columns ? j + 1 : j;

            for (int x = min_k; x <= max_k; x++) {
                for (int y = min_l; y <= max_l; y++) {
                    if (!(x == i && y == j)) {
                        tmp += arr[x][y];
                        m++;
                    }
                }
            }

            rez[i][j] = tmp / m;
        }
    }
    return rez;
}