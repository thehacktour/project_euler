#include <stdio.h>
#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int result;
    result = 0;

    for (int i=0; i<1000; i++){
        if ((i%3 == 0) || (i%5==0)){
            result += i;
        }
    }

    cout << result << endl;

}