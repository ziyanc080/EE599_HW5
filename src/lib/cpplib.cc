#include "cpplib.h"
#include "limits"
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

// Question 1

MaxHeap::MaxHeap(){ //default constructor
    data_ = {};
}

int MaxHeap::getParentIndex (int i){
    
    if (i == 0){
        return -1;
    }
    else{
        return (i-1)/2;
    }
    
}

int MaxHeap::getLeftIndex (int i){
    
    if (  (2*i)+1 >= data_.size()  ){
        return -1;
    }
    else {
        return (2*i) + 1;
    }
}

int MaxHeap::getRightIndex (int i) {
    
    if (  (2*i)+2 >= data_.size()  ){
        return -1;
    }
    else {
        return (2*i) + 2;
    }
    
}

int MaxHeap::getLargestChildIndex (int i){
    
    if (  (2*i)+2 >= data_.size()  ){
        
        if (  (2*i)+1 >= data_.size()  ){
            
            return -1;
        }
        else {
            return ((2*i)+1);
        }
    }
    else {
        
        if ( data_[ (2*i)+2 ] < data_[ (2*i)+1 ]){
            return ((2*i)+1);
        }
        else {
            return ((2*i)+2);
        }
            
    }
}

int MaxHeap::getLeft(int i){
   
    if (  (2*i)+1 >= data_.size()  ){
        return -1;
    }
    else {
        return data_[ (2*i) + 1];
    }
    
}

int MaxHeap::getRight(int i){
   
    if (  (2*i)+2 >= data_.size()  ){
        return -1;
    }
    else {
        return data_[ (2*i) + 2];
    }
    
}

int MaxHeap::getParent(int i){
   
    if (i == 0){
        return -1;
    }
    else{
        return data_[ (i-1)/2 ];
    }
    
}

int MaxHeap::top(){
    if (data_.size() == 0) {
        return -1;
    }
    else {
        return data_[0];
    }
}

void MaxHeap::push(int v){
     
    data_.push_back(v);
    int New_Index = data_.size() - 1;
    TrickleUp(New_Index);
    
}

void MaxHeap::pop(){
    
    if (data_.size() != 0){
        
        swap( data_[data_.size()-1], data_[0] );
        data_.pop_back();
        TrickleDown(0);
        
    }
    
}

void MaxHeap::TrickleUp(int i){
    
    while (  (i != 0) && (getParent(i) < data_[i])  ) {
        
        swap( data_[i], data_[getParentIndex(i) ] );
        i = getParentIndex(i);
    }
    
}
// watch twice
void MaxHeap::TrickleDown(int i){
    
   while (  ((2*i)+2 <= data_.size() ) && (data_[getLargestChildIndex(i)] > data_[i])  ) {

       int a = getLargestChildIndex(i);
        swap( data_[i], data_[getLargestChildIndex(i) ] );
       i = a;

    }
    
}

// Question 2
void CPPLib::heapSort(vector<int> &input) {
    
    std::priority_queue<int> PQ_largest;
    
    std::vector<int>::iterator it;
    for (it=input.begin(); it != input.end(); it++){
        PQ_largest.push(*it);
    }
    
    for ( int i = input.size()-1; i >=0; i--){
        
        input[i] = PQ_largest.top();
        PQ_largest.pop();
        
    }

}

// Question 3
int CPPLib::findKthSmallest(const vector<vector<int>> &input, int k) {
    
    
    if (input.size() == 0) {
        return 0;
    }
    
    else {
        
        std::priority_queue<int, vector<int>, greater<int> > LargestPQ;
    
        std::vector<int>::iterator it_inner;
        
        for (int i = 0; i < input.size(); i++){
            
            std::vector<int> vector_temp = input[i];
            
            for (it_inner=vector_temp.begin(); it_inner!=vector_temp.end(); it_inner++){
                
                LargestPQ.push(*it_inner);
                
            }
        }
        int returnvalue = 0;
        
        int UpperRange = 0;
        
        if (k <= 0) {
            
            UpperRange = LargestPQ.size() - 1;
        }
        else {
            UpperRange = k - 1;
        }

        for (int j = 0; j <UpperRange; j++){
        
            LargestPQ.pop();
        }

        if (k <= 0){
            returnvalue = -LargestPQ.top();
        }
        else {

            returnvalue = LargestPQ.top();
            
        }
        return returnvalue;
        
    }
}
