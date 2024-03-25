#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

int main() {
	int n;
	setlocale(LC_ALL, "Russian");
	//Задача 1 Сортировка первых N элиментов
	std::cout << "Задача 1ю \n Изначальный массив: \n";
	const int size1 = 10;
	int arr1[size1];
	srand(time(NULL));
	for (int i = 0; i < size1; i++) {

		arr1[i] = rand() % (20 + 1 - 10) + 10;//(10;20

		std::cout << arr1[i] << ' ';
	}
		std::cout << std::endl;//Перенос курсора на следующию строку в консоли и очищение буфера потока вывода
		std::cout << "Введите кол во элиментов для сартировки ";
		//Сортировка пузырьком
		//std::cin >> n;
		//for (int i = n- 1; i > 0; i--)
		//	for (int j = 0; j <i; j++)
		//		if (arr1[j] > arr1[j + 1])
			//		std::swap(arr1[j], arr1[j + 1]);
		//Быстрая сортировка
	std::sort(arr1, arr1 +n);

		std::cout << "Итоговый массив: \n";
		for (int i = 0; i < size1; i++)
			std::cout << arr1[i] << ' ';
		std::cout<< "\n\n";
		
	//Задача 2 Температура в Январе
	std::cout << "Задача 2. массив: \n";
	const int size2 = 31;
		int arr2[size2];
		srand(time(NULL));
		for (int i = 0; i < size2; i++) {

			arr2[i] = rand() % (-5 + 1 - (-30)) + (-30);//-30;-5
			std::cout << arr2[i] << ' ';
		}

		std::cout << std::endl;

		std::cout << "Введите число -> ";
		std::cin >> n;
		int counter = 0;
			int sum = 0;
			for (int i = 0; i < size2; i++) {
				sum += arr2[i];
				if (arr2[i] < n)
					counter++;
			}
			std::cout << "Среднее арифм. = " << double(sum) / size2 << std::endl;
			std::cout << "Кол во чисел .следующих условию = " << counter << "\n\n";
			
	int m;
	//Задача 3 Вхождение в диапозон
	std::cout << "Введите начало диапозона -> ";
	std::cin>> n;
	std::cout << "Введите конец диапозон -> ";
	std::cin >> m;
	const int size3 = 20;
	int arr3[size3];
	srand(time(NULL));
	for (int i = 0; i < size3; i++) {
		arr3[i] = rand() % 100;//от 0 до 100
		std::cout << i << ". " << arr3[i]<<(arr3[i]>=n&&arr3[i]<=m ? "!" : " ") << std::endl;

	}




	return 0;
}