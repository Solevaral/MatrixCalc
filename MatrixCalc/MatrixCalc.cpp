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
	int Ynum[2]{};

	for (int i = 0; i < num; i++)
	{
		std::cout << "Xnum: " << Xnum[i] << "\n";
		std::cout << "Ynum: " << Ynum[i] << "\n";
	}
	while (i1 < num)
	{	
		cout << "Enter a variable: "; 
		// ввод чисел в массив

		if (i1 == num / 2)
		{
			cin >> Ynum[i1];
		}
		else
		{
			cin >> Xnum[i1];
		}

		i1++;
		cout << "Entered: " << i1 << "/" << num << endl;

	}
	for (int i = 0; i < num; i++)
	{
		std::cout << "Xnum: " << Xnum[i] << "\n";
		std::cout << "Ynum: " << Ynum[i] << "\n";
	}

}