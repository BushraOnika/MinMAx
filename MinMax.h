//
// Created by User on 11/1/2021.
//

#ifndef MINMAX_MINMAX_H
#define MINMAX_MINMAX_H

template <class ItemType>
class MinMax {
private:
    ItemType maxElement;
    ItemType minElement;
public:
    MinMax();
    void initializeMinMax(ItemType*,int);
    ItemType getMax();
    ItemType getMin();
};


#endif //MINMAX_MINMAX_H
