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
	cin.get();
};