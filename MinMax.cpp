//
// Created by User on 11/1/2021.
//

#include "MinMax.h"
template <class ItemType>
MinMax<ItemType>::MinMax() {
    maxElement=-1;
    minElement=-1;

}
template <class ItemType>
void MinMax<ItemType>::initializeMinMax(ItemType* numbers, int size) {
    numbers=new ItemType[size];
    maxElement=numbers[0];
    minElement=numbers[0];
    for (int i = 0; i < size; ++i) {
        if (numbers[i]<minElement){
            minElement=numbers[i];
        }
        if (numbers[i]>maxElement){
            maxElement=numbers[i];
        }
    }

}
template <class ItemType>
ItemType MinMax<ItemType>::getMax(){
    return maxElement;
}
template <class ItemType>
ItemType MinMax<ItemType>::getMin(){
    return minElement;
}