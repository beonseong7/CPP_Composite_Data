#include<iostream>
int main() {
	using namespace std;
	int higgens = 5;
	int* pt = &higgens; // ����� ���ÿ� &higgens������ �ʱ�ȭ �ȴ�.
	cout << "higgens�� �� = " << higgens
		<< ", higgensd�� �ּ� = " << &higgens << endl;
	cout << "*pt�� �� = " << *pt
		<< ", pt�� �� = " << pt << endl;

	return 0;
}