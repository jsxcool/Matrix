#include <iostream>
#include "Matrix.hh"
using namespace std;
                   
double& Matrix::operator ()(int r, int c){  
        return m[r*column+c];
}                                   

double Matrix::operator ()(int i, int j){
      return m[r*column+c];
}
