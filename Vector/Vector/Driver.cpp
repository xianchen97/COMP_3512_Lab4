#include "Vector.hpp"

using namespace std;

int main(void) {
	Vector v_x1_y2_z3(1, 2, 3);
	Vector vDef;
	Vector vDef2;

	cout << "Creating Vector values x=1 y=2 z=3:\n" << v_x1_y2_z3 << endl;
	cout << "The value x: " << v_x1_y2_z3.get_X() << endl;
	cout << "The value y: " << v_x1_y2_z3.get_Y() << endl;
	cout << "The value z: " << v_x1_y2_z3.get_Z() << endl;
	cout << "\nDefault vector all values 0 created:\n" << vDef << endl;
	vDef2.set_X(5.37);
	cout << "Setting x to 5.37:\n" << vDef2 << endl;
	vDef2.set_Y(8.99);
	cout << "Setting y to 8.99:\n" << vDef2 << endl;
	vDef2.set_Z(-0.02);
	cout << "Setting z to -0.02:\n" << vDef2 << endl;



	cout << "Testing decrement options, decrementing currentValues postfix: \n" << v_x1_y2_z3-- << endl;
	cout << "Testing decrement options, decrementing currentValues prefix: \n" << --v_x1_y2_z3 << endl;

	cout << "Testing increment options, decrementing currentValues postfix: \n" << v_x1_y2_z3++ << endl;
	cout << "Testing increment options, decrementing currentValues prefix: \n" << ++v_x1_y2_z3 << endl;

	swap(vDef, v_x1_y2_z3);
	cout << "Swapping default vector(all 0) with the other vector: \n" << vDef << endl;
	cout << "Other vector should have changed:\n" << v_x1_y2_z3 << "\nSwapping values back" <<  endl ;
	swap(vDef, v_x1_y2_z3);

	vDef = v_x1_y2_z3;
	cout << "Testing assignment operator. Default will be assigned to other vector.\nThe values for the other vector should not change.\n" << vDef << endl;
	cout << "Other vector: \n" << v_x1_y2_z3 << endl;


	cout << "Adding two of the these vectors together:\n";
	vDef += v_x1_y2_z3;
	cout << vDef;


	cout << "\nSubtracting two of the these vectors together:\nWith\n" << v_x1_y2_z3 << endl;
	vDef -= v_x1_y2_z3;
	cout << vDef;

	cout << "Getting the dot product of the two of the these vectors above: " << (vDef*v_x1_y2_z3) << endl;
	vDef * 2;
	cout << "\nGetting the values of the of vector above multiplied by 2:\n" << vDef << endl;

	cout << "\nGetting the values of the of vector at [2]:\n" << vDef[2] << endl;
	cin.get();



};