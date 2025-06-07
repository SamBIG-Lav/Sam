#include <iostream>
#include <cmath>
using namespace std;

class MathFunction {
    double x, y;
    
public:
    void inputX() {
        cout << "Введите x: ";
        cin >> x;
    }
    
    void calculateY() {
        if (x <= 0) {
            cout << "False" << endl;
            return;
        }
        
        double cos_sqrt_x = cos(sqrt(x));
        double cos6 = pow(cos_sqrt_x, 6);
        double cos2 = pow(cos_sqrt_x, 2);
        double fraction = cos6 / (cos2 + 5);
        double arccos3 = pow(acos(fraction), 3);
        double lg_2x = log10(2 * x);
        double log3_val = log(pow(3, lg_2x) + 2) / log(3);
        
        y = sqrt(arccos3 + log3_val);
        
        cout << "y(" << x << ") = " << y << endl;
        cout << (y >= 0 && y <= 5 ? "True" : "False") << endl;
    }
};

int main() {
    MathFunction func;
    func.inputX();
    func.calculateY();
    return 0;
}
