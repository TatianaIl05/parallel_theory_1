#include <iostream>
#include <cmath>
#include <vector>
#define NUM_STEPS 10000000

using namespace std;

#ifdef USE_FLOAT
    using value_type = float;
#else
    using value_type = double;
#endif

template <typename T> T add_sin(){
    T sum = 0;
    vector<T> array(NUM_STEPS);
    for (int i = 0; i < NUM_STEPS; i++){
        array[i] = sin(2*M_PI*i/NUM_STEPS);
        sum += array[i];
    }

    return sum;
}

int main(){
    cout << "Sum of sin: " << add_sin<value_type>();

    return 0;
}
