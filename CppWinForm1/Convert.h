#pragma once

char *tenToThreeteen(double tenDigit) // перевод из 10сс в 16сс
{
	int index = 0;
	char *result = new char[40]; // результат
	if (tenDigit < 0) // если отрицательное - пишем "-"
	{
		result[index++] = '-';
		tenDigit *= -1;
	}
	int lenLeftPart = 0; // длина левой части
	long long leftPart = (long long)tenDigit; // сама левая (целая) часть дробного числа
	if (leftPart == 0) // если там ничего нет
	{
		result[index++] = '0';
	}
	else // иначе переводим целую часть в целевую СС
	{
		char buf[40]; // перевернутый вариант результата
		while(leftPart!=0)
		{
			int c = leftPart % 16;
			buf[lenLeftPart++] = (c < 10) ? (c + '0') : (c - 10 + 'A');
			leftPart /= 16;
		}
		for (int i = 0; i < lenLeftPart; i++) // переворачиваем в нормальный вид
		{
			result[index++] = buf[lenLeftPart - 1 - i];
		}
	}

	double rightPart = tenDigit - (long long)tenDigit;
	if (rightPart > (int)rightPart) //&& >= 0.00000000000000000001)
	result[index++] = ','; // знак разделить целой и дробной части
	//else result[index++] = '\0';
	for (int i = 0; i <= 20 && ((rightPart -= (int)rightPart) >= 0.00000000000000000001); i++) // перевод дробной части (максимум 17 знаков после запятой)
	{
		rightPart *= 16;
		int c = (int)(rightPart);
		result[index++] = (c < 10) ? (c + '0') : (c - 10 + 'A');
	}
	result[index] = '\0';
	return result;
	
}