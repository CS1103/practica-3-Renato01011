#ifndef EXAMEN3_TEMPLATES_H
#define EXAMEN3_TEMPLATES_H
#include <iostream>
#include <vector>
#include <deque>

template <typename T>
class Matrix {
    int n;
    int m;
    std::vector< std::vector<T> >M;
public:
    int getN() const {return n;}
    int getM() const {return m;}
    Matrix(int _n, int _m) {
        m = _m;
        n = _n;
        M.resize(n);
        for ( int i = 0 ; i < n ; i++ )
            M[i].resize(m);
    }
    ~Matrix() {}
    std::vector< std::vector<T> > operator*() const { return M; }
    std::vector< std::vector<T> > getMatrix() {return M;}
    Matrix getMconst() const { Matrix returnValue = *this; return returnValue; }
    void fillRandomValues() {
        for (int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                M[i][j] = (rand()%50)+1;
    }
    Matrix& operator=(const Matrix<T>& rhs) {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                M[i][j] = (*rhs)[i][j];
    }
    void printMatrix() {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                std::cout << M[i][j] << " ";
            }
            std::cout << "\n";
        }
    }
};

template <typename P>
Matrix<P> operator+(const Matrix<P>& lhs, const Matrix<P>& rhs) {
    if (sameDimensions(lhs, rhs)) {
        Matrix<P> Return(lhs.getN(), lhs.getM());
        for (int i = 0; i < lhs.getN(); i++) {
            for (int j = 0; j < lhs.getM(); j++) {
                Return.getMatrix()[i][j] = (*lhs)[i][j] + (*rhs)[i][j];
            }
        }
        return Return;
    }
}

template <typename U>
bool sameDimensions(const Matrix<U>& lhs, const Matrix<U>& rhs) {if ( (lhs.getN() == rhs.getN()) and (lhs.getM() == rhs.getM()) ) {return true;} else {return false;}}

template <typename T>
std::deque<T> ordenar(std::deque<T> d1, int n) {
    std::deque<T> d2;
    int subgrupo = d1.size()/n;
    for(int j = 0; j < subgrupo; j++) {
        for (int i = 0; i < n; i++) {

        }
    }
}

#endif //EXAMEN3_TEMPLATES_H
