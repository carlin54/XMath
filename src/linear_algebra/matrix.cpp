//
// Created by carlin on 3/10/16.
//

#ifndef XMATH_MATRIX_CPP
#define XMATH_MATRIX_CPP

#include "matrix.h"



template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
const uint Matrix<T_nROWS, T_nCOLS, T_TYPE>::NUMBER::ROWS = T_nROWS;

template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
const uint Matrix<T_nROWS, T_nCOLS, T_TYPE>::NUMBER::COLS = T_nCOLS;

template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
const uint Matrix<T_nROWS, T_nCOLS, T_TYPE>::NUMBER::CELLS = T_nROWS * T_nCOLS;

template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
const bool Matrix<T_nROWS, T_nCOLS, T_TYPE>::IS::VECTOR = T_nCOLS == 1u;

template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
const bool Matrix<T_nROWS, T_nCOLS, T_TYPE>::IS::SQUARE = T_nROWS == T_nCOLS;


template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
template<uint T_iROWS, uint T_iCOLS>
const bool Matrix<T_nROWS, T_nCOLS, T_TYPE>::LOOP<T_iROWS, T_iCOLS>::AT::BEGIN = T_iROWS == 0 && T_iCOLS == 0;

template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
template<uint T_iROWS, uint T_iCOLS>
const bool Matrix<T_nROWS, T_nCOLS, T_TYPE>::LOOP<T_iROWS, T_iCOLS>::AT::MIDDLE = T_iROWS != T_nROWS || T_iCOLS != T_nCOLS;

template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
template<uint T_iROWS, uint T_iCOLS>
const bool Matrix<T_nROWS, T_nCOLS, T_TYPE>::LOOP<T_iROWS, T_iCOLS>::AT::END = T_iROWS == T_nROWS-1 && T_iCOLS == T_nCOLS-1;


template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
template<uint T_iROWS, uint T_iCOLS>
const bool Matrix<T_nROWS, T_nCOLS, T_TYPE>::LOOP<T_iROWS, T_iCOLS>::AT::BEGIN::ROW = T_iROWS == 0;

template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
template<uint T_iROWS, uint T_iCOLS>
const bool Matrix<T_nROWS, T_nCOLS, T_TYPE>::LOOP<T_iROWS, T_iCOLS>::AT::BEGIN::COL = T_iCOLS == 0;

template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
template<uint T_iROWS, uint T_iCOLS>
const bool Matrix<T_nROWS, T_nCOLS, T_TYPE>::LOOP<T_iROWS, T_iCOLS>::AT::MIDDLE::ROW = T_iROWS != 0 || T_iROWS != T_nROWS-1;

template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
template<uint T_iROWS, uint T_iCOLS>
const bool Matrix<T_nROWS, T_nCOLS, T_TYPE>::LOOP<T_iROWS, T_iCOLS>::AT::MIDDLE::COL = T_nCOLS != 0 || T_iCOLS != T_nCOLS-1;


template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
template<uint T_iROWS, uint T_iCOLS>
const bool Matrix<T_nROWS, T_nCOLS, T_TYPE>::LOOP<T_iROWS, T_iCOLS>::AT::END::ROW = T_iROWS == T_nROWS-1;

template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
template<uint T_iROWS, uint T_iCOLS>
const bool Matrix<T_nROWS, T_nCOLS, T_TYPE>::LOOP<T_iROWS, T_iCOLS>::AT::END::COL = T_iCOLS == T_iCOLS-1;

template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
template<uint T_iROWS, uint T_iCOLS>
const uint Matrix<T_nROWS, T_nCOLS, T_TYPE>::LOOP<T_iROWS, T_iCOLS>::POSITION::BEGIN::ROW = 0;

template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
template<uint T_iROWS, uint T_iCOLS>
const uint Matrix<T_nROWS, T_nCOLS, T_TYPE>::LOOP<T_iROWS, T_iCOLS>::POSITION::BEGIN::COL = 0;

template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
template<uint T_iROWS, uint T_iCOLS>
const uint Matrix<T_nROWS, T_nCOLS, T_TYPE>::LOOP<T_iROWS, T_iCOLS>::POSITION::END::ROW = T_nROWS-1;

template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
template<uint T_iROWS, uint T_iCOLS>
const uint Matrix<T_nROWS, T_nCOLS, T_TYPE>::LOOP<T_iROWS, T_iCOLS>::POSITION::END::COL = T_nCOLS-1;


template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
template<uint T_iROWS, uint T_iCOLS>
template<class T_CHECK>
typename std::enable_if
<
        std::is_same<T_CHECK, typename Matrix<T_nROWS, T_nCOLS, T_TYPE>::template NEXT<T_iROWS, T_iCOLS>>::value    &&
        (Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::AT::END::COL == false)                  &&
        (Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::AT::END == false),
        const uint
>::type Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>::GET_ROW(){
    std::cout << "ROW (T_iROWS)";
    return T_iROWS;}

template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
template<uint T_iROWS, uint T_iCOLS>
template<class T_CHECK>
typename std::enable_if
<
        std::is_same<T_CHECK, typename Matrix<T_nROWS, T_nCOLS, T_TYPE>::template NEXT<T_iROWS, T_iCOLS>>::value    &&
        (Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::AT::END::COL == true)                   &&
        (Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::AT::END == false),
        const uint
>::type Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>::GET_ROW(){
    std::cout << "ROW (T_iROWS + 1)";
    return T_iROWS+1;}

template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
template<uint T_iROWS, uint T_iCOLS>
template<class T_CHECK>
typename std::enable_if
<
        std::is_same<T_CHECK, typename Matrix<T_nROWS, T_nCOLS, T_TYPE>::template NEXT<T_iROWS, T_iCOLS>>::value  &&
        (Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::AT::END::COL == true)                 &&
        (Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::AT::END == true),
        const uint
>::type Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>::GET_ROW(){
    std::cout << "ROW (0)";
    return 0;}


template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
template<uint T_iROWS, uint T_iCOLS>
template<class T_CHECK>
typename std::enable_if
<
        std::is_same<T_CHECK, typename Matrix<T_nROWS, T_nCOLS, T_TYPE>::template NEXT<T_iROWS, T_iCOLS>>::value    &&
        (Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::AT::END::COL == false)                  &&
        (Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::AT::END == false),
        const uint
>::type Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>::GET_COL(){
    std::cout << "COL (T_iCOLS+1)";
    return T_iCOLS+1;}

template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
template<uint T_iROWS, uint T_iCOLS>
template<class T_CHECK>
typename std::enable_if
<
        std::is_same<T_CHECK, typename Matrix<T_nROWS, T_nCOLS, T_TYPE>::template NEXT<T_iROWS, T_iCOLS>>::value    &&
        (Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::AT::END::COL == true)                   &&
        (Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::AT::END == false),
        const uint
>::type Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>::GET_COL(){
    std::cout << "COL (0)";
    return 0;}

template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
template<uint T_iROWS, uint T_iCOLS>
template<class T_CHECK>
typename std::enable_if
<
        std::is_same<T_CHECK, typename Matrix<T_nROWS, T_nCOLS, T_TYPE>::template NEXT<T_iROWS, T_iCOLS>>::value    &&
        (Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::AT::END::COL == true)                   &&
        (Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::AT::END == true),
        const uint
>::type Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>::GET_COL(){
    std::cout << "COL (0)";
    return 0;}

/*
template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
template<uint T_iROWS, uint T_iCOLS>
template<class T_CHECK>
typename std::enable_if
<
        std::is_same<T_CHECK, typename Matrix<T_nROWS, T_nCOLS, T_TYPE>::template NEXT<T_iROWS, T_iCOLS>>::value,
        const uint
>::type Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>::ROW = Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>::GET_ROW();

template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
template<uint T_iROWS, uint T_iCOLS>
template<class T_CHECK>
typename std::enable_if
<
        std::is_same<T_CHECK, typename Matrix<T_nROWS, T_nCOLS, T_TYPE>::template NEXT<T_iROWS, T_iCOLS>>::value,
        const uint
>::type Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>::COL = Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>::GET_COL();
*/


template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
constexpr uint Matrix<T_nROWS, T_nCOLS, T_TYPE>::getRow(const uint& index)const
{
    assert((Matrix<T_nROWS, T_nCOLS, T_TYPE>::NUMBER::ROWS) > index / T_nCOLS);
    return index / T_nCOLS;
}
template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
constexpr uint Matrix<T_nROWS, T_nCOLS, T_TYPE>::getRow(const uint& iRow, const uint& iCol)const
{
    assert((Matrix<T_nROWS, T_nCOLS, T_TYPE>::NUMBER::ROWS) > iRow);
    return iRow;
}
template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
constexpr uint Matrix<T_nROWS, T_nCOLS, T_TYPE>::getCol(const uint& index)const
{
    assert((Matrix<T_nROWS, T_nCOLS, T_TYPE>::NUMBER::COLS) > index % T_nCOLS);
    return index % T_nCOLS;
}
template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
constexpr uint Matrix<T_nROWS, T_nCOLS, T_TYPE>::getCol(const uint& iRow, const uint& iCol)const
{
    assert((Matrix<T_nROWS, T_nCOLS, T_TYPE>::NUMBER::COLS) > iCol);
    return iCol;
}

template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
const T_TYPE& Matrix<T_nROWS, T_nCOLS, T_TYPE>::get(const uint& index)const
{
    return m_data[getRow(index)][getCol(index)];
}
template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
const T_TYPE& Matrix<T_nROWS, T_nCOLS, T_TYPE>::get(const uint& iRow, const uint& iCol)const
{
    return m_data[getRow(iRow, iCol)][getCol(iRow, iCol)];
}

template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
void Matrix<T_nROWS, T_nCOLS, T_TYPE>::set(const uint& index, const T_TYPE& set)
{
    return m_data[getRow(index)][getCol(index)] = set;
}
template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
void Matrix<T_nROWS, T_nCOLS, T_TYPE>::set(const uint& iRow, const uint& iCol, const T_TYPE& set)
{
    m_data[getRow(iRow, iCol)][getCol(iRow, iCol)] = set;
}

template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
T_TYPE* Matrix<T_nROWS, T_nCOLS, T_TYPE>::operator[](const unsigned &index){
    return m_data[index];
}

template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
Matrix<T_nROWS, T_nCOLS, T_TYPE>::Matrix(){}


#endif