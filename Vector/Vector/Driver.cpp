#include "Vector.hpp"

using namespace std;

int main(void) {
	Vector v_x1_y2_z3 = Vector(1, 2, 3);
	Vector vDef;

	cout << "Creating Vector values x=1 y=2 z3:\n" << v_x1_y2_z3 << endl;
	cout << "Default vector all values 0 created:\n" << vDef << endl;
	cin.get();
};