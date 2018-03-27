#include <iostream>
#include "Matrix.hh"
using namespace std;

Matrix:: double& operator ()(int i, int j)  {
       for(int row=0;row<i;row++) {
           for (int column = 0; column < j; j++)
               return m[i * cols + j];
       }
    }

 Matrix:: double operator ()(int i, int j)const {
        for(int row=0;row<i;row++) {
            for (int column = 0; column < j; j++)
                return m[i * cols + j];
        }
    }
