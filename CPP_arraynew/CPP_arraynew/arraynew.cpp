#include<iostream>
int main() {
	using namespace std;
	double* p3 = new double[3]; // double�� ������ �迭 ����

	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;
	cout << "p3[1]�� " << p3[1] << "�Դϴ�.\n";
	p3 = p3 + 1; // �� ������ �迭���ִ� �ּҸ� 1�� �մ���.
	cout << "������ p3[0]�� " << p3[0] << "�̰�, ";
	cout << "p3[1]�� " << p3[0] << "�Դϴ�.\n";
	p3 = p3 - 1; // �� ������ �迭�̞x�� �ּҸ� 1�� �̷��.
	delete[] p3; // �迭 ������ ����
	return 0;
}