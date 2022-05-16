#include <stdio.h>
#include <conio.h>
#include <windows.h>


void ClearConsoleToColors(int fgc, int bgc) {
	WORD wColor = ((bgc & 0x0F) << 4) + (fgc & 0x0F) ;

	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE) ;

	COORD coord = {0, 0} ; 

	DWORD count ;

	CONSOLE_SCREEN_BUFFER_INFO csbi ; 

	SetConsoleTextAttribute(hStdOut, wColor) ;

	if(GetConsoleScreenBufferInfo(hStdOut, &csbi)) {
		printf("%d %d %c\n",csbi.dwSize.X, csbi.dwSize.Y, csbi.wAttributes);
		FillConsoleOutputCharacter(hStdOut, (TCHAR) 32, csbi.dwSize.X * csbi.dwSize.Y, coord, &count) ;
		FillConsoleOutputAttribute(hStdOut, csbi.wAttributes, csbi.dwSize.X * csbi.dwSize.Y, coord, &count);
	}
}

int main() {
	ClearConsoleToColors(15, 1) ; 
}