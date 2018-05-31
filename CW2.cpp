#include<iostream>
#include<string>
using namespace std;


class Student {
	string name = "UnkName";
	int year = 2000;
	int markProg = 0;
	int markAdm = 0;
public:
	Student(string name, int year, int markProg, int markAdm) {
		setName(name);
		setYear(year);
		setMarkProg(markProg);
		setMarkAdm(markAdm);
		/*cout << "Ctor with 4 parameters\n";*/
	}
	Student(string name, int year, int markProg) : Student(name, year, markProg, 0) {
		/*cout << "Ctor with 3 parameters\n";*/
	}
	explicit Student(string name, int year = 1991) : Student(name, year, 0, 0) {
		/*cout << "Ctor with 2 parameters\n";*/
	}
	Student() : Student("UnkName", 2000) {
		/*cout << "Default ctor!\n";*/
	}
	~Student() {
		/*cout << "Dtor done!\n";*/
	}
	void input() {
		string tmpName;
		int tmpYear, tmpMarkProg, tmpMarkAdm;
		cout << "Enter name of student > "; getline(cin, tmpName);
		setName(tmpName);
		cout << "Enter year of birth > "; cin >> tmpYear;
		setYear(tmpYear);
		cout << "Enter mark Prog > "; cin >> tmpMarkProg;
		setMarkProg(tmpMarkProg);
		cout << "Enter mark Adm > "; cin >> tmpMarkAdm;
		setMarkAdm(tmpMarkAdm);
	}
	void print() const {
		cout << "Name of student: " << this->name << endl;
		cout << "Year of birth: " << this->year << endl;
		cout << "Mark Prog: " << this->markProg << endl;
		cout << "Mark Adm: " << this->markAdm << endl;
	}
	void setName(string& name) {
		if (name.find_first_of("0123456789,.!-_;:") == string::npos) {
			if (islower(name[0]) || isupper(name[0])) {
				name[0] = toupper(name[0]);
				this->name = name;
			}
		}
		else {
			return;
		}
	}
	string getName() const {
		return name;
	}
	void setYear(const int& year) {
		if (year >= 1991 && year < 2000) {
			this->year = year;
		}
		else {
			return;
		}
	}
	int getYear() const {
		return year;
	}
	void setMarkProg(const int& markProg) {
		if (markProg > 0 && markProg <= 12) {
			this->markProg = markProg;
		}
		else {
			return;
		}
	}
	int getMarkProg() const {
		return markProg;
	}
	void setMarkAdm(const int& markAdm) {
		if (markAdm > 0 && markAdm <= 12) {
			this->markAdm = markAdm;
		}
		else {
			return;
		}
	}
	int getMarkAdm() const {
		return markAdm;
	}
};

class Int {
	int number = 0;
public:
	Int() = default;
	explicit Int(int n) : number(n) { }
	~Int() { }
	int getNumber()const { return number; }
	void Print() {
		cout << "Resault = " << number << endl;
	}
	Int Add(Int & num) { return Int(this->number + num.number); }
	Int Vid(Int & num) { return Int(this->number - num.number); }
	Int Mnog(Int & num) { return Int(this->number * num.number); }
	Int Dil(Int &num) {
		if (num.number != 0) {
			Int res (this->number / num.number);
			return res;
		}
		else {
			cout << "Na nul dilyty nemogna!!!\n";
			return Int();
		}
	}
	Int &AddAssign (const Int & num) {
		this->number += num.number;
		return *this;
	}
	Int &MnogAssign(const Int & num) {
		this->number *= num.number;
		return *this;
	}

};

Student S3{ "Anton",1995,12,12 };
const int SIZE = 3;


void printStudent(const Student & S)
{
	S.print();
}

int main() {
	/*Student S1{};
	Student *S2 = new Student{"Vlad",1991,12};
	S1.input();
	S1.print();
	S2->print();
	delete S2;
	S3.print();*/

	/*Student Sarr[SIZE]{ Student("Yaroslav", 1991), Student("Vlad",1991,12),Student("Anton",1995,12,12) };
	for (int i = 0; i < SIZE; ++i) {
		Sarr[i].print();
	}*/

	/*Student *SArr = new Student[SIZE] { Student("Yaroslav", 1991), Student("Vlad", 1991, 12), Student("Anton", 1995, 12, 12) };
	for (int i = 0; i < SIZE; ++i) {
		SArr[i].print();
	}
	delete[]SArr;*/

	/*printStudent(string("Yaroslav"));*/

	//____________________________________________________second task

	Int a(6), b(3), c;
	c = a.Add(b); c.Print();
	c = a.Vid(b); c.Print();
	c = a.Mnog(b); c.Print();
	c = a.Dil(b); c.Print();
	c = a.MnogAssign(b); c.Print();

	Int Arr[SIZE]{ Int(5),Int(7),Int(8) };

	for (int i = 0; i < SIZE; ++i) {
		Arr[i].Print();
	}
	Int res;
	for (int i = 0; i < SIZE; ++i) {
		res.AddAssign(Arr[i]);
		
	}
	res.Print();
	return 0;
}