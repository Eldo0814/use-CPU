#include <iostream>
#include <windows.h>
#include <fstream>
using namespace std;
int main()
{
	FreeConsole();
	int i;
	i = 10;
		ofstream CPU;
	CPU.open("CPU.txt");
	while (1)
	{
		CPU << i;
			i++;
	}
	CPU.close();
}