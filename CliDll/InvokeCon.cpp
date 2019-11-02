#include "InvokeCon.h"

InvokeCon::InvokeCon()
{
}

int InvokeCon::AddCli(int numberA, int numberB)
{
	return Add(numberA, numberB);
}

int InvokeCon::SubtractCli(int numberA, int numberB)
{
	return Subtract(numberA, numberB);
}

int InvokeCon::MultiplicationCli(int numberA, int numberB)
{
	return Multiplication(numberA, numberB);
}

int InvokeCon::DividedCli(int numberA, int numberB)
{
	return Divided(numberA, numberB);
}
