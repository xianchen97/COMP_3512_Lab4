#include "Vector.hpp"

using namespace std;

int main(void) {
	Vector v_x1_y2_z3(1, 2, 3);
	Vector vDef;

	cout << "Creating Vector values x=1 y=2 z3:\n" << v_x1_y2_z3 << endl;
	cout << "Default vector all values 0 created:\n" << vDef << endl;


	cout << "Testing decrement options, decrementing currentValues postfix: \n" << v_x1_y2_z3-- << endl;
	cout << "Testing decrement options, decrementing currentValues prefix: \n" << --v_x1_y2_z3 << endl;

	cout << "Testing increment options, decrementing currentValues postfix: \n" << v_x1_y2_z3++ << endl;
	cout << "Testing increment options, decrementing currentValues prefix: \n" << ++v_x1_y2_z3 << endl;

	swap(vDef, v_x1_y2_z3);
	cout << "Swapping default vector with the other vector: \n" << vDef << endl;
	cout << "Other vector should have changed:\n" << v_x1_y2_z3 << "\nSwapping values back" <<  endl ;
	swap(vDef, v_x1_y2_z3);

	vDef = v_x1_y2_z3;
	cout << "Testing assignment operator. Default will be assigned to other vector.\nThe values for the other vector should not change.\n" << vDef << endl;
	cout << "Other vector: \n" << v_x1_y2_z3 << endl;
	cin.get();

};