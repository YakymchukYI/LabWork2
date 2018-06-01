#include "Int.h"
#include<iostream>
void Int::Print() const {
	std::cout << number << " ";
}
Int::Int(int n) : number(n) { }
Int Int::Add(Int & num) { return Int(this->number + num.number); }
Int Int::Vid(Int & num) { return Int(this->number - num.number); }
Int Int::Mnog(Int & num) { return Int(this->number * num.number); }
Int Int::Dil(Int &num) {
	if (num.number != 0) {
		Int res(this->number / num.number);
		return res;
	}
	else {
		std::cout << "Na nul dilyty nemogna!!!\n";
		return Int();
	}
}
Int& Int::AddAssign(const Int & num) {
	this->number += num.number;
	return *this;
}
Int& Int::MnogAssign(const Int & num) {
	this->number *= num.number;
	return *this;
}