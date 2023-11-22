#include<iostream>
#include<cmath>
using namespace std;
// Function to find the root of f(x) = log(x) - sin(x)
double func(double x) {
    return log(x) - sin(x);
}

// Bisection method
double bisection(double a, double b, double tol) {
    double c = a;
    while ((b - a) >= tol) {
        // Find midpoint
        c = (a + b) / 2;

        // Check if root is found
        if (func(c) == 0.0)
            break;

        // Update the interval based on the root location
        else if (func(c) * func(a) < 0)
            b = c;
        else
            a = c;
    }
    return c;
}

int main() {
    // Initial values for the interval [a, b]
    double a = 1, b = 100;

    // Tolerance (adjust as needed)
    double tolerance = 0.0001;

    // Find and print the root
    double root = bisection(a, b, tolerance);
    cout << "Root of the equation is: " << root << endl;

    return 0;
}
