#include<iostream>
#include<cstring>
int main() {
	using namespace std;
	char animal[20] = "bear";
	const char* bird = "wren";
	char* ps;

	cout << animal << " and ";
	cout << bird << "\n";
	cout << "������ ������ �Է��Ͻʽÿ�:";
	cin >> animal;

	ps = animal; // ps�� �ּҸ� animal�� ��ġ�ñ�
	cout << ps << "s!\n";
	cout << "strcpy () ����� : \n";
	cout << (int*)animal << ": " << animal << endl;
	cout << (int*)ps << ": " << ps << endl;

	ps = new char[strlen(animal) + 1];
	strcpy(ps,animal); //strcpy�� ����ϸ� �ּҰ� �ƴ� �ش� �ּҿ� �ִ� ���� �����ؼ� �����Ѵ�. ��������� �ּҰ� �޶�����.
	cout << "strcpy() �����:\n";
	cout << (int*)animal << ": " << animal << endl;
	cout << (int*)ps << ": " << ps << endl;
	delete[] ps;
	return 0;
}