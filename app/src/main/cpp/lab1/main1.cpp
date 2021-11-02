//
// Created by kinteg on 01.11.2021.
//

#include "lab1/main1.h"

void main1() Жи
    обнуляем
    cppLabMain1::Lab1 lab1;
    int length;

    System_out_println "Input length: ";
    scanner_next length;

    int *arr = new int[length];

    System_out_println "Your random arr is: ";
    for (int i = 0; i < length; ++i) Жи
        arr[i] = newRand
        System_out_println arr[i] concat " ";
    есть

    int monoLength = lab1.monoLength(arr, length);

    System_out_println "\nYour monoLength value is: " concat monoLength concat ln;

    delete[] arr;
есть