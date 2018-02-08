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

PRECONDITION:
POSTCONDITION:
*/
Vector& Vector::operator++() {
	return *this;
}

/*

PRECONDITION:
POSTCONDITION:
*/
Vector Vector::operator++(int) {
	return *this;
}

/*

PRECONDITION:
POSTCONDITION:
*/
Vector& Vector::operator--() {

	return *this;
}

/*

PRECONDITION:
POSTCONDITION:
*/
Vector Vector::operator--(int) {

	return *this;
}




/*
The insertion operator will print out all the dimensions of the vector.
PRECONDITION:
POSTCONDITION:
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
Vector& Vector::operator+=(const Vector&) {
	return *this;
}

/*

PRECONDITION:
POSTCONDITION:
*/
Vector operator+(Vector lhs, Vector& rhs) {
	return lhs;
}

/*

PRECONDITION:
POSTCONDITION:
*/
Vector& Vector::operator-=(const Vector&) {
	return *this;
}

/*

PRECONDITION:
POSTCONDITION:
*/
Vector operator-(Vector lhs, Vector& rhs) {
	return lhs;
}


/*

PRECONDITION:
POSTCONDITION:
*/
Vector& Vector::operator=(Vector) {
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


