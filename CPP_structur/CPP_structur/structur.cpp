#include<iostream>
struct inflatable // ����ü�� ������ ���� ����
{
	char name[20];
	float volume;
	double price;
};
int main() {
	using namespace std;
	inflatable guest =//����ü ���� ����� ���ÿ� ���ʴ�� �� ������ �� ����
	{
		"Glorious Gloria",
		1.88,
		29.99
	};
	inflatable pal =
	{
		"Audacious arthur",
		3.12,
		32.99
	};
	cout << "���� �Ǹ��ϰ� �ִ� ����ǳ����\n" << guest.name; // ����ü�� ���� ������ ���
	cout << "�� " << pal.name << "�Դϴ�.\n";// ����ü�� �����ϴ� ����̶� �����ϸ� �ȴ�.
	cout << "�� ��ǰ�� $";
	cout << guest.price + pal.price << "�� �帮�ڽ��ϴ�!\n";
	return 0;
}