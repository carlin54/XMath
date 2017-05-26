//
// Created by carlin on 3/10/16.
//

#include <gtest/gtest.h>
#include "linear_algebra/matrix_identity.h"

#include "linear_algebra/misc/matrix_ostream.h"

TEST(Linear_Algebra, Matrix_1x1_Identity_2x2){
    Matrix<2u,2u,real> mat2x2;
    std::cout << mat2x2.get(0, 0) << "," << mat2x2.get(0,1) << std::endl;
    std::cout << mat2x2.get(1, 0) << "," << mat2x2.get(1,1) << std::endl;

    mat2x2.setIdentity();
    //ASSERT_EQ(mat2x2.get(0,0), 1u);
    //ASSERT_EQ(mat2x2.get(1,0), 0u);
    //ASSERT_EQ(mat2x2.get(0,1), 0u);
    //ASSERT_EQ(mat2x2.get(1,1), 1u);
    std::cout << std::endl;
    std::cout << mat2x2.get(0, 0) << "," << mat2x2.get(0,1) << std::endl;
    std::cout << mat2x2.get(1, 0) << "," << mat2x2.get(1,1) << std::endl;


}