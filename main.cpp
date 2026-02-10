#include <iostream>
#include <cmath>
#define NUM_STEPS 1e7

using namespace std;

#ifdef USE_FLOAT
    using value_type = float;
#else
    using value_type = double;
#endif

template <typename T> T add_sin(){
    T sum = 0;
    for (int i = 0; i < NUM_STEPS; i++){
        sum += sin(2*M_PI*i/NUM_STEPS);
    }

    return sum;
}

int main(){
    cout << "Sum of sin: " << add_sin<value_type>();
}
