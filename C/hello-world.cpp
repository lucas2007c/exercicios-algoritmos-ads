#include <iostream>
#include <cstdlib> 

int main() {  
    int *ptr;
    while(true)
        ptr = (int*) malloc(sizeof(int)*10000);

    return 0;
}	
