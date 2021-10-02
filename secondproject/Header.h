#pragma once
#include <iostream>
#include <ctime>
#include <iomanip>
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <fstream>
using namespace std;






void createarray(int size, int array[4][4], int a);

//void PrintArray(int size, int array[4][4]);
void PrintArray1(int size, int array[4][4], int zamen);

void Sortirovka(int rand1, int rand2, int size, int array[4][4], int vrem);

void KnopkaHod(int i, int j, int knopka, int zap, int array[4][4], int zamen);

//bool Pobeda(int array[3][3]);

bool Pobeda1(int array[4][4]);
void Menupob(int knopk2, int lich, char imya[100]);
void Menu();




