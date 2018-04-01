#include <iostream>
#include "Matrix.hh"
using namespace std;
                                                   // set value. a[r][c]
Matrix::  double& operator () ( int r, int c){   // 非copy， 在申请的那块内存里变化其值
        return m[r*column+c];                 // 故用 double&, return是一个double值
    }                                      // 保存在matrix申请的那块内存里

 Matrix:: double operator ()(int i, int j)const {    // ??
        for(int row=0;row<i;row++) {
            for (int column = 0; column < j; j++)
                return m[i * cols + j];
        }
    }
