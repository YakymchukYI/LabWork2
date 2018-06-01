#include"Int.h";
#include<iostream>
const int SIZE = 3;
int main() {
	Int a(6), b(3), c;
	c = a.Add(b); std::cout << "Suma: "; c.Print();
	c = a.Vid(b); std::cout << "\nRiznitcia: "; c.Print();
	c = a.Mnog(b); std::cout << "\nMnogenya: "; c.Print();
	c = a.Dil(b); std::cout << "\nDilenya: "; c.Print();
	c = a.MnogAssign(b); std::cout << "\nMnog Assign: "; c.Print();
	Int Arr[SIZE]{ Int(5),Int(7),Int(8) };
	std::cout << "\nArr items: ";
	for (int i = 0; i < SIZE; ++i) {
		Arr[i].Print();
	}
	Int res;
	std::cout << "\nArr sum: ";
	for (int i = 0; i < SIZE; ++i) {
		res.AddAssign(Arr[i]);

	}
	res.Print();
	std::cout << std::endl;
	return 0;
}