#pragma once

class Read_A
{
public:
	// Читает и выводит содержимое текстового файла в консоль.
	virtual void v_Display(const char* path);
};

class Read_B :public Read_A
{
	// Читает и выводит содержимое текстового файла в консоль, в виде ASCIIкодов символов.
	void v_Display(const char* path) override;
};

class Read_C :public Read_A
{
	// Читает и выводит содержимое текстового файла в консоль, в шестнадцатеричном виде.
	void v_Display(const char* path) override;
};