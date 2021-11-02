#include "lab3/main3.h"

void fillArr(char * &str1, char * &str2);

void main3() {
    cppLabMain3::Lab3 lab3;
    char *str1 = new char[0];
    char *str2 = new char[0];

    fillArr(str1, str2);

    std::cout << "Your first string: " << std::string(str1) << "\n";
    std::cout << "Your second string: " << std::string(str2) << "\n";
    std::cout << std::boolalpha;
    std::cout << "Find into char: " << lab3.checkChar(str1, str2) << "\n";
    std::cout << "Find into string: " << lab3.checkStr(std::string(str1), std::string(str2)) << "\n";

    delete[] str1;
    delete[] str2;
}

void fillArr(char * &str1, char * &str2) {
    std::ifstream in("../resources/input2.txt");
    if (in.is_open()) {
        int count1 = 0;
        char symbol;
        while (!in.eof()) {
            in.get(symbol);
            if (symbol == '\n') {
                count1++;
                str1 = new char[count1];
                break;
            } else {
                count1++;
            }
        }
        int count2 = 0;
        while (!in.eof()) {
            in.get(symbol);
            if (symbol == '\n') {
                count2++;
                str2 = new char[count2];
                break;
            } else {
                count2++;
            }
        }

        in.seekg(0, std::ios::beg);
        in.clear();

        in.getline(str1, count1);
        in.getline(str2, count2);

        in.close();
    } else {
        std::cout << "I don't find strings :(\n";
    }
}