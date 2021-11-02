//
// Created by kinteg on 02.11.2021.
//
#include "lab3/stringChecker.h"

bool cppLabMain3::Lab3::checkChar(const char * str1, const char * str2) {
    for (int i = 0; str1[i] != '\0'; i++) {
        for (int j = 0; str2[j] != '\0'; j++) {
            if (str1[i] == str2[j]) {
                return true;
            }
        }
    }
    return false;
}

bool cppLabMain3::Lab3::checkStr(std::string str1, std::string str2) {
    for (char& c1 : str1) {
        for (char& c2 : str2) {
            if (c1 == c2) {
                return true;
            }
        }
    }
    return false;
}