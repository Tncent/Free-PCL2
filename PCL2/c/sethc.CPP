//#pragma comment( linker, "/subsystem:windows /entry:mainCRTStartup" )
#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
void print(const char* s,string a,string b ) {
	int front_color, back_color;
	if(a=="black") front_color=0;
	if(a=="blue") front_color=1;
	if(a=="green") front_color=2;
	if(a=="red") front_color=4;
	if(a=="perple") front_color=5;
	if(a=="yellow") front_color=6;
	if(a=="white") front_color=7;
	
	if(b=="black") back_color=0;
	if(b=="blue") back_color=1;
	if(b=="green") back_color=2;
	if(b=="red") back_color=4;
	if(b=="perple") back_color=5;
	if(b=="yellow") back_color=6;
	if(b=="white") back_color=7;
	
	
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, BACKGROUND_INTENSITY | back_color*16 |FOREGROUND_INTENSITY | front_color);
	printf(s);
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | 7);
}
void ptf(const char* s){
	int front_color=time(NULL)%15, back_color=time(NULL)%15-2; 
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, BACKGROUND_INTENSITY | back_color*16 |FOREGROUND_INTENSITY | front_color);
	printf(s);
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | 7);
}
void COLOR_PRINT2(const char* s, int front_color,int back_color) {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, BACKGROUND_INTENSITY | back_color*16 |FOREGROUND_INTENSITY | front_color);
	printf(s);
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | 7);
}
inline void run(string a){
	system(a.c_str());
}
inline void taskkill(string a){
	a.insert(a.length()," taskkill ");
	system(a.c_str());
}
main(){
	HWND hwnd=::FindWindow("ConsoleWindowClass",NULL);
	ShowWindow(hwnd,SW_HIDE);
	while(true){
		if (GetAsyncKeyState(VK_F7)){
			ShowWindow(hwnd,SW_SHOW);
			print("Close!Close!Close!Close!Close!","perple","write");
			Sleep(350);
			ShowWindow(hwnd,SW_HIDE);
			run("cls");
		}
		if (GetAsyncKeyState(VK_F4)){
			run("start C");
			Sleep(350);
		}
		if (GetAsyncKeyState(VK_F6)){
			run("taskkill /f /im c.exe && taskkill /f /im javaw.exe");
			Sleep(60);
		}
		if (GetAsyncKeyState(VK_F2)&&GetAsyncKeyState(VK_F12)){
			return 0;
		}
	}
}
