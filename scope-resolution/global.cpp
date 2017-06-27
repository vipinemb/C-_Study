#include <iostream>
int var = 10;
using namespace std;
int main(void) {
	int var = 4;
	cout << "lvar: " << var << endl;
	cout << "gvar: " << ::var << endl;
}
