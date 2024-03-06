//-------------------------------------------------------
// Info
//-------------------------------------------------------

// Project Name:     Prakt03/a1
// Project Code:     progpp03a1

// File Name:        Vector3D.h
// File Description: Definition of the class Vector3D
// File Code:        progpp03a1vector3dh

// Author Name:	 Tobia Rossi
// Author Code:	 tuoyo

// Header Guard
#ifndef __VECTOR3D_H__
#define __VECTOR3D_H__

//-------------------------------------------------------
// Code Begin
//-------------------------------------------------------

/**
 * @brief 3-dimensional vector
 *
 */
class Vector3D
{
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

//-------------------------------------------------------
// Code End
//-------------------------------------------------------

#endif // __VECTOR3D_H__ header guard end