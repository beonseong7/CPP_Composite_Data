#include<iostream>
#include<cstring>
using namespace std;
char* getname(void);
int main() {
	char* name;
	name = getname();
	cout << (int*)name << ": " << name << "\n";
	delete[] name; //메모리를 해제한다

	name = getname();
	cout << (int*)name << ": " << name << "\n";
	delete[] name;
	return 0;
}
char* getname() {
	char temp[80];
	cout << "이름을 입력하십시오: ";
	cin >> temp;
	char* pn = new char[strlen(temp) + 1];
	strcpy(pn, temp);
	return pn;
}