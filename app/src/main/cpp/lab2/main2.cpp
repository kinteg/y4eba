#include "lab2/main2.h"

int **fillArr(int &rows, int &columns);

void outArr(int **arr, int rows, int columns, std::string message);

void finalize(int **arr, int rows);

void main2() {
    cppLabMain2::Lab2 lab2;

    int rows = 0;
    int columns = 0;

    int **arr = fillArr(rows, columns);
    outArr(arr, rows, columns, "Your matrix: ");

    int **matrixSmoothingValue = lab2.matrixSmoothing(arr, rows, columns);
    outArr(matrixSmoothingValue, rows, columns, "Your smoothing matrix: ");

    std::cout << "Your sum: " << lab2.moduleMatrixSum(matrixSmoothingValue, rows, columns);

    finalize(arr, rows);
    finalize(matrixSmoothingValue, rows);
}

void finalize(int **arr, int rows) {
    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete arr;
}

int **fillArr(int &rows, int &columns) {
    int **arr = new int *[1];
    std::ifstream in("../resources/input.txt");
    if (in.is_open()) {
        int count = 0;
        int temp;

        while (!in.eof()) {
            in >> temp;
            count++;
        }

        in.seekg(0, std::ios::beg);
        in.clear();

        int count_space = 0;
        char symbol;
        while (!in.eof()) {
            in.get(symbol);
            if (symbol == ' ') {
                count_space++;
            }
            if (symbol == '\n') {
                break;
            }
        }

        in.seekg(0, std::ios::beg);
        in.clear();

        rows = count / (count_space + 1);
        columns = count_space + 1;

        arr = new int *[rows];
        for (int i = 0; i < rows; i++) {
            arr[i] = new int[columns];
        }

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                in >> arr[i][j];
            }
        }
        in.close();
    } else {
        std::cout << "I don't find matrix :(\n";
    }
    return arr;
}

void outArr(int **arr, int rows, int columns, std::string message) {
    std::cout << message << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

