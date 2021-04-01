#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;

void menu(char massiv1[][100], int* x);
void predl(char massiv[][100], int* y);
void slova(char massiv1[][100], char massiv[][100], int x, int y);
void simvoli(char massiv1[][100], char massiv[][100], int x, int y);
void glas(char massiv1[][100], char massiv[][100], int x, int y);

int main()
{
	int x = 0, y = 0;
	setlocale(0, "");

	char massiv[][100] = {
		{"� ����� ����� ����������."},
		{"�� ��� ����� ���������."},
		{"������� ����� ��������?"},
		{"����� ��� ��������� ������?"},
		{"�� ����� � ����� � �����!"},
		{"��� �� ������ ����� �����."}
	};

	char massiv1[][100] = {
		{"����� �� ��������"},
		{"���������� ����"},
		{"���������� ������� ��������"},
		{"���������� ������� ����"},
	};
	menu(massiv1, &x);
	predl(massiv, &y);

	void((*arr[3]))(char massiv1[][100], char massiv[][100], int x, int y);
	arr[0] = slova;
	arr[1] = simvoli;
	arr[2] = glas;

	if (x == 1) {
		arr[0](massiv1, massiv, x, y);
	}
	else if (x == 2) {
		arr[1](massiv1, massiv, x, y);
	}
	else if (x == 3) {
		arr[2](massiv1, massiv, x, y);
	}
	system("pause");
}

void menu(char massiv1[][100], int* x) {
	int a;
	std::cout << "���� ��������. ����������:\n\n";

	//1================================== //����� ��������
	for (int i = 1; i < 4; i++) {
		std::cout << i << ".";
		for (int j = 0; j < strlen(massiv1[i]); j++) {
			std::cout << massiv1[i][j];
		}
		std::cout << "\n";
	}
	std::cout << "0.";
	for (int j = 0; j < strlen(massiv1[0]); j++) {
		std::cout << massiv1[0][j];
	}
	std::cout << "\n";

	std::cout << "�������� ������� -> "; cin >> a; std::cout << "\n";  //����� ��������

//=================================== //�������� 'x' �� ������������ �����
	if ((a < 0) || (a > 3)) {
		std::cout << "������ �����, ������ �������� ���. ��������� �������...";
		cin >> a;
	}
	else if (a == 0) {
		exit(0);
	}

	(*x) = a;
}

void predl(char massiv[][100], int* y) {
	int a;
	//2================================== //����� ��������
	for (int i = 0; i < 6; i++) {
		cout << i + 1 << " ";
		for (int j = 0; j < strlen(massiv[i]); j++) {
			std::cout << massiv[i][j];
		}
		std::cout << "\n";
	}
	std::cout << "�������� ������� -> "; cin >> a; std::cout << "\n";   //����� ��������

	//=================================== //�������� 'y' �� ������������ �����
	if ((a < 1) || (a > 6)) {
		std::cout << "������ �����, ������ �������� ���. ��������� �������...";
		cin >> a;
	}
	(*y) = a;
}

void slova(char massiv1[][100], char massiv[][100], int x, int y) {
	int k = 0;
	std::cout << "�������: " << x << " ";
	for (int j = 0; j < strlen(massiv1[x]); j++) {      //
		std::cout << massiv1[x][j];
	}

	std::cout << "\n�����������: " << y << " ";

	for (int i = 0; i < strlen(massiv[y - 1]); i++) {
		std::cout << massiv[y - 1][i];
	}

	for (int i = 0; i < strlen(massiv[y - 1]); i++) {
		if (isspace((unsigned char)massiv[y - 1][i])) {
			k++;
		}
	}

	cout << "\n����������� ���� � ����������� = " << k + 1 << endl;
}

void simvoli(char massiv1[][100], char massiv[][100], int x, int y) {
	//���������� ������� ��������
	int k = 0;
	std::cout << "�������: " << x << " ";
	for (int j = 0; j < strlen(massiv1[x]); j++) {
		std::cout << massiv1[x][j];
	}
	std::cout << "\n�����������: " << y << " ";
	for (int i = 0; i < strlen(massiv[y - 1]); i++) {
		std::cout << massiv[y - 1][i];
	}

	for (int i = 0; i < strlen(massiv[y - 1]); i++) {
		if (isgraph((unsigned char)massiv[y - 1][i])) {
			k++;
		}
	} cout << "\n���������� ������� �������� = " << k << endl;
}

void glas(char massiv1[][100], char massiv[][100], int x, int y) {

	int k = 0;
	std::cout << "�������: " << x << " ";
	for (int j = 0; j < strlen(massiv1[x]); j++) {      //
		std::cout << massiv1[x][j];
	}
	std::cout << "\n�����������: " << y << " ";

	for (int i = 0; i < strlen(massiv[y - 1]); i++) {
		std::cout << massiv[y - 1][i];
	}

	for (int i = 0; i < strlen(massiv[y - 1]); i++) {
		if ((massiv[y - 1][i] == '�') || (massiv[y - 1][i] == '�') || (massiv[y - 1][i] == '�') || (massiv[y - 1][i] == '�') || (massiv[y - 1][i] == '�') || (massiv[y - 1][i] == '�') || (massiv[y - 1][i] == '�') || (massiv[y - 1][i] == '�') ||
			(massiv[y - 1][i] == '�') || (massiv[y - 1][i] == '�') || (massiv[y - 1][i] == '�') || (massiv[y - 1][i] == '�') || (massiv[y - 1][i] == '�') || (massiv[y - 1][i] == '�') || (massiv[y - 1][i] == '�') || (massiv[y - 1][i] == '�') ||
			(massiv[y - 1][i] == '�') || (massiv[y - 1][i] == '�') || (massiv[y - 1][i] == '�') || (massiv[y - 1][i] == '�'))
		{
			k = k + 1;
		}
	}

	cout << "\n���������� ������� ���� = " << k << endl;
}
