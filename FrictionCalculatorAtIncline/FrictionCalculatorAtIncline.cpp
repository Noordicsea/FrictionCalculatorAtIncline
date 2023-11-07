#include <iostream>
#include <cmath> // For cos() and sin() functions

// Define PI in case it's not included in the compiler
const double PI = 3.14159265358979323846;

// Function to convert degrees to radians
double toRadians(double angleInDegrees) {
    return angleInDegrees * (PI / 180.0);
}

int main() {
    double P, m, a, theta;
    char response;

    // Run the calculations in a loop
    while (true) {
        // Ask the user for input values
        std::cout << "Enter the applied force P (in N): ";
        std::cin >> P;
        std::cout << "Enter the mass of the block m (in kg): ";
        std::cin >> m;
        std::cout << "Enter the acceleration a (in m/s^2): ";
        std::cin >> a;
        std::cout << "Enter the angle of incline theta (in degrees): ";
        std::cin >> theta;

        // Convert theta to radians for the calculations
        double thetaRad = toRadians(theta);

        // Calculate the horizontal component of the applied force
        double Px = P * cos(thetaRad);
        std::cout << "Calculating the horizontal component of the applied force: P * cos(theta)" << std::endl;
        std::cout << "Px = " << P << " * cos(" << theta << ")" << std::endl;
        std::cout << "Px = " << Px << " N" << std::endl;
        std::cout << "Do you understand this step? (Y/N): ";
        std::cin >> response;
        if (response == 'N' || response == 'n') {
            std::cout << "The horizontal component is the force in the direction of the surface. It is calculated using the cosine of the angle of the force." << std::endl;
        }

        // Calculate the vertical component of the applied force
        double Py = P * sin(thetaRad);
        std::cout << "Calculating the vertical component of the applied force: P * sin(theta)" << std::endl;
        std::cout << "Py = " << P << " * sin(" << theta << ")" << std::endl;
        std::cout << "Py = " << Py << " N" << std::endl;
        std::cout << "Do you understand this step? (Y/N): ";
        std::cin >> response;
        if (response == 'N' || response == 'n') {
            std::cout << "The vertical component is the force perpendicular to the surface. It is calculated using the sine of the angle of the force." << std::endl;
        }

        // Calculate the force of friction
        double f = Px - (m * a);
        std::cout << "Calculating the force of friction: Px - (m * a)" << std::endl;
        std::cout << "f = " << Px << " - (" << m << " * " << a << ")" << std::endl;
        std::cout << "f = " << f << " N" << std::endl;
        std::cout << "Do you understand this step? (Y/N): ";
        std::cin >> response;
        if (response == 'N' || response == 'n') {
            std::cout << "The force of friction is the force that resists the motion of the block. It is the difference between the horizontal component of the applied force and the product of mass and acceleration." << std::endl;
        }

        // Ask the user if they want to perform another calculation
        std::cout << "Would you like to perform another calculation? (Y/N): ";
        std::cin >> response;
        if (response == 'N' || response == 'n') {
            break;
        }
    }

    return 0;
}
