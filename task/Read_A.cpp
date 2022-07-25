#include <iostream>
#include <io.h>
#include "Read_A.h"
using std::cout;
using std::endl;

// Читает текстовый файл и выводит.
void Read_A::v_Display(const char* path)
{
	system("cls");
	FILE* f_read = nullptr;
	fopen_s(&f_read, path, "r");
	if (f_read == nullptr)
	{
		perror("Error opening");
		return;
	}
	const int lenght = _filelength(_fileno(f_read));
	char* arr = new char[lenght] {'\0'};
	char buffer[300];

	while (fgets(buffer, lenght, f_read))
		strcat_s(arr, lenght, buffer);
	fclose(f_read);

	system("cls");
	cout << arr
		<< endl;
}

// Читает и выводит содержимое текстового файла в консоль, в виде ASCIIкодов символов.
void Read_B::v_Display(const char* path)
{
	system("cls");
	FILE* f_read = nullptr;
	fopen_s(&f_read, path, "r");
	if (f_read == nullptr)
	{
		perror("Error opening");
		return;
	}
	const int lenght = _filelength(_fileno(f_read));
	char* arr = new char[lenght] {'\0'};
	char buffer[300];

	while (fgets(buffer, lenght, f_read))
		strcat_s(arr, lenght, buffer);
	fclose(f_read);

	system("cls");
	for (int i = 0; i < lenght; i++)
	{
		cout << int(arr[i]);
		if (int(arr[i] == 10))
			cout << '\n';
	}
	cout << endl;
}

// Читает и выводит содержимое текстового файла в консоль, в шестнадцатеричном виде.
void Read_C::v_Display(const char* path)
{
	system("cls");
	FILE* f_read = nullptr;
	fopen_s(&f_read, path, "r");
	if (f_read == nullptr)
	{
		perror("Error opening");
		return;
	}
	const int lenght = _filelength(_fileno(f_read));
	char* arr = new char[lenght] {'\0'};
	char buffer[300];

	while (fgets(buffer, lenght, f_read))
		strcat_s(arr, lenght, buffer);
	fclose(f_read);

	system("cls");
	for (int i = 0; i < lenght; i++)
	{
		//cout << int(arr[i]);
		printf("%x", arr[i]);
		if (int(arr[i] == 10))
			cout << '\n';
	}
	cout << endl;
}