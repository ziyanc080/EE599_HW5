#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file

TEST(Q1_Student, getParentIndex_1) {
    
    vector<int> input = {10, 8, 9, 6, 3, 7, 4};
    
    MaxHeap solution;
    
    solution.push(10);
    solution.push(8);
    solution.push(9);
    solution.push(6);
    solution.push(3);
    solution.push(7);
    solution.push(4);
    
    int Expected = 2;
    int Actual = solution.getParentIndex(5);
    
    EXPECT_EQ(Expected, Actual);
}

TEST(Q1_Student, getParentIndex_2) {
    
    vector<int> input = {10, 8, 9, 6, 3, 7, 4};
    
    MaxHeap solution;
    
    solution.push(10);
    solution.push(8);
    solution.push(9);
    solution.push(6);
    solution.push(3);
    solution.push(7);
    solution.push(4);
    
    int Expected = 0;
    int Actual = solution.getParentIndex(2);
    
    EXPECT_EQ(Expected, Actual);
}

TEST(Q1_Student, getLeftIndex_1) {
    
    vector<int> input = {10, 8, 9, 6, 3, 7, 4};
    
    MaxHeap solution;
    
    solution.push(10);
    solution.push(8);
    solution.push(9);
    solution.push(6);
    solution.push(3);
    solution.push(7);
    solution.push(4);
    
    int Expected = 3;
    int Actual = solution.getLeftIndex(1);
    
    EXPECT_EQ(Expected, Actual);
}

TEST(Q1_Student, getRightIndex_1) {
    
    vector<int> input = {10, 8, 9, 6, 3, 7, 4};
    
    MaxHeap solution;
    
    solution.push(10);
    solution.push(8);
    solution.push(9);
    solution.push(6);
    solution.push(3);
    solution.push(7);
    solution.push(4);
    
    int Expected = 4;
    int Actual = solution.getRightIndex(1);
    
    EXPECT_EQ(Expected, Actual);
}

TEST(Q1_Student, getLargestChildIndex_1) {
    
    vector<int> input = {10, 8, 9, 6, 3, 7, 4};
    
    MaxHeap solution;
    
    solution.push(10);
    solution.push(8);
    solution.push(9);
    solution.push(6);
    solution.push(3);
    solution.push(7);
    solution.push(4);
    
    int Expected = 5;
    int Actual = solution.getLargestChildIndex(2);
    
    EXPECT_EQ(Expected, Actual);
}

TEST(Q1_Student, getLargestChildIndex_2) {
    
    vector<int> input = {10, 8, 9, 6, 3, 7, 4};
    
    MaxHeap solution;
    
    solution.push(10);
    solution.push(8);
    solution.push(9);
    solution.push(6);
    solution.push(3);
    solution.push(4);
    solution.push(7);
    
    int Expected = 6;
    int Actual = solution.getLargestChildIndex(2);
    
    EXPECT_EQ(Expected, Actual);
}


TEST(Q1_Student, getLeft) {
    
    vector<int> input = {10, 8, 9, 6, 3, 7, 4};
    
    MaxHeap solution;
    
    solution.push(10);
    
    solution.push(8);
    solution.push(9);
    solution.push(6);
    solution.push(3);
    solution.push(7);
    solution.push(4);
    
    int Expected = 6;
    int Actual = solution.getLeft(1);
    
    EXPECT_EQ(Expected, Actual);
}

TEST(Q1_Student, getRight) {
    
    vector<int> input = {10, 8, 9, 6, 3, 7, 4};
    
    MaxHeap solution;
    
    solution.push(10);
    solution.push(8);
    solution.push(9);
    solution.push(6);
    solution.push(3);
    solution.push(7);
    solution.push(4);
    
    int Expected = 9;
    int Actual = solution.getRight(0);
    
    EXPECT_EQ(Expected, Actual);
}

TEST(Q1_Student, getParent_1) {
    
    vector<int> input = {10, 8, 9, 6, 3, 7, 4};
    
    MaxHeap solution;
    
    solution.push(10);
    solution.push(8);
    solution.push(9);
    solution.push(6);
    solution.push(3);
    solution.push(7);
    solution.push(4);
    
    int Expected = 8;
    int Actual = solution.getParent(3);
    
    EXPECT_EQ(Expected, Actual);
}

TEST(Q1_Student, getParent_2) {
    
    vector<int> input = {10, 8, 9, 6, 3, 7, 4};
    
    MaxHeap solution;
    
    solution.push(10);
    solution.push(8);
    solution.push(9);
    solution.push(6);
    solution.push(3);
    solution.push(7);
    solution.push(4);
    
    int Expected = 8;
    int Actual = solution.getParent(4);
    
    EXPECT_EQ(Expected, Actual);
}

TEST(Q1_Student, top_1) {
    
    vector<int> input = {10, 8, 9, 6, 3, 7, 4};
    
    MaxHeap solution;
    
    solution.push(10);
    solution.push(8);
    solution.push(9);
    solution.push(6);
    solution.push(3);
    solution.push(7);
    solution.push(4);
    
    int Expected = 10;
    int Actual = solution.top();
    
    EXPECT_EQ(Expected, Actual);
}

TEST(Q1_Student, top_2) {
    
    vector<int> input = {10, 8, 9, 6, 3, 7, 4};
    
    MaxHeap solution;
    
    solution.push(4);
    solution.push(8);
    solution.push(9);
    solution.push(15);
    solution.push(3);
    solution.push(10);
    solution.push(18);
    
    int Expected = 18;
    int Actual = solution.top();
    
    EXPECT_EQ(Expected, Actual);
}

TEST(Q1_Student, push_1) {
    
    vector<int> input = {10, 8, 9, 6, 3, 7, 4};
    
    MaxHeap solution;
    
    solution.push(10);
    solution.push(8);
    solution.push(9);
    solution.push(6);
    solution.push(3);
    solution.push(7);
    solution.push(4);
    
    solution.push(12);
    
    vector<int> Expected = {12, 10, 9, 8, 3, 7, 4, 6};

    EXPECT_EQ(Expected, solution.data_);
}

TEST(Q1_Student, push_2) {
    
    vector<int> input = {10, 8, 9, 6, 3, 7, 4};
    
    MaxHeap solution;
    
    solution.push(10);
    solution.push(8);
    solution.push(9);
    solution.push(6);
    solution.push(3);
    solution.push(7);
    solution.push(14);
    
    vector<int> Expected = {14, 8, 10, 6, 3, 7, 9};

    EXPECT_EQ(Expected, solution.data_);
}

TEST(Q1_Student, pop) {
    
    vector<int> input = {10, 8, 9, 6, 3, 7, 4};
    
    MaxHeap solution;
    
    solution.push(10);
    solution.push(8);
    solution.push(9);
    solution.push(6);
    solution.push(3);
    solution.push(7);
    solution.push(4);
    
    vector<int> Expected = {9, 8, 7, 6, 3, 4};
    solution.pop();
    
    EXPECT_EQ(Expected, solution.data_);
}

TEST(Q1_Student, TrickleUp) {
    
    vector<int> input = {10, 8, 9, 6, 3, 7, 4};
    
    MaxHeap solution;
    
    solution.push(10);
    solution.push(8);
    solution.push(9);
    solution.push(6);
    solution.push(3);
    solution.push(7);
    solution.push(4);
    
    vector<int> Expected = {10, 8, 9, 6, 3, 7, 4};
    solution.TrickleUp(6);
    
    EXPECT_EQ(Expected, solution.data_);
}

TEST(Q1_Student, TrickleDown) {
    
    vector<int> input = {10, 8, 9, 6, 3, 7, 4};
    
    MaxHeap solution;
    
    solution.push(10);
    solution.push(8);
    solution.push(9);
    solution.push(6);
    solution.push(3);
    solution.push(7);
    solution.push(4);
    
    vector<int> Expected = {10, 8, 9, 6, 3, 7, 4};
    solution.TrickleDown(1);
    
    EXPECT_EQ(Expected, solution.data_);
}

