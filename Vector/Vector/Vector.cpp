#include "Vector.hpp"

using namespace std;
//Destructor
Vector::~Vector() {};

//Constructor
/*
Constructor takes in three parameters and assigns it to the vector values.
*/
Vector::Vector(double x, double y, double z) {
	_x = { x };
	_y = { y };
	_z = { z };
}

/*
Default constructor that assigns zero to all variables.
*/
Vector::Vector() {
	_x = { 0 };
	_y = { 0 };
	_z = { 0 };
}

/*
Constructor that takes in a vector and assigns the current vector the values of the other vector.
*/
Vector::Vector(const Vector& copy) {
	_x = { copy._x };
	_y = { copy._y };
	_z = { copy._z };
}

//Member Functions
/*
Clears the co-ordinates in the vector.
PRECONDITION: Vector has been initialized.
POSTCONDITION: All the values in the vector have been cleared.
*/
void Vector::clear() {
	_x = 0;
	_y = 0;
	_z = 0;
}


/*
Swap the values within two functions
PRECONDITION: Both vectors have been initialized.
POSTCONDITION: Values between both objects have been swapped with eachother.
*/
void swap(Vector& lhs, Vector& rhs) {
	std::swap(lhs._x, rhs._x);
	std::swap(lhs._y, rhs._y);
	std::swap(lhs._z, rhs._z);
}

//Getters

/*
Return the value of x in the vector.
PRECONDITION: Vector has been initialized.
POSTCONDITION: Returns the x co-ordinate.
*/
double Vector::get_X() {
	return _x;
}


/*
Return the value of y in the vector.
PRECONDITION: Vector has been initialized.
POSTCONDITION: Returns the y co-ordinate.
*/
double Vector::get_Y() {
	return _y;
}

/*
Return the value of z in the vector.
PRECONDTION: Vector has been initialized.
POSTCONDITION: Returns the z co-ordinate.
*/
double Vector::get_Z() {
	return _z;
}

/*
SETTERS
*/

/*
Sets the value of the x coordinate in the Vector.
PRECONDITION: Vector has been initialized.
POSTCONDITION: Changes the x coordinate with passed in value.
*/
void Vector::set_X(double x) {
	_x = x;
}


/*
Sets the value of the y coordinate in the Vector.
PRECONDITION: Vector has been initialized.
POSTCONDITION: Changes the y coordinate with passed in value.
*/
void Vector::set_Y(double y) {
	_y = y;
}

/*
Sets the value of the z coordinate in the Vector.
PRECONDITION: Vector has been created
POSTCONDITION:  Changes the z coordinate with passed in value.
*/
void Vector::set_Z(double z) {
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
Adds a vectors value with the values of another vectors co-ordinates
PRECONDITION: The vector's have been created.
POSTCONDITION: Value on the left has side has been updated with the value on the right hand side.
*/
Vector& Vector::operator+=(const Vector& rhs) {
	_x += rhs._x;
	_y += rhs._y;
	_z += rhs._z;
	return *this;
}

/*
Adds the values between two vectors and returns the added values.
PRECONDITION: Both vectors have been intialized to contain values.
POSTCONDITION: Returns a vector with the added values.
*/
Vector operator+(Vector lhs, Vector& rhs) {
	return (lhs += rhs);
}

/*
Subtract a vectors value with the values of another vectors co-ordinates
PRECONDITION: The vector's have been created.
POSTCONDITION: Value on the left has side has been updated with the value on the right hand side.
*/
Vector& Vector::operator-=(const Vector& rhs) {
	_x -= rhs._x;
	_y -= rhs._y;
	_z -= rhs._z;
	return *this;
}

/*
Subtracts the values between two vectors and returns the added values.
PRECONDITION: Both vectors have been intialized to contain values.
POSTCONDITION: Returns a vector with the subtracted values.
*/
Vector operator-(Vector lhs, Vector& rhs) {
	return (lhs += rhs);
}


/*
Current vecotr has been assigned with values of another vector.
PRECONDITION: Both vectors have been initialized.
POSTCONDITION: LHS vector is assigned the values of the RHS Vector.
*/
Vector& Vector::operator=(Vector v) {
	swap(*this, v);
	return *this;
}

/*
Gets the dot product between two vectors.
PRECONDITION: Initialized both Vectors.
POSTCONDITION: Returns the dot product of the vectors.
*/
double operator*(const Vector& lhs, const Vector& rhs) {
	double x = lhs._x * rhs._x;
	double y = lhs._y * rhs._y;
	double z = lhs._z * rhs._z;
	return x + y + z;
}

/*
Multiplies each value in the vector by a certain value.
PRECONDITION: Vector has been initialized.
POSTCONDITION: Vector values have been multiplied by passed in parameter value.
*/
void Vector::operator*(double n) {
	_x = _x * n;
	_y = _y * n;
	_z = _z * n;
}

/*
Returns a value dependent on passed in input.
1 = _x
2 = _y
3 = _z
PRECONDITION: Vector has been initialized.
POSTCONDITION: Returns a double passed on passed in parameter
*/
double Vector::operator[](int n) {
	if (n == 0)
		return _x;
	else if(n==1)
		return _y;
	else
		return _z;
}





