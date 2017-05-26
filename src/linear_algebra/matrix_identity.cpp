//
// Created by carlin on 3/10/16.
//

#ifndef XMATH_MATRIX_IDENTITY_CPP
#define XMATH_MATRIX_IDENTITY_CPP

#include "matrix_identity.h"
    // Not Diagonal
template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
template<class T_CHECK, uint T_iROWS, uint T_iCOLS>
typename std::enable_if
<
        std::is_same<T_CHECK, Matrix<T_nROWS, T_nCOLS, T_TYPE>>::value      &&
        Matrix<T_nROWS, T_nCOLS, T_TYPE>::IS::SQUARE                        &&
        T_iROWS != T_iCOLS                                                  &&
        Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::AT::END == false,
        void
>::type Matrix<T_nROWS, T_nCOLS, T_TYPE>::setIdentity() {
        std::cout << "1 [" << T_iROWS << "," << T_iCOLS << "]" << std::endl;
        set(T_iROWS, T_iCOLS, 0);
        std::cout << "next -> ";
        std::cout << Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>::GET_ROW() << ":";
        std::cout << Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>::GET_COL() << std::endl;
}

    // Diagonal
template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
template<class T_CHECK, uint T_iROWS, uint T_iCOLS>
typename std::enable_if
<
        std::is_same<T_CHECK, Matrix<T_nROWS, T_nCOLS, T_TYPE>>::value              &&
        Matrix<T_nROWS, T_nCOLS, T_TYPE>::IS::SQUARE                                &&
        T_iROWS == T_iCOLS                                                          &&
        Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::AT::END == false,
        void
>::type Matrix<T_nROWS, T_nCOLS, T_TYPE>::setIdentity(){
    std::cout << "2 [" << T_iROWS << "," << T_iCOLS << "]" << std::endl;
        std::cout << Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>::GET_ROW() << ":";
        std::cout << Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>::GET_COL() << std::endl;
    set(T_iROWS, T_iCOLS, 1);
    /*this->template setIdentity<T_CHECK,
            Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>::GET_ROW(),
            Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>::GET_COL()>();*/
}
    //Final
template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
template<class T_CHECK, uint T_iROWS, uint T_iCOLS>
typename std::enable_if
<
    std::is_same<T_CHECK, Matrix<T_nROWS, T_nCOLS, T_TYPE>>::value              &&
    Matrix<T_nROWS, T_nCOLS, T_TYPE>::IS::SQUARE                                &&
    T_iROWS == T_iCOLS                                                          &&
    Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::AT::END == true,
    void
>::type Matrix<T_nROWS, T_nCOLS, T_TYPE>::setIdentity(){
    std::cout << "3 [" << T_iROWS << "," << T_iCOLS << "]" << std::endl;
    std::cout << Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>::GET_ROW() << ":";
    std::cout << Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>::GET_COL() << std::endl;
    set(T_iROWS, T_iCOLS, 1);
}

template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
template<class T_CHECK>
typename std::enable_if
<
        std::is_same<T_CHECK, Matrix<T_nROWS, T_nCOLS, T_TYPE>>::value     &&
        Matrix<T_nROWS, T_nCOLS, T_TYPE>::IS::SQUARE,
        void
>::type Matrix<T_nROWS, T_nCOLS, T_TYPE>::setIdentity(){
    std::cout << "start loop()" << std::endl;
    this->template setIdentity<T_CHECK, 1, 1>();
    //LOOP::POSITION::BEGIN::ROW ,LOOP::POSITION::BEGIN::COL
}



#endif //XMATH_MATRIX_IDENTITY_CPP