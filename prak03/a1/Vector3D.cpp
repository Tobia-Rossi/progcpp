//-------------------------------------------------------
// Info
//-------------------------------------------------------

// Project Name:     Prakt03/a1
// Project Code:     progpp03a1

// File Name:        Vector3D.h
// File Description: Implementation of the class Vector3D
// File Cod e:       progpp03a1vector3dcpp

// Author Name:      Tobia Rossi
// Author Code:      tuoyo

//-------------------------------------------------------
// Code Begin
//-------------------------------------------------------

// Definitions
#define _USE_MATH_DEFINES

// Application includes
#include <iostream>
#include <cmath>
#include "Vector3D.h"

// Implementation of methods
void Vector3D::print()
{
	std::cout << "(" << x << "/" << y << "/" << z << ")";
}

Vector3D Vector3D::add(Vector3D otherVector)
{
	Vector3D result;
	result.x = x + otherVector.x;
	result.y = y + otherVector.y;
	result.z = z + otherVector.z;
	return result;
}

double Vector3D::getLength()
{
	return sqrt(x * x + y * y + z * z);
}

double Vector3D::getAngleInDegree(Vector3D otherVector)
{
	return acos(getDotProduct(otherVector) / (getLength() * otherVector.getLength())) * 180.0 / M_PI;
}

double Vector3D::getDotProduct(Vector3D otherVector)
{
	return (x * otherVector.x + y * otherVector.y + z * otherVector.z);
}

//-------------------------------------------------------
// Code End
//-------------------------------------------------------