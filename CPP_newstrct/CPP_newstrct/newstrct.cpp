#include<iostream>
struct inflatable {
	char name[20];
	float volume;
	double price;
};
int main() {
	using namespace std;
	inflatable* ps = new inflatable; //����ü�� ���� �޸� ����
	cout << "����ǳ���� �̸��� �Է��Ͻʽÿ�:";
	cin.get(ps->name, 20); // ����ü ����� �����ϴ� ù��° ���
	cout << "���Ǹ� ������ ��Ʈ ������ �Է��Ͻʽÿ�:";
	cin >> (*ps).volume; // ����ü ����� �����ϴ� �ι�° ���
	cout << "������ �޷� ������ �Է��Ͻʽÿ�: $";
	cin >> ps->price;
	cout << "�̸�: " << (*ps).name << endl;
	cout << "����: " << ps->volume << " cubic feet\n";
	cout << "����: " << ps->price << endl;
	delete ps;
	return 0;
}