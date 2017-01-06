#include <stdio.h>
#include<iostream>
#include<string>

std::string const GetFizzBuzz(int index)
{
	bool isFizz = ((index % 3) == 0);
	bool isBuzz = ((index % 5) == 0);

	std::string str;
	if (isFizz && isBuzz)
	{
		return "Fizz Buzz";
	}
	else if (isFizz)
	{
		return  "Fizz";
	}
	else if (isBuzz)
	{
		return  "Buzz";
	}
	else
	{
		str = std::to_string(index);
	}

	return str;
}

void main()
{
	int LowCount = 1;
	int MaxCount = 100;

	for (int i = LowCount; i < MaxCount; i++)
	{
		std::cout << GetFizzBuzz(i);

		if (i != MaxCount - 1)
		{
			std::cout<<",";
		}
		
	}
}


