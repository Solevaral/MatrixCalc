#include <iostream>
using namespace std;
int main()
{
	int i1{}; // счётчик введеных чисел

	const int x1 = 2, y1 = 2; //ПЕРВЫЕ x - строки, y - столбцы
	const int x2 = 2, y2 = 2; //ВТОРЫЕ x - строки, y - столбцы

	//ПЕРВЫЙ многовмерный массив в виде таблицы
	int XYnum1[x1][y1]
	{
		{0,0},
		{0,0}
	}; 

	//ВТОРОЙ многовмерный массив в виде таблицы
	int XYnum2[x2][y2]
	{
		{0,0},
		{0,0}
	};

	//Ввод ПЕРВОГО многомерного массива
	cout << "Enter the first matrix: ";
	for (int i = 0; i < x1; i++)
	{
		for (int j = 0; j < y1; j++)
		{
			cin >> XYnum1[i][j];
		}
	}
	cout << "First matrix is complete!" << endl;

	//Ввод ВТОРОГО многомерного массива
	cout << "Enter the second matrix: ";
	for (int i = 0; i < x2; i++)
	{
		for (int j = 0; j < y2; j++)
		{
			cin >> XYnum2[i][j];
		}
	}
	cout << "Second matrix is complete!" << endl;

	cout << "First matrix: " << endl;
	//Вывод ПЕРВОГО многомерного массива
	for (int i = 0; i < x1; i++) 
	{
		for (int j = 0; j < y1; j++)
		{
			std::cout << XYnum1[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	cout << "Second matrix: " << endl;
	//Вывод ВТОРОГО многомерного массива
	for (int i = 0; i < x2; i++)
	{
		for (int j = 0; j < y2; j++)
		{
			std::cout << XYnum2[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl << "Result matrix: " << endl;
	const int x{x1}, y{y1};
	int result[x][y]//результирующая сумма
	{
		{0,0},
		{0,0}
	};
	
	//Сумма двух массивов
	for (int i{}; i < x1; i++)
	{
		for (int j{}; j < y1; j++) 
		{
			result[i][j] = XYnum1[i][j] + XYnum2[i][j];
		}
	}



	//Вывод РЕЗУЛЬТАТИРУЮЩЕГО многомерного массива
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			std::cout << result[i][j] << " ";
		}
		std::cout << std::endl;
	}

	//Вывод одномерного массива
	/*for (int i = 0; i < a; i++)
	{
		cout << XYnum[i] << " ";
	}
	cout << endl;
	for (int i = a; i < a+a; i++)
	{
		cout << XYnum[i] << " ";
	}*/

	//проверка на мусорность массивов
	/*for (int i = 0; i < num; i++)
	{
		std::cout << "xnum: " << xnum[i] << "\n";
		std::cout << "ynum: " << ynum[i] << "\n";
	}*/

	//свитч система --> пока нет
	/*cout << "\n[1] - continue \n[2] - back\n"; cin >> choice;
switch (choice)
{

case 1:
	cout << "1 tak 1";
	break;
case 2:
	cout << "2 tak 2";
	break;
default:
	cout << "there is no such answer option";
	break;
}*/

	//Блок ввода чисел от руки - не работает из за невозможности ввести значения в размер массива
	/*
int a{}; //кол-во строк
int b{}; //кол-во столбцов

cout << "enter the number of lines(a): "; cin >> a; //вводим кол-во строк
cout << "enter the number of columns(b): "; cin >> b; //вводим кол-во столбцов

int num = a * b; //общее количество элементов в матрице
cout << "total number of elements in the matrix: " << num << endl << endl;*/

}