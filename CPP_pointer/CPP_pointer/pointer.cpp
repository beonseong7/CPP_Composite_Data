#include<iostream>
int main() {
	using namespace std;
	int updates = 6;
	int* p_updates; // ������ ������ ���� ����
	p_updates = &updates; // ������ ������ �ּҰ��� updates�� �����.

	cout << "��: updates = " << updates;
	cout << ", *p_updates = " << *p_updates << endl; // �ش� ������ �ּҿ��ִ� ���� ���
	cout << "�ּ� : &updates = " << &updates; // �ش� ������ �ּҸ� ���
	cout << ", p_updates = " << p_updates << endl;

	*p_updates = *p_updates + 1; // ������ �����ε� ������ �����ϴ�.
	cout << "����� updates = " << updates << endl;
	return 0;
}