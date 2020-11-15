//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_UNIVERSITY_H
#define LAB02_OOP_UNIVERSITY_H

#include <vector>
#include "Professor.h"
#include "Administrative.h"

template<class T>
class University {
private:
    std::vector<T> genericList;

public:
    University(const std::vector<T> &genericList) : genericList(genericList) {}

    const std::vector<T> &getGenericList() const {
        return genericList;
    }

    void setGenericList(const std::vector<T> &genericList) {
        University::genericList = genericList;
    }


    T push_back(T genericElement){
        genericList.push_back(genericElement);
    }

    
};


#endif //LAB02_OOP_UNIVERSITY_H
