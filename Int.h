#pragma once
class Int {
	int number = 0;
public:
	Int() = default;
	explicit Int(int n);
	~Int() { }
	int getNumber()const { return number; }
	void Print() const;
	Int Add(Int & num);
	Int Vid(Int & num);
	Int Mnog(Int & num);
	Int Dil(Int &num);
	Int &AddAssign(const Int & num);
	Int &MnogAssign(const Int & num);
};

