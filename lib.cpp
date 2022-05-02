#include "lib.h"
bool caratteri(int n){
    bool x;
    if (((65 <= n)&&(n <= 90))||((97 <= n)&&(n <= 122))){
        x=true;
    } else {
        x=false;
    }
    return x;
}
