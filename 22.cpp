/*#include <iostream>;
int main() {
	setlocale(LC_ALL, "ru");
	int n, m;*/
	//Задача 2 делители чисел из диапазона
	/*std::cout << "Введите начало диапазона ->";
	std::cin >> n;
	std::cout << "Введите конец диапазона ->";
	std::cin >> m;
	int counter;                        // счетчик кол ва делителей ткущего числа
	for (int i = n; i <= m; i++) {      //перебор всех чисел из введеного диапазона
		counter = 0;//обнуление счетчика для каждого нового числа
		for (int j = 1; j <= i; j++) {  // перебор чисел от 1 до i для подчета кол ва делителей числа i
			if (i % j == 0)
				counter++;
		}
		std::cout << i << " - " << counter << "\n";

	}
	std::cout << "\n";
	*/
	//Задача 5. Лесница
	/*std::cout << "Введите ширину лесницы -> ";
	std::cin >> n;
	std::cout << "Введите высоту лесницы -> ";
	std::cin >> m;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (j == 0 || j == n - 1)
				std::cout << "# ";
			else if (i % 2 == 0)
				std::cout << "- ";
			else
				std::cout << "  ";
			

		}
		std::cout << "\n";
	}
	std::cout << "\n";
	*/
	//Задача 6.1 Cовершенное число
	/*std::cout << "Введите число -> ";
	std::cin >> n;
	int sum1 = 0;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			sum1 += i;
	if (sum1 == n)
		std::cout << "Число " << n << " Совершенное \n\n";
	else
		std::cout << "Число " << n << " Не является Совершеным \n\n";
*/
	//Задача 6.2 Совершенные числа
	/*std::cout << "Несколько первых совершенных чисел: \n";
	int sum2;
	for (int i = 1; i <= 10000; i++) {
		sum2 = 0;
		for (int j = 1; j < i; j++) {
			if (i % j == 0)
				sum2 += j;

		}
		if (i == sum2)
			std::cout << i << " ";

	}
	std::cout << "\n\n";
	*/

	//Задача 7. Угадайка
	/*std::cout << "Задача 7. Давай сыграем в игру";
	std::cout << "Я загодал число от 1 до 500, попробуй угадать его ";
	const int magic = 304;

	
	for (int i = 1;i<=5000 ;i++ ) {
		std::cout << " Число -> ";
		std::cin >> n;
		if (n == magic) {
			std::cout << " Верно "<<"С " << i << " попытки вы отгадали";
			break;
		}
		if (n < magic) {
			std::cout << " Больше ";
		}
		if (n > magic) {
			std::cout << " Меньше ";
		}
		
	}
	
	*/
	
