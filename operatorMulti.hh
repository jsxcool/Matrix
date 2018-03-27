//
// Created by 95291 on 2018/3/26.
//

#include <iostream>
#include "Matrix.hh"
#pragma once
using namespace std;


friend Matrix operator*(Matrix a, Matrix b) {
    Matrix c(a.rows, b.cols);
    for (int i = 0; i < a.rows; i++) {
        for (int j = 0; j < b.cols; j++) {
            for (int k = 0; k < a.cols; k++) {
                c.m[i * c.cols + j] += a.m[i * c.cols + k] * b.m[k * c.cols + j];
            }
        }
    }
    return c;
}
