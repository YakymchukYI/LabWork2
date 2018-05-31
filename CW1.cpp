#include<iostream>
#include<string>
using namespace std;


struct Student {
private:
	string name = "UnkName";
	int year = 2000;
	int markProg = 0;
	int markAdm = 0;
public:
	void input() {
		string tmpName;
		cout << "Enter name of student > "; getline(cin, tmpName);
		setName(this->name = tmpName);
		cout << "Enter year of birth > "; cin >> year;
		cout << "Enter mark Prog > "; cin >> markProg;
		cout << "Enter mark Adm > "; cin >> markAdm;
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
		if (markProg > 0 && markProg <= 12 ) {
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

int main() {
	Student S1{}, S2{};
	Student *S3 = new Student;
	string name;
	int year, markProg, markAdm;
	S1.input();
	S1.print();
	/*S2.input();
	S2.print();*/
	/*S3->input();
	S3->print();*/
	cout << "\n\nEnter new name > "; getline(cin, name); S1.setName(name);
	cout << "\nNew name: " << S1.getName();
	cout << "\nEnter new year of birth > "; cin >> year; S1.setYear(year);
	cout << "\nNew year of birth: " << S1.getYear();
	cout << "\nEnter new mark prog > "; cin >> markProg; S1.setMarkProg(markProg);
	cout << "\nNew new mark prog: " << S1.getMarkProg();
	cout << "\nEnter new mark adm > "; cin >> markAdm; S1.setMarkAdm(markAdm);
	cout << "\nNew new mark adm: " << S1.getMarkAdm() << endl;

	system("pause"); 
	return 0;
}