//
//  main.cpp
//  PowerFullGirl
//
//  Created by adeeb mohammed on 21/04/20.
//  Copyright © 2020 adeeb mohammed. All rights reserved.
//

#include <iostream>
#include <vector>

long int calculateNoofPowerFulGirls(std::vector<long int> ingReqQty,
                                    std::vector<long int> ingAvlQty){
    
    long int noOfGirls = LONG_MAX;
    for(int i = 0; i < ingReqQty.size(); ++i){
        long int currentQty = 0;
        if(ingReqQty.at(i) > 0){
            currentQty = ingAvlQty.at(i) / ingReqQty.at(i);
            if (currentQty < noOfGirls) {
                noOfGirls = currentQty;
            }
        }
    }
    return noOfGirls;
}

int main(int argc, const char * argv[]) {
    // the ingredients needed to create a powerfull girl
    long int noOfIngredients = 0;
    long int inqQty = 0;
    std::cin >> noOfIngredients;
    
    // input ingredients quantity
    std::vector<long int> ingReqQty(noOfIngredients);
    // available quantity
    std::vector<long int> ingAvlQty(noOfIngredients);
    
    for (int i = 0; i < noOfIngredients; i++) {
        std::cin>> inqQty;
        ingReqQty.push_back(inqQty);
    }
    
    for (int i = 0; i < noOfIngredients; i++) {
        std::cin>> inqQty;
        ingAvlQty.push_back(inqQty);
    }
    
    std::cout << calculateNoofPowerFulGirls(ingReqQty, ingAvlQty);
    
    return 0;
}
