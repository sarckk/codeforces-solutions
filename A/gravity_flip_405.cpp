#include <iostream>

int main(){
    int ncols;
    std::cin >> ncols;
    int* cols {new int[ncols]{}};
    for(int i = 0; i < ncols; i++) {
        std::cin >> cols[i];
    }

    // now do gravity switch
    for(int i = ncols - 1; i > 0; i--) {
        if(ncols[i] < ncols[i-1]) {
            // transfer
        }
    }
}
