//
// Created by carlin on 3/11/16.
//

#include <gtest/gtest.h>
#include "linear_algebra/matrix.h"

TEST(Linear_Algebra, Matrix_1x1_NUMBER_ROWS){
    ASSERT_EQ((Matrix<1u,1u,real>::NUMBER::ROWS), 1u);
}

TEST(Linear_Algebra, Matrix_1x2_NUMBER_ROWS){
    ASSERT_EQ((Matrix<1u,2u,real>::NUMBER::ROWS), 1u);
}

TEST(Linear_Algebra, Matrix_1x3_NUMBER_ROWS){
    ASSERT_EQ((Matrix<1u,3u,real>::NUMBER::ROWS), 1u);
}

TEST(Linear_Algebra, Matrix_2x1_NUMBER_ROWS){
    ASSERT_EQ((Matrix<2u,1u,real>::NUMBER::ROWS), 2u);
}

TEST(Linear_Algebra, Matrix_2x2_NUMBER_ROWS){
    ASSERT_EQ((Matrix<2u,2u,real>::NUMBER::ROWS), 2u);
}

TEST(Linear_Algebra, Matrix_2x3_NUMBER_ROWS){
    ASSERT_EQ((Matrix<2u,3u,real>::NUMBER::ROWS), 2u);
}

TEST(Linear_Algebra, Matrix_3x1_NUMBER_ROWS){
    ASSERT_EQ((Matrix<3u,1u,real>::NUMBER::ROWS), 3u);
}

TEST(Linear_Algebra, Matrix_3x2_NUMBER_ROWS){
    ASSERT_EQ((Matrix<3u,2u,real>::NUMBER::ROWS), 3u);
}

TEST(Linear_Algebra, Matrix_3x3_NUMBER_ROWS){
    ASSERT_EQ((Matrix<3u,3u,real>::NUMBER::ROWS), 3u);
}

TEST(Linear_Algebra, Matrix_1x1_NUMBER_COLS){
    ASSERT_EQ((Matrix<1u,1u,real>::NUMBER::NUMBER::COLS), 1u);
}

TEST(Linear_Algebra, Matrix_1x2_NUMBER_COLS){
    ASSERT_EQ((Matrix<1u,2u,real>::NUMBER::COLS), 2u);
}

TEST(Linear_Algebra, Matrix_1x3_NUMBER_COLS){
    ASSERT_EQ((Matrix<1u,3u,real>::NUMBER::COLS), 3u);
}

TEST(Linear_Algebra, Matrix_2x1_NUMBER_COLS){
    ASSERT_EQ((Matrix<2u,1u,real>::NUMBER::COLS), 1u);
}

TEST(Linear_Algebra, Matrix_2x2_NUMBER_COLS){
    ASSERT_EQ((Matrix<2u,2u,real>::NUMBER::COLS), 2u);
}

TEST(Linear_Algebra, Matrix_2x3_NUMBER_COLS){
    ASSERT_EQ((Matrix<2u,3u,real>::NUMBER::COLS), 3u);
}

TEST(Linear_Algebra, Matrix_3x1_NUMBER_COLS){
    ASSERT_EQ((Matrix<3u,1u,real>::NUMBER::COLS), 1u);
}

TEST(Linear_Algebra, Matrix_3x2_NUMBER_COLS){
    ASSERT_EQ((Matrix<3u,2u,real>::NUMBER::COLS), 2u);
}

TEST(Linear_Algebra, Matrix_3x3_NUMBER_COLS){
    ASSERT_EQ((Matrix<3u,3u,real>::NUMBER::COLS), 3u);
}

TEST(Linear_Algebra, Matrix_1x1_NUMBER_CELLS){
    ASSERT_EQ((Matrix<1u,1u,real>::NUMBER::CELLS), 1u);
}

TEST(Linear_Algebra, Matrix_1x2_NUMBER_CELLS){
    ASSERT_EQ((Matrix<1u,2u,real>::NUMBER::CELLS), 2u);
}

TEST(Linear_Algebra, Matrix_1x3_NUMBER_CELLS){
    ASSERT_EQ((Matrix<1u,3u,real>::NUMBER::CELLS), 3u);
}

TEST(Linear_Algebra, Matrix_2x1_NUMBER_CELLS){
    ASSERT_EQ((Matrix<2u,1u,real>::NUMBER::CELLS), 2u);
}

TEST(Linear_Algebra, Matrix_2x2_NUMBER_CELLS){
    ASSERT_EQ((Matrix<2u,2u,real>::NUMBER::CELLS), 4u);
}

TEST(Linear_Algebra, Matrix_2x3_NUMBER_CELLS){
    ASSERT_EQ((Matrix<2u,3u,real>::NUMBER::CELLS), 6u);
}

TEST(Linear_Algebra, Matrix_3x1_NUMBER_CELLS){
    ASSERT_EQ((Matrix<3u,1u,real>::NUMBER::CELLS), 3u);
}

TEST(Linear_Algebra, Matrix_3x2_NUMBER_CELLS){
    ASSERT_EQ((Matrix<3u,2u,real>::NUMBER::CELLS), 6u);
}

TEST(Linear_Algebra, Matrix_3x3_NUMBER_CELLS){
    ASSERT_EQ((Matrix<3u,3u,real>::NUMBER::CELLS), 9u);
}


TEST(Linear_Algebra, Matrix_1x1_IS_VECTOR){
    ASSERT_TRUE((Matrix<1u,1u,real>::IS::VECTOR));
}

TEST(Linear_Algebra, Matrix_1x2_IS_VECTOR){
    ASSERT_FALSE((Matrix<1u,2u,real>::IS::VECTOR));
}

TEST(Linear_Algebra, Matrix_1x3_IS_VECTOR){
    ASSERT_FALSE((Matrix<1u,3u,real>::IS::VECTOR));
}

TEST(Linear_Algebra, Matrix_2x1_IS_VECTOR){
    ASSERT_TRUE((Matrix<2u,1u,real>::IS::VECTOR));
}

TEST(Linear_Algebra, Matrix_2x2_IS_VECTOR){
    ASSERT_FALSE((Matrix<2u,2u,real>::IS::VECTOR));
}

TEST(Linear_Algebra, Matrix_2x3_IS_VECTOR){
    ASSERT_FALSE((Matrix<2u,3u,real>::IS::VECTOR));
}

TEST(Linear_Algebra, Matrix_3x1_IS_VECTOR){
    ASSERT_TRUE((Matrix<3u,1u,real>::IS::VECTOR));
}

TEST(Linear_Algebra, Matrix_3x2_IS_VECTOR){
    ASSERT_FALSE((Matrix<3u,2u,real>::IS::VECTOR));
}

TEST(Linear_Algebra, Matrix_3x3_IS_VECTOR){
    ASSERT_FALSE((Matrix<3u,3u,real>::IS::VECTOR));
}


TEST(Linear_Algebra, Matrix_1x1_IS_SQUARE){
    ASSERT_TRUE((Matrix<1u,1u,real>::IS::SQUARE));
}

TEST(Linear_Algebra, Matrix_1x2_IS_SQUARE){
    ASSERT_FALSE((Matrix<1u,2u,real>::IS::SQUARE));
}

TEST(Linear_Algebra, Matrix_1x3_IS_SQUARE){
    ASSERT_FALSE((Matrix<1u,3u,real>::IS::SQUARE));
}

TEST(Linear_Algebra, Matrix_2x1_IS_SQUARE){
    ASSERT_FALSE((Matrix<2u,1u,real>::IS::SQUARE));
}

TEST(Linear_Algebra, Matrix_2x2_IS_SQUARE){
    ASSERT_TRUE((Matrix<2u,2u,real>::IS::SQUARE));
}

TEST(Linear_Algebra, Matrix_2x3_IS_SQUARE){
    ASSERT_FALSE((Matrix<2u,3u,real>::IS::SQUARE));
}

TEST(Linear_Algebra, Matrix_3x1_IS_SQUARE){
    ASSERT_FALSE((Matrix<3u,1u,real>::IS::SQUARE));
}

TEST(Linear_Algebra, Matrix_3x2_IS_SQUARE){
    ASSERT_FALSE((Matrix<3u,2u,real>::IS::SQUARE));
}

TEST(Linear_Algebra, Matrix_3x3_IS_SQUARE){
    ASSERT_TRUE((Matrix<3u,3u,real>::IS::SQUARE));
}