#include <iostream>

int main() {
	using namespace std;
	int yam[3];//3���� ������ ������ �������ִ� ������ �迭�� �����Ѵ�.
	yam[0]=7;//0��ġ �� ���� ù��° ��ġ�� ������ 7�� ���Ѵ�.
	yam[1]=8;//�ι�° ��ġ�� ������ 8�� ���Ѵ�.
	yam[2]=6;//����° ��ġ�� ������ 6���� ���Ѵ�.
	int yamcosts[3] = { 200,300,50 };//�迭 ��������ÿ� �� �ڸ��� �ְ���� ������ �ִ´�.
	cout << "���� �հ� = ";
	cout << yam[0] + yam[1] + yam[2] << endl;
	cout << yam[1] << "���� ��� �ִ� ������";
	cout << "���� " << yamcosts[1] << "���� �Դϴ�.\n";
	int total = yam[0] * yamcosts[0] + yam[1] * yamcosts[1];
	total = total + yam[2] * yamcosts[2];
	cout << "�������� �� ������ " << total << "���Դϴ�.\n";
	cout << "\nyam �迭�� ũ��� " << sizeof(yam); // sizeof(���ڰ�) �� ������ ������ ũ�⸦ ��ȯ�Ѵ�. 
	cout << "����Ʈ�Դϴ�.\n";
	cout << "���� �ϳ��� ũ��� " << sizeof yam[0];
	cout << "����Ʈ�Դϴ�.\n";
	return 0;
}