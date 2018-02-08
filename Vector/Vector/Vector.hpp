#pragma once

#include <iostream>
class Vector {
	double _y;
	double _x;
	double _z;

public:
	~Vector();
	Vector();
	Vector(double, double, double);
	Vector(const Vector&);

	double get_X();
	double get_Y();
	double get_Z();

	void set_X(double);
	void set_Y(double);
	void set_Z(double);

	friend void swap(Vector&, Vector&);

	void clear();

	friend std::ostream& operator<<(std::ostream&, const Vector&);


	//Unary Operators
	Vector& operator++();
	Vector operator++(int);

	Vector& operator--();
	Vector operator--(int);

	/*
	Binary Arithmetic Operators
	*/

	Vector& operator+=(const Vector&);
	friend Vector operator+(Vector lhs, Vector& rhs);

	Vector& operator-=(const Vector&);
	friend Vector operator-(Vector lhs, Vector& rhs);

	Vector& operator=(Vector);

	friend double operator*(const Vector& lhs, const Vector& rhs);
	
	void operator*(double);






};