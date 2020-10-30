#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q2_Student, test_1) {
    
    vector<int> input = {10, 8, 9, 6, 3, 7, 4};
    
    CPPLib s ;
    
    s.heapSort(input);

    vector<int> Expected = {3, 4, 6, 7, 8, 9, 10};

    EXPECT_EQ(Expected, input);
}

TEST(Q2_Student, test_2) {
    
    vector<int> input = {5, 8, 2};
    
    CPPLib s ;
    
    s.heapSort(input);

    vector<int> Expected = {2, 5, 8};

    EXPECT_EQ(Expected, input);
}

TEST(Q2_Student, test_3) {
    
    vector<int> input = {};
    
    CPPLib s ;
    
    s.heapSort(input);

    vector<int> Expected = {};

    EXPECT_EQ(Expected, input);
}

TEST(Q2_Student, test_4) {
    
    vector<int> input = {5, 4, 3, 2, 1};
    
    CPPLib s ;
    
    s.heapSort(input);

    vector<int> Expected = {1, 2, 3, 4, 5};

    EXPECT_EQ(Expected, input);
}
