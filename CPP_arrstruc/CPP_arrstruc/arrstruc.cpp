#include<iostream>
struct inflatable
{
	char name[20];
	float volume;
	double price;
};
int main() {
	using namespace std;
	inflatable guest[2] =//����ü �迭 ����
	{
		{"Bambi",0.5,21.99},//����ü ù��° �迭 �� ����
		{"Godzilla",2000,565.99}//����ü �ι��� �迭 �� ����
	};
	cout << guest[0].name << "�� " << guest[1].name // ����ü �迭 �����ϰ� �ش� ���� ���
		<< "�� ���Ǹ� ���ϸ�\n"
		<< guest[0].volume + guest[1].volume//���굵 �����ϴ�.
		<< " ��������Ʈ�Դϴ�.\n";
	return 0;
}