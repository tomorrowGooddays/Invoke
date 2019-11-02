#include "CaculateData.h"
#include <iostream>

CaculateData::CaculateData()
{
}


CaculateData::~CaculateData()
{
}

Calculate_EXPORTS int Add(int numberA, int numberB)
{
	return numberA + numberB;
}

Calculate_EXPORTS int Subtract(int numberA, int numberB)
{
	return numberA - numberB;
}

Calculate_EXPORTS int Multiplication(int numberA, int numberB)
{
	return numberA * numberB;
}

Calculate_EXPORTS int Divided(int numberA, int numberB)
{
	if (numberB == 0) {
		std::cout << "除数不能为空" << std::endl;
	}
	return numberA / numberB;
}
