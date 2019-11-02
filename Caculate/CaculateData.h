#pragma once


#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#ifdef CaculateDLL_EXPORTS
#define Calculate_EXPORTS __declspec(dllexport)
#else
#define Calculate_EXPORTS __declspec(dllimport)
#endif

extern "C" Calculate_EXPORTS int Add(int numberA, int numberB);

extern "C" Calculate_EXPORTS int Subtract(int numberA, int numberB);

extern "C" Calculate_EXPORTS int Multiplication(int numberA, int numberB);

extern "C" Calculate_EXPORTS  int Divided(int numberA, int numberB);

class CaculateData
{
public:
	CaculateData();
	~CaculateData();

};

