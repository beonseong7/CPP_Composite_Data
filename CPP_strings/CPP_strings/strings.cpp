#include<iostream>

int main() {
	using namespace std;
	const int Size = 15;
	char name1[Size];//Size ũ���� ���ڿ� ����
	char name2[Size] = "C++owboy";//������ ���� C++owboy\0���� �����
	cout << "�ȳ��ϼ���! ���� " << name2;
	cout << "�Դϴ�! �Ƿ����� ������?\n";
	cin >> name1;
	cout << "��, " << name1 << " ��! ����� �̸��� ";//name1�� ���� ���
	cout << strlen(name1) << "�� �Դϴٸ� \n";//����� ���ڿ��� ũ�⸦ �����.
	cout << sizeof(name1) << "����Ʈ ũ���� �迭�� ����Ǿ����ϴ�. \n";//���ڿ� ������ ũ�⸦ �����.
	cout << "�̸��� " << name1[0] << "�ڷ� �����ϴ±���. \n";//���ڿ� ù��° �����͸� �����.
	name2[3] = '\0';//name�� 4��° �����͸� \0���� ����
	cout << "�� �̸��� ó�� �� ���ڴ� ������ �����ϴ�: ";
	cout << name2 << endl;// ������ ������\0 ���� ���
	return 0;
}