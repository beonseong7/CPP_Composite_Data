#include<iostream>
#include<string>
#include<cstring>

int main() {
	using namespace std;
	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	str1 = str2;//string�� ���ڿ� �����ϱ�
	strcpy_s(charr1, charr2);//char�� ���ڿ� �����ϱ�
	str1 += " paste";//string�� ���ڿ� ��ġ��
	strcat_s(charr1, " juice");//char�� ���ڿ� ��ġ��

	int len1 = str1.size();//str1�� ũ�⸦ �����Ѵ�.
	int len2 = strlen(charr1);//char�� ���ڿ� ũ�� ����.
	cout << str1 << " ���ڿ�����"
		<< len1 << "���� ���ڰ� ��� �ִ�.\n";
	cout << charr1 << " ���ڿ�����"
		<< len2 << "���� ���ڰ� ��� �ִ�.\n";
	return 0;
}