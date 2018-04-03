//
// Created by 95291 on 2018/3/26.
//

#include <iostream>
#include "Matrix.hh"
#pragma once
using namespace std;


friend Matrix operator*(Matrix a, Matrix b) {
    Matrix c(a.rows, b.cols);
    for (int i = 0; i < c.rows; i++) {
        for (int j = 0; j < c.rows; j++) {
            for (int k = 0; k < a.cols; k++) {
                c.m[i * a.rows + j] += a.m[i * a.cols + k] * b.m[k * b.cols + j];
            }
        }
    }
    return c;
}
