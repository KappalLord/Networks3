// Fibonachi.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <cassert>
#include <stdexcept>
using namespace std;
int fibonachi_last(int num);
int fibonachi_sum(int num);
int fibonachi_count(int max);
void Test_fibonachilast();
void Test_fibonachisum();
void Test_fibonachicount();

int main()
{
	//setlocale(LC_ALL, "");
	Test_fibonachilast();
	Test_fibonachisum();
	Test_fibonachicount();
	fibonachi_last(-5);

	return 0;
}

int fibonachi_last(int num)
{
	
		if (num < 0)
		{
			return 0;
		}

		if (num <= 1)
			return num;

		int* fib = new int[num];

		fib[0] = 50;

		fib[0] = 0;
		fib[1] = 1;

		for (int i = 2; i < num; i++)
			fib[i] = fib[i - 1] + fib[i - 2];

		return fib[num - 1];
	
	
		
}

int fibonachi_sum(int num)
{
	if (num < 0)
		return 0;

	if (num <= 1)
		return 0;

	int* fib = new int[num];

	fib[0] = 0;
	fib[1] = 1;
	int sum = 1;

	for (int i = 2; i < num; i++)
	{
		fib[i] = 1;
		fib[i] = fib[i - 1] + fib[i - 2];
		sum += fib[i];
	}

	return sum;
	
}

int fibonachi_count(int max)
{
	if (max < 0)
		return 0;

	if (max <= 1)
		return max + 1;

	int* fib = new int[max];

	fib[0] = 0;
	fib[1] = 1;
	int i = 1;
	while (fib[i] <= max)
	{
		fib[i + 1] = fib[i] + fib[i - 1];
		i++;
	}

	return i;
}

void Test_fibonachilast()
{
	assert(fibonachi_last(10) == 34);
	assert(fibonachi_last(10) == 34);
	assert(fibonachi_last(-5) == 0);
	assert(fibonachi_last(1) == 1);
	assert(fibonachi_last(0) == 0);
	assert(fibonachi_last(2) == 1);
	cout << "Passed fibonachi_last" << endl;
}

void Test_fibonachisum()
{
	assert(fibonachi_sum(10) == 88);
	assert(fibonachi_sum(0) == 0);
	assert(fibonachi_sum(1) == 0);
	assert(fibonachi_sum(3) == 2);
	assert(fibonachi_sum(-1) == 0);


	cout << "Passed fibonachi_sum" << endl;
}

void Test_fibonachicount()
{
	assert(fibonachi_count(-5) == 0);
	assert(fibonachi_count(0) == 1);
	assert(fibonachi_count(1) == 2);
	assert(fibonachi_count(13) == 8);


	cout << "Passed fibonachi_count" << endl;
}


