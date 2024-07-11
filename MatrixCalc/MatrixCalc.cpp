#include <iostream>
using namespace std;
int main()
{
	int a{}; //кол-во строк
	int b{}; //кол-во столбцов

	cout << "Enter the number of lines(a): "; cin >> a; //вводим кол-во строк
	cout << "Enter the number of columns(b): "; cin >> b; //вводим кол-во столбцов

	int num = a * b; //общее количество элементов в матрице
	cout << "Total number of elements in the matrix: " << num << endl << endl;

	//свитч система, пока нет
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

	int i1{}; // счётчик введеных чисел

	int Xnum[2]{};
	int Ynum[4]{};

	//проверка на мусорность массивов
	/*for (int i = 0; i < num; i++)
	{
		std::cout << "xnum: " << xnum[i] << "\n";
		std::cout << "ynum: " << ynum[i] << "\n";
	}*/

	while (i1 < num)
	{	
		cout << "Enter a variable: " << endl;
		// ввод чисел в массив

		if (i1 >= a)
		{
			cout << "a = " << a << endl;
			cout << "i1 = " << i1 << endl;
			cout << "Enter Ynum: ";
			cin >> Ynum[i1];
		}
		else 
		{
			cout << "a = " << a << endl;
			cout << "i1 = " << i1 << endl;
			cout << "Enter Xnum: ";
			cin >> Xnum[i1];
		}

		i1++;
		cout << "Entered: " << i1 << "/" << num << endl << endl;

	}
	for (int i = 0; i < a; i++)
	{
		cout << "Xnum: " << Xnum[i] << "\n";
	}
	for (int i = b; i < a + b; i++)
	{
		cout << "Ynum: " << Ynum[i] << "\n";
	}
}