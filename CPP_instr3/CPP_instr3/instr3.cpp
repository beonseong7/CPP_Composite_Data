#include<iostream>
int main() {
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];
	cout << "�̸��� �Է��Ͻʽÿ�:\n";
	cin.get(name, ArSize).get();//getline���� �޸� get�� ���๮�ڸ� �������ʰ� ����⶧���� ���๮�ڰ� �ȸ����Ƿ� �ѹ��� �Է��� �޴� �������� ó���Ѵ�.
	cout << "�����ϴ� ����Ʈ�� �Է��Ͻʽÿ�:\n";
	cin.get(dessert, ArSize).get();
	cout << "���ִ�" << dessert;
	cout << " ����Ʈ�� �غ��ϰڽ��ϴ�. " << name << "��! \n";
	return 0;
}