/**********************
* Автор: Дедушев П.А. *
* Вариант: 4          *    
***********************/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    const double sigma = 0.074; 
    const double gamma = 1.0; 
    const double g = 981.0; 
    double U;
    double d = 0.1; 
    
    while (d <= 3.0) {
        U = sqrt((g * d / 2) + (2 * g * sigma) / (gamma * d));
        cout << "d = " << d << ", U = " << U << endl;
        d += 0.1; 
    }
    
    cout << "\n do-while): \n";
    d = 0.1; 
    do {
        U = sqrt((g * d / 2) + (2 * g * sigma) / (gamma * d));
        cout << "d = " << d << " , U = " << U << endl;
        d += 0.1;
    } while (d <= 3.0);
    
    return 0;
}
