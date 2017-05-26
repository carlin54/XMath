//
// Created by carlin on 3/10/16.
//

#ifndef XMATH_MATRIX_H
#define XMATH_MATRIX_H

#include "matrix_precision.h"


template<uint T_nROWS, uint T_nCOLS, class T_TYPE>
class Matrix {
public:
    struct NUMBER {
        static const uint ROWS;
        static const uint COLS;
        static const uint CELLS;
    };

    struct IS {
        static const bool VECTOR;
        static const bool SQUARE;
    };

    // this can be templated off later to n dimensions
    template<uint T_iROWS=0, uint T_iCOLS=0>
    struct LOOP {

        struct AT {

            static const bool BEGIN;
            static const bool MIDDLE;
            static const bool END;

            struct BEGIN {
                static const bool ROW;
                static const bool COL;
            };

            struct MIDDLE {
                static const bool ROW;
                static const bool COL;
            };

            struct END {
                static const bool ROW;
                static const bool COL;
            };

        };

        struct POSITION {
            struct BEGIN {
                static const uint ROW;
                static const uint COL;
            };

            struct END {
                static const uint ROW;
                static const uint COL;
            };
        };

    };

    template<uint T_iROWS, uint T_iCOLS>
    struct NEXT {
    public:
        template<class T_CHECK = Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>>
        static typename std::enable_if
        <
                std::is_same<T_CHECK, typename Matrix<T_nROWS, T_nCOLS, T_TYPE>::template NEXT<T_iROWS, T_iCOLS>>::value    &&
                (Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::AT::END::COL == false)                  &&
                (Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::AT::END == false),
                const uint
        >::type GET_ROW();

        template<class T_CHECK = Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>>
        static typename std::enable_if
        <
                std::is_same<T_CHECK, typename Matrix<T_nROWS, T_nCOLS, T_TYPE>::template NEXT<T_iROWS, T_iCOLS>>::value    &&
                (Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::AT::END::COL == true)                   &&
                (Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::AT::END == false),
                const uint
        >::type GET_ROW();

        template<class T_CHECK = Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>>
        static typename std::enable_if
        <
                std::is_same<T_CHECK, typename Matrix<T_nROWS, T_nCOLS, T_TYPE>::template NEXT<T_iROWS, T_iCOLS>>::value  &&
                (Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::AT::END::COL == true)                 &&
                (Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::AT::END == true),
                const uint
        >::type GET_ROW();


        template<class T_CHECK = Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>>
        static typename std::enable_if
        <
                std::is_same<T_CHECK, typename Matrix<T_nROWS, T_nCOLS, T_TYPE>::template NEXT<T_iROWS, T_iCOLS>>::value    &&
                (Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::AT::END::COL == false)                  &&
                (Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::AT::END == false),
                const uint
        >::type GET_COL();

        template<class T_CHECK = Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>>
        static typename std::enable_if
        <
                std::is_same<T_CHECK, typename Matrix<T_nROWS, T_nCOLS, T_TYPE>::template NEXT<T_iROWS, T_iCOLS>>::value    &&
                (Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::AT::END::COL == true)                   &&
                (Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::AT::END == false),
                const uint
        >::type GET_COL();

        template<class T_CHECK = Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>>
        static typename std::enable_if
        <
                std::is_same<T_CHECK, typename Matrix<T_nROWS, T_nCOLS, T_TYPE>::template NEXT<T_iROWS, T_iCOLS>>::value    &&
                (Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::AT::END::COL == true)                   &&
                (Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::AT::END == true),
                const uint
        >::type GET_COL();



        static const uint ROW;
        static const uint COL;

        /*template<class T_CHECK = Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>>
        static typename std::enable_if
        <
                std::is_same<T_CHECK, typename Matrix<T_nROWS, T_nCOLS, T_TYPE>::template NEXT<T_iROWS, T_iCOLS>>::value,
                const uint
        >::type ROW;

        template <class T_CHECK = Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>>
        static typename std::enable_if
        <
                std::is_same<T_CHECK, typename Matrix<T_nROWS, T_nCOLS, T_TYPE>::template NEXT<T_iROWS, T_iCOLS>>::value,
                const uint
        >::type COL; */



        /*template<class T_CHECK = Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>>
        static typename std::enable_if
        <
                std::is_same<T_CHECK, Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>>::value  &&
                (Matrix<T_nROWS, T_nCOLS, T_TYPE>::LOOP<T_iROWS, T_iCOLS>::AT::BEGIN == true) &&
                (Matrix<T_nROWS, T_nCOLS, T_TYPE>::LOOP<T_iROWS, T_iCOLS>::AT::END == false),
                const uint
        >::type COL;

        template<class T_CHECK = Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>>
        static typename std::enable_if
        <
                std::is_same<T_CHECK, Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>>::value  &&
                (Matrix<T_nROWS, T_nCOLS, T_TYPE>::LOOP<T_iROWS, T_iCOLS>::AT::MIDDLE == true),
                const uint
        >::type COL;


        template<class T_CHECK = Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>>
        static typename std::enable_if
        <
                std::is_same<T_CHECK, Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>>::value  &&
                (Matrix<T_nROWS, T_nCOLS, T_TYPE>::LOOP<T_iROWS, T_iCOLS>::AT::END == true),
                const uint
        >::type COL;

        template<class T_CHECK = Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>>
        static typename std::enable_if
        <
                std::is_same<T_CHECK, Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>>::value  &&
                (Matrix<T_nROWS, T_nCOLS, T_TYPE>::LOOP<T_iROWS, T_iCOLS>::AT::BEGIN::END::ROW == true),
                const uint
        >::type COL;

        template<class T_CHECK = Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>>
        static typename std::enable_if
        <
                std::is_same<T_CHECK, Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>>::value  &&
                (Matrix<T_nROWS, T_nCOLS, T_TYPE>::LOOP<T_iROWS, T_iCOLS>::AT::BEGIN::END::COL == true) &&
                (Matrix<T_nROWS, T_nCOLS, T_TYPE>::LOOP<T_iROWS, T_iCOLS>::AT::BEGIN::END == false),
                const uint
        >::type COL;*/

    };

    template<uint T_iROWS, uint T_iCOLS>
    struct PREVIOUS {
        template<class T_CHECK = Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>>
        static typename std::enable_if
                <
                        std::is_same<T_CHECK, typename Matrix<T_nROWS, T_nCOLS, T_TYPE>::template NEXT<T_iROWS, T_iCOLS>>::value    &&
                        (Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::AT::END::COL == false)                  &&
                        (Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::AT::END == false),
                        const uint
                >::type GET_ROW();

        template<class T_CHECK = Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>>
        static typename std::enable_if
                <
                        std::is_same<T_CHECK, typename Matrix<T_nROWS, T_nCOLS, T_TYPE>::template NEXT<T_iROWS, T_iCOLS>>::value    &&
                        (Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::AT::END::COL == true)                   &&
                        (Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::END == false),
                        const uint
                >::type GET_ROW();

        template<class T_CHECK = Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>>
        static typename std::enable_if
                <
                        std::is_same<T_CHECK, typename Matrix<T_nROWS, T_nCOLS, T_TYPE>::template NEXT<T_iROWS, T_iCOLS>>::value  &&
                        (Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::AT::END::COL == true)
                                (Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::END == true),
                        const uint
                >::type GET_ROW();


        template<class T_CHECK = Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>>
        static typename std::enable_if
                <
                        std::is_same<T_CHECK, typename Matrix<T_nROWS, T_nCOLS, T_TYPE>::template NEXT<T_iROWS, T_iCOLS>>::value    &&
                        (Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::AT::END::COL == false)                  &&
                        (Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::AT::END == false),
                        const uint
                >::type GET_COL();

        template<class T_CHECK = Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>>
        static typename std::enable_if
                <
                        std::is_same<T_CHECK, typename Matrix<T_nROWS, T_nCOLS, T_TYPE>::template NEXT<T_iROWS, T_iCOLS>>::value    &&
                        (Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::AT::END::COL == true)                   &&
                        (Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::END == false),
                        const uint
                >::type GET_COL();

        template<class T_CHECK = Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>>
        static typename std::enable_if
                <
                        std::is_same<T_CHECK, typename Matrix<T_nROWS, T_nCOLS, T_TYPE>::template NEXT<T_iROWS, T_iCOLS>>::value    &&
                        (Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::AT::END::COL == true)                   &&
                        (Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::END == true),
                        const uint
                >::type GET_COL();

    /*

        template<class T_CHECK = Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>>
        static typename std::enable_if
        <
                std::is_same<T_CHECK, typename Matrix<T_nROWS, T_nCOLS, T_TYPE>::template NEXT<T_iROWS, T_iCOLS>>::value,
                const uint
        >::type ROW;

        template<class T_CHECK = Matrix<T_nROWS, T_nCOLS, T_TYPE>::NEXT<T_iROWS, T_iCOLS>>
        static typename std::enable_if
        <
                std::is_same<T_CHECK, typename Matrix<T_nROWS, T_nCOLS, T_TYPE>::template NEXT<T_iROWS, T_iCOLS>>::value,
                const uint
        >::type COL;
    */

    };

    constexpr uint getRow(const uint& index)const;
    constexpr uint getRow(const uint& iRow, const uint& iCol)const;

    constexpr uint getCol(const uint& index)const;
    constexpr uint getCol(const uint& iRow, const uint& iCol)const;

    const T_TYPE& get(const uint& index)const;
    const T_TYPE& get(const uint& iRow, const uint& iCol)const;

    void set(const uint& index, const T_TYPE& set);
    void set(const uint& iRow, const uint& iCol, const T_TYPE& set);

private:
    T_TYPE m_data[T_nROWS][T_nCOLS];


    // [x,x] [0,1] [0,2]
    // [1,0] [x,x] [1,2]
    // [2,0] [2,1] [x,x]
    template<class T_CHECK = Matrix<T_nROWS, T_nCOLS, T_TYPE>, uint T_iROWS, uint T_iCOLS>
    typename std::enable_if
    <
            std::is_same<T_CHECK, Matrix<T_nROWS, T_nCOLS, T_TYPE>>::value                      &&
            Matrix<T_nROWS, T_nCOLS, T_TYPE>::IS::SQUARE                                        &&
            T_iROWS != T_iCOLS                                                                  &&
            Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::AT::END == false,
            void
    >::type setIdentity();

    // [0,0] [x,x] [x,x]
    // [x,x] [0,0] [x,x]
    // [x,x] [x,x] [x,x]
    template<class T_CHECK = Matrix<T_nROWS, T_nCOLS, T_TYPE>, uint T_iROWS, uint T_iCOLS>
    typename std::enable_if
    <
            std::is_same<T_CHECK, Matrix<T_nROWS, T_nCOLS, T_TYPE>>::value          &&
            Matrix<T_nROWS, T_nCOLS, T_TYPE>::IS::SQUARE                            &&
            T_iROWS == T_iCOLS                                                      &&
            Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::AT::END == false,
            void
    >::type setIdentity();

    // [x,x] [x,x] [x,x]
    // [x,x] [x,x] [x,x]
    // [x,x] [x,x] [2,2]
    template<class T_CHECK = Matrix<T_nROWS, T_nCOLS, T_TYPE>, uint T_iROWS, uint T_iCOLS>
    typename std::enable_if
    <
            std::is_same<T_CHECK, Matrix<T_nROWS, T_nCOLS, T_TYPE>>::value          &&
            Matrix<T_nROWS, T_nCOLS, T_TYPE>::IS::SQUARE                            &&
            T_iROWS == T_iCOLS                                                      &&
            Matrix<T_nROWS, T_nCOLS, T_TYPE>::template LOOP<T_iROWS, T_iCOLS>::AT::END == true,
            void
    >::type setIdentity();


public:

    template<class T_CHECK = Matrix<T_nROWS, T_nCOLS, T_TYPE>>
    typename std::enable_if
    <
            std::is_same<T_CHECK, Matrix<T_nROWS, T_nCOLS, T_TYPE>>::value &&
            Matrix<T_nROWS, T_nCOLS, T_TYPE>::IS::SQUARE,
            void
    >::type
    setIdentity();

    template<class T_CHECK = Matrix<T_nROWS, T_nCOLS, T_TYPE>>
    static typename std::enable_if
    <
            std::is_same<T_CHECK, Matrix<T_nROWS, T_nCOLS, T_TYPE>>::value &&
            Matrix<T_nROWS, T_nCOLS, T_TYPE>::IS::SQUARE,
            Matrix<T_nROWS, T_nCOLS, T_TYPE>
    >::type
    Identity();

    Matrix<T_nROWS, T_nCOLS, T_TYPE>();
    // ~Matrix<T_nROWS, T_nCOLS, T_TYPE>();
    // Matrix<T_nROWS, T_nCOLS, T_TYPE>(const Matrix<T_nROWS, T_nCOLS, T_TYPE> &copy);
    // Matrix<T_nROWS, T_nCOLS, T_TYPE>(Matrix<T_nROWS, T_nCOLS, T_TYPE> &&move);
    // Matrix<T_nROWS, T_nCOLS, T_TYPE> &operator=(const Matrix<T_nROWS, T_nCOLS, T_TYPE> &put_assign);
    // Matrix<T_nROWS, T_nCOLS, T_TYPE> &operator=(Matrix<T_nROWS, T_nCOLS, T_TYPE> &&move_assign);

    T_TYPE *operator[](const unsigned &index);

    /*Vector
    template<class T_CHECK = Matrix<T_nROWS, T_nCOLS, T_TYPE>>
    typename std::enable_if<
            std::is_same<T_CHECK, Matrix<T_nROWS, T_nCOLS, T_TYPE>>::value &&
            T_nROWS == T_nCOLS, const Matrix<T_nROWS, T_nCOLS, T_TYPE>&>::type
    SetIdentity();*/


};


typedef Matrix<2u, 1u, real> vec2;
typedef Matrix<3u, 1u, real> vec3;
typedef Matrix<4u, 1u, real> vec4;
typedef Matrix<2u, 2u, real> mat2;
typedef Matrix<3u, 3u, real> mat3;
typedef Matrix<4u, 4u, real> mat4;


#include "matrix.cpp"
#include "matrix_multiplication.cpp"
#include "matrix_identity.h"


#endif //XMATH_MATRIX_H
