#include <iostream>
using namespace std;
struct fridge {
	unsigned char fridge :1;
	unsigned char freezer :1;
	unsigned char regime :2;
};

void fridgeRegime(short a) {
	if (a & 1)
		cout << "Fridge is on" << endl;
	else
		cout << "Fridge is off" << endl;
	if (a & 2)
		cout << "Freezer is on" << endl;
	else
		cout << "Freezer is off" << endl;
	if ((a & 12) == 0)
		cout << "Normal regime" << endl;
	if ((a & 12) == 4)
		cout << "Frosting regime" << endl;
	if ((a & 12) == 8)
		cout << "Defrosting regime" << endl;
	if ((a & 12) == 12)
		cout << "Error regime" << endl;
}

void fridgeRegime(fridge f) {
	if (f.fridge)
		cout << "Fridge is on" << endl;
	else
		cout << "Fridge is off" << endl;
	if (f.freezer)
		cout << "Freezer is on" << endl;
	else
		cout << "Freezer is off" << endl;
	switch (f.regime) {
	case 0:
		cout << "Normal regime" << endl;
		break;
	case 1:
		cout << "Frosting regime" << endl;
		break;
	case 2:
		cout << "Defrosting regime" << endl;
		break;
	case 3:
		cout << "Error regime" << endl;
	}
}

int main() {
	short a { 9 };
	fridgeRegime(a);
	cout<<endl;

	fridge mf;
	mf.fridge = 1;
	mf.freezer = 0;
	mf.regime = 2;
	fridgeRegime(mf);
	cout<<endl;

	union myUnion {
		int i;
		double d;
		bool b;
	};
	myUnion mu { };
	mu.i = 10;
	cout << mu.i << endl;
	mu.d = 3.1415926;
	cout << mu.d << endl;
	mu.b = 1;
	cout << mu.b << endl;

	struct bitstruct {
		bool b1 :1;
		bool b2 :1;
		bool b3 :1;
		bool b4 :1;
	};
	bitstruct bs { };
	bs.b1 = 1;

}
