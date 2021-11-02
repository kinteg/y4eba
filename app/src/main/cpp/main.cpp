//
// Created by kinteg on 02.11.2021.
//

#include "main.h"

int main() {
    int labNum = 0;

    do {
        std::cout << "Input lab number (Press 0 to exit): ";
        std::cin >> labNum;
        switch (labNum) {
            case 0:
                std::cout << "Goodbye";
                break;
            case 1:
                main1();
                break;
            case 2:
                main2();
                break;
            case 3:
                main3();
                break;
            default:
                std::cout << "Sorry, but the dog ate this homework.";
        }
    } while (labNum != 0);

    return 0;
}