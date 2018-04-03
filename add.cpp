#include <iostream>
#include "Matrix.hh"
using namespace std;

Matrix::Matrix operator +(const Matrix& left, const Matrix& right) {
        int i = left.rows;
        int j = left.cols;
        int x = right.rows;
        int y = right.cols;
        if (i = x && j = y) {
            Matrix ans;
            for (int q = 0; q < i; q++) {
                for (int w = 0; w < j; w++) {
                    ans.[q][w] = left[q][w] + right[q][w];
                }
            }
        }
}
