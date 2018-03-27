#pragma once
#include <iostream>


class Matrix {
private:
    int rows, cols;
    double* m;
    
public:
    Matrix(int rows, int cols, double i = 0): rows(rows), cols(cols),m(new double[rows*cols]){
        for(int j = 0; j < rows * cols; j++)
            m[j] = i;
    }
    
    double& operator () (int i, int j) const;
    Matrix operator = (Matrix right);
    double operator ()(int i, int j) const;
    friend Matrix operator *(Matrix left, Matrix right);
    friend std::ostream& operator << (std::ostream& s, Matrix& m);
    friend Matrix operator +(Matrix left, Matrix right);
};


