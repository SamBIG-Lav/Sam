#include <iostream>
#include <cmath>

class FunctionChecker {
private:
    
    double computeY(double x) {
        double sqrt_abs_x = sqrt(fabs(x));
        double cos_sqrt_x = cos(sqrt_abs_x);
        double cos6 = pow(cos_sqrt_x, 6);
        double cos2 = pow(cos_sqrt_x, 2);
        double fraction = cos6 / (cos2 + 5);
        double arccos3 = pow(acos(fraction), 3);
        double lg_2x = log10(2 * x);
        double inner_log = pow(3, lg_2x) + 2;
        double log3_val = log(inner_log) / log(3);
        return sqrt(arccos3 + log3_val);
    }

public:
    
    double calculateY(double x) {
        return computeY(x);
    }

    
    bool isInRegionD(double x, double y) {
        
        if (x <= 0) {
            return false;
        }

        
        double computed_y = computeY(x);
        const double EPSILON = 1e-6; 
        return fabs(y - computed_y) < EPSILON;
    }
};

int main() {
    double x, y;

    
    FunctionChecker checker;

   
    std::cout << "Введите x: ";
    std::cin >> x;

 
    y = checker.calculateY(x);
    std::cout << y << std::endl;

    std::cout << "Введите y: ";
    std::cin >> y;

    
    if (checker.isInRegionD(x, y)) {
        std::cout << "true" << std::endl;
    }
    else {
        std::cout << "false" << std::endl;
    }

    return 0;
}