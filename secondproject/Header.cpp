#include"Header.h"
using namespace std;
void createarray(int size, int array[4][4], int a) {

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {

			array[i][j] = ++a;
		}
	}
	array[3][3] = 0;
}
//void PrintArray(int size, int array[4][4]) {
//	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//	for (int i = 0; i < size; i++) {
//		for (int j = 0; j < size; j++) {
//			if (array[i][j] == 0) {
//				SetConsoleTextAttribute(h, 7);
//				cout << setw(3) << array[i][j];
//			}
//			else {
//				if ((i + j) % 2 == 1) {
//					SetConsoleTextAttribute(h, 113);
//					cout << setw(3) << array[i][j];
//				}
//				if ((i + j) % 2 == 0) {
//					SetConsoleTextAttribute(h, 225);
//					cout << setw(3) << array[i][j];
//				}
//			}
//		}
//		cout << endl;
//	}
//	Beep(300, 100);
//	Beep(350, 100);
//	SetConsoleTextAttribute(h, 7);
//}
void PrintArray1(int size, int array[4][4], int zamen) {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (array[i][j] == zamen) {
				SetConsoleTextAttribute(h, 7);
				cout << setw(3) << array[i][j];
			}
			else {
				if ((i + j) % 2 == 1) {
					SetConsoleTextAttribute(h, 113);
					cout << setw(3) << array[i][j];
				}
				if ((i + j) % 2 == 0) {
					SetConsoleTextAttribute(h, 225);
					cout << setw(3) << array[i][j];
				}
			}
		}
		cout << endl;
		Beep(300, 200);
		Sleep(50);
	}
	SetConsoleTextAttribute(h, 7);
}
void Sortirovka(int rand1, int rand2, int size, int array[4][4], int vrem = 0) {

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			rand1 = rand() % 4 + 0;
			rand2 = rand() % 4 + 0;
			vrem = array[i][j];
			array[i][j] = array[rand1][rand2];
			array[rand1][rand2] = vrem;
		}
	}
}
void KnopkaHod(int i, int j, int knopka, int zap, int array[4][4], int zamen) {
	knopka = _getch();
	cout << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (array[i][j] == zamen) {
				switch (knopka) {
				case 119:
					if (i != 0) {
						zap = array[i][j];
						array[i][j] = array[i - 1][j];
						array[i - 1][j] = zap;
						Beep(300, 100);
					}break;
					if (i == 0) {
						Beep(700, 100);
					}break;
				case 115:
					if (i != 3) {
						zap = array[i][j];
						array[i][j] = array[i + 1][j];
						array[i + 1][j] = zap;
						Beep(400, 100);
					}break;
					if (i == 3) {
						Beep(700, 100);
					}break;
				case 100:
					if (j != 3) {
						zap = array[i][j];
						array[i][j] = array[i][j + 1];
						array[i][j + 1] = zap;
						Beep(500, 100);
					}break;
					if (j == 3) {
						Beep(700, 100);
					}break;
				case 97:
					if (j != 0) {
						zap = array[i][j];
						array[i][j] = array[i][j - 1];
						array[i][j - 1] = zap;
						Beep(600, 100);
					}break;
					if (j == 0) {
						Beep(700, 100);
					}break;
				case 105:
					cout << "ƒо свидани€" << endl;
					system("pause");
				case 122:
					cin >> zamen; 
				}break;
			}
			else {

			}
			if (zamen>15) {
				cout << "надо ввести число от 0 до 15" << endl;
				cin >> zamen;
			}
		}
	}
}
void Menu() {
	Beep(300, 300);
	cout << "W - вверх" << endl;
	Sleep(50);
	Beep(350, 300);
	cout << "S -вниз" << endl;
	Sleep(50);
	Beep(400, 300);
	cout << "D -вправо" << endl;
	Sleep(50);
	Beep(450, 300);
	cout << "A -влево" << endl;
	Sleep(50);
	Beep(550, 300);
	cout << "I - выход из игры " << endl;
	Sleep(50);
}
//bool Pobeda(int array[3][3]) {
//	if (array[0][0] == 1 
//		&& array[0][1] == 2 
//		&& array[0][2] == 3 
//		&& array[0][3] == 4 
//		&& array[1][0] == 5 
//		&& array[1][1] == 6 
//		&& array[1][2] == 7 
//		&& array[1][3] == 8 
//		&& array[2][0] == 9 
//		&& array[2][1] == 10 
//		&& array[2][2] == 11 
//		&& array[2][3] == 12 
//		&& array[3][0] == 13 
//		&& array[3][1] == 14 
//		&& array[3][2] == 15 
//		&& array[3][3] == 0) {
//		cout << "вы победили!!!" << endl;
//		return true;
//		system("pause");
//	}

//	return false;
//	
//}
void Menupob(int knopk2, int lich, char imya[100]) {
	Beep(500, 500);
	cout << "O - добавить свой рекорд" << endl;
	Sleep(50);
	Beep(550, 500);
	cout << "P - вывести список рекордов" << endl;
	Sleep(50);
	Beep(600, 300);
	cout << "I - выход из игры " << endl;
	Sleep(50);
	knopk2 = _getch();
	switch (knopk2)
		case 101:
			/*ofstream fout("istoria.txt", ios_base::app);
			cout << "введите им€ пользовател€" << endl;
			cin >> imya;
			fout << imya << " - " << lich << endl;
			cout << endl;*/
		case 105:
			cout << "ƒо свидани€" << endl;
			system("pause");

}
bool Pobeda1(int array[4][4]) {
	bool winner = false;
	int testarray[4][4];
	int count = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			count++;
			if (count == 16)
			{
				count = 0;
			}

			if (array[i][j] == count)
			{
				winner = true;
			}
			else {
				winner = false;
				break;
			}
		}
	}

	return winner;
}
