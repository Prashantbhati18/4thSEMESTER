// power : a to the power b 
#include <iostream>
using namespace std;

int square(int n) {  
    return n * n; 
}

int power(int a, int b) {
    if (b == 0) {
        return 1; 
    } else if (b % 2 == 0) {  
        int halfPower = power(a, b / 2);  
        return square(halfPower);  
    } else {  
        int halfPower = power(a, b / 2);  
        return a * square(halfPower); 
    }
}

int main() {
    int a = 4, b = 3;
    cout << "Power of " << a << " to the power " << b << " is: " << power(a, b) << endl;
    return 0;   
}
