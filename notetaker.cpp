#include<iostream>
#include<string.h>
#include<fstream>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<ctime>
#include <time.h>
#include <unistd.h>
#include <dos.h>


using namespace std;

int main()
{	//font size change 
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;                   // Width of each character in the font
	cfi.dwFontSize.Y = 24;                  // Height
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	std::wcscpy(cfi.FaceName, L"Consolas"); // Choose your font
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
    
    
    //outputting data to notes.txt 
	ofstream file;
	
	file.open("notes.txt",std::ios_base::app);
	{
	file<<endl<<endl;
	x : ;
	string s;
	string paragraph;
	
//getting input
	do {
 		getline(cin, s);
 		paragraph += s + "\n";
		} while (s.length() > 0);
		file<<paragraph;

	//checking for the enters and if the enters reach 50 then exit the program
	for(int i=0;i<=50;i++)
	{
		char a[100];
		gets(a);
		strcmp(a,"\0");
		if((strcmp(a,"\0"))==0)
		{
			file<<"\n";
			continue;
		} 
		 else
		 {
		 	
		 	file<<a<<"\n";
		 	goto x;
		 }
	}
}	

//cute exit animation 

system("cls");
for(int i=1;i<=100;i=i+5)
{
	cout<<"printing to TXT FILE >>>> "<<i<<endl;
	 sleep(0.01);  
	system("cls");
}
system("cls");
	cout<<"done , now press enter to exit the program";
	getch();
	return 0;
}
