#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

/**
 * @brief 3-dimensional vector
 * 
 */
class Vector3D {
public:
    /**
     * @brief x component
     * 
     */
    double x;
    /**
     * @brief y component
     * 
     */
    double y;
    /**
     * @brief z component
     * 
     */
    double z;

    /**
     * @brief Print representation of this vector to stdout
     * 
     */
    void print();

    /**
     * @brief Add otherVector to this instance
     * 
     * @param otherVector The other vector
     * @return Sum of this and otherVector
     * 
     */
    Vector3D add(Vector3D otherVector);

    /**
     * @brief Get length of this instance
     * 
     * @return Length of instance
     * 
     */
    double getLength();

    /**
     * @brief Get angle between otherVector an this instance in degree.
     * 
     * @param otherVector The other vector
     * @return Angle in degree
     * 
     */
    double getAngleInDegree(Vector3D otherVector);

    /**
     * @brief Get dot product between otherVector an this instance.
     * 
     * @param otherVector The other vector
     * @return Dot procuct
     * 
     */
    double getDotProduct(Vector3D otherVector);
};


// Implementation of methods

void Vector3D::print() {
    std::cout << "(" << x << "/" << y << "/" << z << ")";
}

Vector3D Vector3D::add(Vector3D otherVector) {
    Vector3D result;
    result.x = x + otherVector.x;
    result.y = y + otherVector.y;
    result.z = z + otherVector.z;
    return result;
}

double Vector3D::getLength() {
    return sqrt(x * x + y * y + z * z);
}

double Vector3D::getAngleInDegree(Vector3D otherVector) {
    return acos(getDotProduct(otherVector) / (getLength()*otherVector.getLength())) * 180.0 / M_PI;
}

double Vector3D::getDotProduct(Vector3D otherVector) {
    return (x * otherVector.x + y * otherVector.y + z * otherVector.z);
}


// Unit test

int main() {
    Vector3D v1;
    v1.x = 1.0;
    v1.y = 2.0;
    v1.z = 3.0;

    Vector3D v2;
    v2.x = 2.0;
    v2.y = 3.0;
    v2.z = 4.0;

    std::cout << "v1: ";
    v1.print();
    std::cout << "; v2: ";
    v2.print();
    std::cout << std::endl;

    std::cout << "v1 + v2 = ";
    v1.add(v2).print();
    std::cout << std::endl;

    std::cout << "v1 * v2 = " << v1.getDotProduct(v2) << std::endl;  

    std::cout << "|v1| = " << v1.getLength() << std::endl;
    std::cout << "|v2| = " << v2.getLength() << std::endl;

    std::cout << "angle between v1 and v2 = " << v1.getAngleInDegree(v2) << std::endl;

    return 0;
}