#include<iostream>
#include<string>
int main()
{
	using namespace std;
	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther"; // pather ���ڸ� ���� ���ڿ� ����� ���ÿ� ����
	cout << "�����̰��� ���� �� ���� �Է��Ͻÿ�: ";
	cin >> charr1;
	cout << "�����̰��� �� �ٸ� ���� �� ���� �Է��Ͻÿ�:";
	cin >> str1;//���ڿ� �Է�
	cout << "�Ʒ� �������� ��� �����̰��Դϴ�:\n";
	cout << charr1 << " " << charr2 << " "
		<< str1 << " " << str2
		<< endl;
	cout << charr2 << "���� ����° ����: "
		<< charr2[2] << endl;
	cout << str2 << "���� �� ��° ����: "
		<< str2[2] << endl;//0���� ������ 0,1,2 �� 3��° �����͸� ���
}