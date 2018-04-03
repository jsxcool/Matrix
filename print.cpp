#include <iostream>

 class Matrix{
 private:
 public:
     //matrix a
     friend ostream&  operator<< (ostream& s, const Matrix& c){
         for(int i=0;i<c.rows;i++){
             for(int j=0;j<c.cols;j++){
                 s<<c.m[i*c.cols+j]<<'\t';

             }
             s<<'\n';
         }
         return s;
     }

// matrix a(1,2)
         friend ostream&  operator<< (ostream& s, const Matrix& c(int a, int b) ){
         s<<c.m[a*c.cols+b]<<'\n';
     }




 };

