
	//Задание 1
	/*int day1, day2, month1, month2, a;
	
	std::cout << "Введите месяц первой даты 2023 года\n";
	std::cin >> month1;
	if (month1 == 0 || month1 > 12)
	{
		std::cout << "Нет такого месяца";
		exit(0);
	}
	
	std::cout << "Введите число первой даты 2023 года\n";
	std::cin >> day1;
	if (day1 == 0 || day1 > 31)
	{
		std::cout << "Нет такого дня в этом месяце";
		exit(0);
	}
	else if (month1 == 1 && day1 > 31)
	{
		std::cout << "Нет такого дня в этом месяце";
		exit(0);
	}
	else if (month1 == 2 && day1 > 28)
	{
		std::cout << "Нет такого дня в этом месяце";
		exit(0);
	}
	else if (month1 == 3 && day1 > 31)
	{
		std::cout << "Нет такого дня в этом месяце";
		exit(0);
	}
	else if (month1 == 4 && day1 > 30)
	{
		std::cout << "Нет такого дня в этом месяце";
		exit(0);
	}
	else if (month1 == 5 && day1 > 31)
	{
		std::cout << "Нет такого дня в этом месяце";
		exit(0);
	}
	else if (month1 == 6 && day1 > 30)
	{
		std::cout << "Нет такого дня в этом месяце";
		exit(0);
	}
	else if (month1 == 7 && day1 > 31)
	{
		std::cout << "Нет такого дня в этом месяце";
		exit(0);
	}
	else if (month1 == 8 && day1 > 31)
	{
		std::cout << "Нет такого дня в этом месяце";
		exit(0);
	}
	else if (month1 == 9 && day1 > 30)
	{
		std::cout << "Нет такого дня в этом месяце";
		exit(0);
	}
	else if (month1 == 10 && day1 > 31)
	{
		std::cout << "Нет такого дня в этом месяце";
		exit(0);
	}
	else if (month1 == 11 && day1 > 30)
	{
		std::cout << "Нет такого дня в этом месяце";
		exit(0);
	}
	else if (month1 == 12 && day1 > 31)
	{
		std::cout << "Нет такого дня в этом месяце";
		exit(0);
	}
	switch (month1)
	{
	case 1:
		month1 = 0 + day1;
		break;
	case 2:
		month1 = 31 + day1;
		break;
	case 3:
		month1 = 59 + day1;
		break;
	case 4:
		month1 = 90 + day1;
		break;
	case 5:
		month1 = 120 + day1;
		break;
	case 6:
		month1 = 151 + day1;
		break;
	case 7:
		month1 = 181 + day1;
		break;
	case 8:
		month1 = 212 + day1;
		break;
	case 9:
		month1 = 243 + day1;
		break;
	case 10:
		month1 = 273 + day1;
		break;
	case 11:
		month1 = 304 + day1;
		break;
	case 12:
		month1 = 334 + day1;
		break;
	}
	std::cout << "Введите месяц второй даты 2023 года\n";
	std::cin >> month2;
	if (month2 == 0 || month2 > 12)
	{
		std::cout << "Нет такого месяца";
		exit(0);
	}
	std::cout << "Введите число второй даты 2023 года\n";
	std::cin >> day2;
	if (day2 == 0 || day2 > 31)
	{
		std::cout << "Нет такого дня в этом месяце";
		exit(0);
	}
	else if (month2 == 1 && day1 > 31)
	{
		std::cout << "Нет такого дня в этом месяце";
		exit(0);
	}
	else if (month2 == 2 && day1 > 28)
	{
		std::cout << "Нет такого дня в этом месяце";
		exit(0);
	}
	else if (month2 == 3 && day1 > 31)
	{
		std::cout << "Нет такого дня в этом месяце";
		exit(0);
	}
	else if (month2 == 4 && day1 > 30)
	{
		std::cout << "Нет такого дня в этом месяце";
		exit(0);
	}
	else if (month2 == 5 && day1 > 31)
	{
		std::cout << "Нет такого дня в этом месяце";
		exit(0);
	}
	else if (month2 == 6 && day1 > 30)
	{
		std::cout << "Нет такого дня в этом месяце";
		exit(0);
	}
	else if (month2 == 7 && day1 > 31)
	{
		std::cout << "Нет такого дня в этом месяце";
		exit(0);
	}
	else if (month2 == 8 && day1 > 31)
	{
		std::cout << "Нет такого дня в этом месяце";
		exit(0);
	}
	else if (month2 == 9 && day1 > 30)
	{
		std::cout << "Нет такого дня в этом месяце";
		exit(0);
	}
	else if (month2 == 10 && day1 > 31)
	{
		std::cout << "Нет такого дня в этом месяце";
		exit(0);
	}
	else if (month2 == 11 && day1 > 30)
	{
		std::cout << "Нет такого дня в этом месяце";
		exit(0);
	}
	else if (month2 == 12 && day1 > 31)
	{
		std::cout << "Нет такого дня в этом месяце";
		exit(0);
	}
	switch (month2)
	{
	case 1:
		month2 = 0 + day2;
		break;
	case 2:
		month2 = 31 + day2;
		break;
	case 3:
		month2 = 59 + day2;
		break;
	case 4:
		month2 = 90 + day2;
		break;
	case 5:
		month2 = 120 + day2;
		break;
	case 6:
		month2 = 151 + day2;
		break;
	case 7:
		month2 = 181 + day2;
		break;
	case 8:
		month2= 212 + day2;
		break;
	case 9:
		month2 = 243 + day2;
		break;
	case 10:
		month2 = 273 + day2;
		break;
	case 11:
		month2 = 304 + day2;
		break;
	case 12:
		month2 = 334 + day2;
		break;
	}


	a = month2 - month1;
	std::cout << a << " дней Между этими датами ";


	*/





