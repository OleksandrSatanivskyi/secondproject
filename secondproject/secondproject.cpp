#include"Header.h"
int main(int argc, char* argv[])
{
	setlocale(0, "ru");
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 7);
	srand(time(0));
	int lich1 = 0;
	const int size1 = 4;
	int array1[size1][size1];
	int b = 0;
	int vrem1 = 0;
	int zap1 = 0;
	int rand11 = 0;
	int rand21 = 0;
	int knopka1 = 0;
	int sss = 0;
	int abb = 1;
	char buff[100];
	char imya1[100];
	int knopk22 = 0;
	int zamen1 = 0;
	ofstream fout("istoria.txt", ios_base::app);
	Menu();
	createarray(size1, array1, b);
	Sortirovka(rand11, rand21, size1, array1, vrem1);
	PrintArray1(size1, array1, zamen1);
	while (abb > sss) {
		if (Pobeda1(array1)) {
			Menupob(knopk22, lich1, imya1);
		}
		else {
			for (int i = 0; i < size1; i++) {
				for (int j = 0; j < size1; i++) {
					KnopkaHod(i, j, knopka1, zap1, array1, zamen1);
					system("cls");
					PrintArray1(size1, array1, zamen1);
				}
			}
		}
	}
	system("pause");
}