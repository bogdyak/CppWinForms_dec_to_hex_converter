#pragma once

char *tenToThreeteen(double tenDigit) // ������� �� 10�� � 16��
{
	int index = 0;
	char *result = new char[40]; // ���������
	if (tenDigit < 0) // ���� ������������� - ����� "-"
	{
		result[index++] = '-';
		tenDigit *= -1;
	}
	int lenLeftPart = 0; // ����� ����� �����
	long long leftPart = (long long)tenDigit; // ���� ����� (�����) ����� �������� �����
	if (leftPart == 0) // ���� ��� ������ ���
	{
		result[index++] = '0';
	}
	else // ����� ��������� ����� ����� � ������� ��
	{
		char buf[40]; // ������������ ������� ����������
		while(leftPart!=0)
		{
			int c = leftPart % 16;
			buf[lenLeftPart++] = (c < 10) ? (c + '0') : (c - 10 + 'A');
			leftPart /= 16;
		}
		for (int i = 0; i < lenLeftPart; i++) // �������������� � ���������� ���
		{
			result[index++] = buf[lenLeftPart - 1 - i];
		}
	}

	double rightPart = tenDigit - (long long)tenDigit;
	if (rightPart > (int)rightPart) //&& >= 0.00000000000000000001)
	result[index++] = ','; // ���� ��������� ����� � ������� �����
	//else result[index++] = '\0';
	for (int i = 0; i <= 20 && ((rightPart -= (int)rightPart) >= 0.00000000000000000001); i++) // ������� ������� ����� (�������� 17 ������ ����� �������)
	{
		rightPart *= 16;
		int c = (int)(rightPart);
		result[index++] = (c < 10) ? (c + '0') : (c - 10 + 'A');
	}
	result[index] = '\0';
	return result;
	
}