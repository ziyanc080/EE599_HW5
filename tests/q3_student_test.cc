#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q3_Student, test_1) {
    
    vector<vector<int>> input = { {5, 4}, {3, 2} };
    
    int k = 3;
    
    CPPLib s ;
    
    int Actual = s.findKthSmallest(input, k);

    int Expected = 4;

    EXPECT_EQ(Expected, Actual);
}

TEST(Q3_Student, test_2) {
    
    vector<vector<int>> input = {};
    
    int k = 3;
    
    CPPLib s ;
    
    int Actual = s.findKthSmallest(input, k);

    int Expected = 0;

    EXPECT_EQ(Expected, Actual);
}

TEST(Q3_Student, test_3) {
    
    vector<vector<int>> input = { {5, 4}, {3, 2} };
    
    int k = 0;
    
    CPPLib s ;
    
    int Actual = s.findKthSmallest(input, k);

    int Expected = -5;

    EXPECT_EQ(Expected, Actual);
}

TEST(Q3_Student, test_4) {
    
    vector<vector<int>> input = { {6, 3}, {2, 9} };
    
    int k = 1;
    
    CPPLib s ;
    
    int Actual = s.findKthSmallest(input, k);

    int Expected = 2;

    EXPECT_EQ(Expected, Actual);
}
