#include "Vector.hpp"

using namespace std;
//Destructor
Vector::~Vector() {};

//Consturctor
Vector::Vector(double x, double y, double z) {
	_x = { x };
	_y = { y };
	_z = { z };
}

Vector::Vector() {
	_x = { 0 };
	_y = { 0 };
	_z = { 0 };
}

Vector::Vector(const Vector& copy) {
	_x = { copy._x };
	_y = { copy._y };
	_z = { copy._z };
}

//Member Functions
/*

PRECONDITION:
POSTCONDITION:
*/
void Vector::clear() {

}


/*

PRECONDITION:
POSTCONDITION:
*/
void swap(Vector& lhs, Vector& rhs) {
	std::swap(lhs._x, rhs._x);
	std::swap(lhs._y, rhs._y);
	std::swap(lhs._z, rhs._z);
}

//Getters

/*
Return the value of y in the vector.
PRECONDITION:
POSTCONDITION:
*/
inline double Vector::get_Y() {
	return _y;
}

/*
Return the value of x in the vector.
PRECONDITION:
POSTCONDITION:
*/
inline double Vector::get_X() {
	return _x;
}

/*
Return the value of z in the vector.
PRECONDTION:
POSTCONDITION:
*/
inline double Vector::get_Z() {
	return _z;
}

/*
SETTERS
*/

/*

PRECONDITION:
POSTCONDITION:
*/
inline void Vector::set_Y(double y) {
	_y = { y };
}

/*

PRECONDITION:
POSTCONDITION:
*/
inline void Vector::set_X(double x) {
	_x = x;
}

/*

PRECONDITION:
POSTCONDITION:
*/
inline void Vector::set_Z(double z) {
	_z = z;
}

/*
Operator Overloading
*/


/*
Increment all vector coordiante values by 1 prefix.
PRECONDITION: Vector has been created.
POSTCONDITION: All the values in the vector have been increased by one.
*/
Vector& Vector::operator++() {
	_x++;
	_y++;
	_z++;
	return *this;
}

/*
Increment all the vector coordinate values by 1 postifix.
PRECONDITION: Vector created.
POSTCONDITION: All the values of the vector have been increased by one.
*/
Vector Vector::operator++(int) {
	Vector temp(*this);
	operator++();
	return temp;
}

/*
Decrement all the vector coordinate values by 1 prefix.
PRECONDITION: Vector created.
POSTCONDITION: All the values in the vector have been decreased by one.
*/
Vector& Vector::operator--() {
	_x--;
	_y--;
	_z--;

	return *this;
}

/*
Decrement all the vector coordinate values by 1 postfix.
PRECONDITION: Vector created
POSTCONDITION: All the values in the vector have been decreased by one.
*/
Vector Vector::operator--(int) {
	Vector temp(*this);
	operator--();
	return temp;
}

/*
The insertion operator will print out all the dimensions of the vector.
PRECONDITION: The vector has been created.
POSTCONDITION: All the dimensions of the dimensions of the vector will be printed onto console formatted.
*/
std::ostream& operator<<(std::ostream& out, const Vector& v) {
	out << "The x is: " << v._x << endl << "The y is: " << v._y << endl << "The z is: " << v._z << endl;
	return out;
}


//BINNARY ARITHMETIC OPERATORS


/*

PRECONDITION:
POSTCONDITION:
*/
Vector& Vector::operator+=(const Vector& rhs) {
	_x += rhs._x;
	_y += rhs._y;
	_z += rhs._z;
	return *this;
}

/*

PRECONDITION:
POSTCONDITION:
*/
Vector operator+(Vector lhs, Vector& rhs) {
	return (lhs += rhs);
}

/*

PRECONDITION:
POSTCONDITION:
*/
Vector& Vector::operator-=(const Vector& rhs) {
	_x -= rhs._x;
	_y -= rhs._y;
	_z -= rhs._z;
	return *this;
}

/*

PRECONDITION:
POSTCONDITION:
*/
Vector operator-(Vector lhs, Vector& rhs) {
	return (lhs += rhs);
}


/*

PRECONDITION:
POSTCONDITION:
*/
Vector& Vector::operator=(Vector v) {
	swap(*this, v);
	return *this;
}


/*

PRECONDITION:
POSTCONDITION:
*/
double operator*(const Vector& lhs, const Vector& rhs);


/*

PRECONDITION:
POSTCONDITION:
*/
void Vector::operator*(double) {
}


