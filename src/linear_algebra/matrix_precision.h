//
// Created by carlin on 3/10/16.
//

#ifndef XMATH_MATRIX_PRECISION_H
#define XMATH_MATRIX_PRECISION_H

#include <type_traits>

#include "precision.h"

template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
class Matrix;

template <uint T_nROWS, uint T_nCOLS, uint T_onROWS, uint T_onCOLS>
struct inner_bounds {
    static const bool equal = T_nCOLS == T_onROWS;
    static const uint value = T_nCOLS;
};

template <uint T_nROWS, uint T_nCOLS>
struct is_vector {
    static const bool value = (T_nCOLS == 1);
};

template <uint T_nROWS, uint T_nCOLS>
struct is_square_matrix {
    static const bool value = (T_nROWS == T_nCOLS);
};

template <uint T_nROWS, uint T_nCOLS, uint T_onROWS, uint T_onCOLS>
struct can_be_multiplied {
    static const bool value = (T_nCOLS == T_onROWS);
};


#endif //XMATH_MATRIX_PRECISION_H
