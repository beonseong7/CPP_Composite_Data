#include<iostream>

int main() {
	using namespace std;
	cout << "���ݻ�ô� ����Ʈ�� ���� �����ϼ̽��ϱ�?\n";
	int year;
	cin >> year;//������ ��¥ �Է�
	cin.get();//���๮�� ������
	cout << "��ô� ���ø� ������ �ֽðڽ��ϱ�?\n";
	char address[80];
	cin.getline(address, 80);//��� ���� �Է� (�� cin.get()�� ���������� ���๮�ڸ� �ٷ� �ν��ؼ� �ش� ��ɾ �ٷ�ó���ȴ�)
	cout << "����Ʈ ���� ����: " << year << endl;
	cout << "����: " << address << endl;
	cout << "����� �Ϸ�Ǿ����ϴ�!\n";
	return 0;
}