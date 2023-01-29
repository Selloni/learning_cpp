#include <iostream>
#include <cmath>

int main () {
    double res = 0.;
    int n = 0;
    std::cin>>n;
    for(int  i = 1; i <= n; i++) {
        res += pow((-1),i+1)/i;
    }
    std::cout<< res;
    return 0;
}