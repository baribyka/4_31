/*#include <iostream>;
int main() {
	setlocale(LC_ALL, "ru");
	int n, m;*/
	//������ 2 �������� ����� �� ���������
	/*std::cout << "������� ������ ��������� ->";
	std::cin >> n;
	std::cout << "������� ����� ��������� ->";
	std::cin >> m;
	int counter;                        // ������� ��� �� ��������� ������� �����
	for (int i = n; i <= m; i++) {      //������� ���� ����� �� ��������� ���������
		counter = 0;//��������� �������� ��� ������� ������ �����
		for (int j = 1; j <= i; j++) {  // ������� ����� �� 1 �� i ��� ������� ��� �� ��������� ����� i
			if (i % j == 0)
				counter++;
		}
		std::cout << i << " - " << counter << "\n";

	}
	std::cout << "\n";
	*/
	//������ 5. �������
	/*std::cout << "������� ������ ������� -> ";
	std::cin >> n;
	std::cout << "������� ������ ������� -> ";
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
	//������ 6.1 C���������� �����
	/*std::cout << "������� ����� -> ";
	std::cin >> n;
	int sum1 = 0;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			sum1 += i;
	if (sum1 == n)
		std::cout << "����� " << n << " ����������� \n\n";
	else
		std::cout << "����� " << n << " �� �������� ���������� \n\n";
*/
	//������ 6.2 ����������� �����
	/*std::cout << "��������� ������ ����������� �����: \n";
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

	//������ 7. ��������
	/*std::cout << "������ 7. ����� ������� � ����";
	std::cout << "� ������� ����� �� 1 �� 500, �������� ������� ��� ";
	const int magic = 304;

	
	for (int i = 1;i<=5000 ;i++ ) {
		std::cout << " ����� -> ";
		std::cin >> n;
		if (n == magic) {
			std::cout << " ����� "<<"� " << i << " ������� �� ��������";
			break;
		}
		if (n < magic) {
			std::cout << " ������ ";
		}
		if (n > magic) {
			std::cout << " ������ ";
		}
		
	}
	
	*/
	
