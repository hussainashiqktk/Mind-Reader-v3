#include<iostream>
#include<stdio.h>
#include<windows.h>
#include<string>
#include<conio.h>
using namespace std;
//___________________________fucntions

void setConsoleForTheGame();
void showArray(int arr[2][8]);
void whichRow();
void loadScreen();
void secretNumMsg();
class NumbersASCII{
	public:
		void n1(){
			string n1 = R"(
                   .----------------.   
                  | .--------------. |  
                  | |     __       | |  
                  | |    /  |      | |  
                  | |    `| |      | |  
                  | |     | |      | |  ONE
                  | |    _| |_     | |  
                  | |   |_____|    | |  
                  | |              | |  
                  | '--------------' |  
                   '----------------'   

			)";
			cout << n1;
		}
		void n2(){
			string n2 = R"(
                   .----------------.   
                  | .--------------. |  
                  | |    _____     | |  
                  | |   / ___ `.   | |  
                  | |  |_/___) |   | |  
                  | |   .'____.'   | |  	TWO
                  | |  / /____     | |  
                  | |  |_______|   | |  
                  | |              | |  
                  | '--------------' |  
                   '----------------'   

			)";
			cout << n2;
		}
		void n3(){
			string n3 = R"(
                   .----------------.   
                  | .--------------. |  
                  | |    ______    | |  
                  | |   / ____ `.  | |  
                  | |   `'  __) |  | |  
                  | |   _  |__ '.  | |  THREE
                  | |  | \____) |  | |  
                  | |   \______.'  | |  
                  | |              | |  
                  | '--------------' |  
                   '----------------'   
			)";
			cout << n3;
		}
		void n4(){
			string n4 = R"(
                   .----------------.   
                  | .--------------. |  
                  | |   _    _     | |  
                  | |  | |  | |    | |  
                  | |  | |__| |_   | |  
                  | |  |____   _|  | |  	FOUR
                  | |      _| |_   | |  
                  | |     |_____|  | |  
                  | |              | |  
                  | '--------------' |  
                   '----------------'              '----------------'   
			)";
			cout << n4;
		}
		void n5(){
			string n5 = R"(
                    .----------------.   
                  | .--------------. |  
                  | |   _______    | |  
                  | |  |  _____|   | |  
                  | |  | |____     | |  
                  | |  '_.____''.  | |  FIVE
                  | |  | \____) |  | |  
                  | |   \______.'  | |  
                  | |              | |  
                  | '--------------' |  
                   '----------------'   
			)";
			cout << n5;
		}
		void n6(){
			string n6 = R"(
                       __   
                     / /   
                    / /_   
                   | '_ \  	SIX
                   | (_) | 
                    \___/  
                           
                           
			)";
			cout << n6;
		}
		void n7(){
			string n7 = R"(
                    .----------------.   
                  | .--------------. |  
                  | |   _______    | |  
                  | |  |  ___  |   | |  
                  | |  |_/  / /    | |  
                  | |      / /     | |  SEVEN
                  | |     / /      | |  
                  | |    /_/       | |  
                  | |              | |  
                  | '--------------' |  
                   '----------------'   
			)";
			cout << n7;
		}
		void n8(){
			string n8 = R"(
                    .----------------.   
                  | .--------------. |  
                  | |     ____     | |  
                  | |   .' __ '.   | |  
                  | |   | (__) |   | |  
                  | |   .`____'.   | |  	EIGHT
                  | |  | (____) |  | |  
                  | |  `.______.'  | |  
                  | |              | |  
                  | '--------------' |  
                   '----------------'   
			)";
			cout << n8;
		}
		void n9(){
			string n9 = R"(
                      ___   
                    / _ \  
                   | (_) | 
                    \__, | 		NINE
                      / /  
                     /_/   
                           
                           
			)";
			cout << n9;
		}
		void n10(){
			string n10 = R"(
                     __    ___   
                   /_ |  / _ \  
                    | | | | | | 
                    | | | | | | 	TEN
                    | | | |_| | 
                    |_|  \___/  
                                
                                
			)";
			cout << n10;
		}
		void n11(){
			string n11 = R"(
                     __   __  
                   /_ | /_ | 
                    | |  | | 
                    | |  | | 		ELEVEN
                    | |  | | 
                    |_|  |_| 
                             
                             
			)";
			cout << n11;
		}
		void n12(){
			string n12 = R"(
                    __   ___   
                   /_ | |__ \  
                    | |    ) | 
                    | |   / /  		TWELVE
                    | |  / /_  
                    |_| |____| 
                               
                                
			)";
			cout << n12;
		}
		void n13(){
			string n13 = R"(
                     __   ____   
                   /_ | |___ \  
                    | |   __) | 
                    | |  |__ <  	THIRTEEN
                    | |  ___) | 
                    |_| |____/  
                                
                                
			)";
			cout << n13;
		}
		void n14(){
			string n14 = R"(
                     __   _  _    
                   /_ | | || |   
                    | | | || |_  
                    | | |__   _| 	FOURTEEN
                    | |    | |   
                    |_|    |_|   
                                 
                                 
			)";
			cout << n14;
		}				
		void n15(){
			string n15 = R"(
                     __   _____  
                   /_ | | ____| 
                    | | | |__   
                    | | |___ \         FIFTEEN
                    | |  ___) | 
                    |_| |____/  
                                
                                
			)";
			cout << n15;
		}
		void n16(){
			string n16 = R"(
                     __     __   
                   /_ |   / /   
                    | |  / /_   
                    | | | '_ \     SIXTEEN
                    | | | (_) | 
                    |_|  \___/  
                                
                                
			)";
			cout << n16;
		}		
};
//-_______________________DRIVER CODE_____________
int main()
{	
startGame:
	setConsoleForTheGame();
	int startArr[2][8] = {{1,2,3,4,5,6,7,8}, {9,10,11,12,13,14,15,16}};
	int round1[2][8];
	int round2[2][8];
	int round3[2][8];
	int round4[2][8];
	char inp1, inp2, inp3, inp4;
	loadScreen();
	cout << "\n Press any key to start.";
	getch();
	system("cls");
	showArray(startArr);
//------------------------------------round1
	inp1 = getch();
	if(inp1 == '1'){
		round1[0][0] = startArr[0][7];
  		round1[0][1] = startArr[1][7];
  		round1[0][2] = startArr[0][6];
  		round1[0][3] = startArr[1][6];
  		round1[0][4] = startArr[0][5];
  		round1[0][5] = startArr[1][5];
  		round1[0][6] = startArr[0][4];
  		round1[0][7] = startArr[1][4];
  		round1[1][0] = startArr[0][3];
  		round1[1][1] = startArr[1][3];
  		round1[1][2] = startArr[0][2];
  		round1[1][3] = startArr[1][2];
  		round1[1][4] = startArr[0][1];
  		round1[1][5] = startArr[1][1];
  		round1[1][6] = startArr[0][0];
  		round1[1][7] = startArr[1][0];
		  	
	}else if(inp1 == '2'){
		
		round1[0][0] = startArr[1][7];
 		round1[0][1] = startArr[0][7];
  		round1[0][2] = startArr[1][6];
  		round1[0][3] = startArr[0][6];
  		round1[0][4] = startArr[1][5];
  		round1[0][5] = startArr[0][5];
  		round1[0][6] = startArr[1][4];
  		round1[0][7] = startArr[0][4];
  		round1[1][0] = startArr[1][3];
  		round1[1][1] = startArr[0][3];
  		round1[1][2] = startArr[1][2];
  		round1[1][3] = startArr[0][2];
  		round1[1][4] = startArr[1][1];
  		round1[1][5] = startArr[0][1];
  		round1[1][6] = startArr[1][0];
  		round1[1][7] = startArr[0][0];
  		
	}
	system("cls");
	//change console text color to blue
	system("color 3");
	showArray(round1);
	
//---------------------------------round2-------------------------------

//	cin >> inp2;
	inp2 = getch();
	
	if(inp2 == '1'){
		round2[0][0] = round1[0][7];
  		round2[0][1] = round1[1][7];
  		round2[0][2] = round1[0][6];
  		round2[0][3] = round1[1][6];
  		round2[0][4] = round1[0][5];
  		round2[0][5] = round1[1][5];
  		round2[0][6] = round1[0][4];
  		round2[0][7] = round1[1][4];
  		round2[1][0] = round1[0][3];
  		round2[1][1] = round1[1][3];
  		round2[1][2] = round1[0][2];
  		round2[1][3] = round1[1][2];
  		round2[1][4] = round1[0][1];
  		round2[1][5] = round1[1][1];
  		round2[1][6] = round1[0][0];
  		round2[1][7] = round1[1][0];
		  	
	}else if(inp2 == '2'){
		
		round2[0][0] = round1[1][7];
 		round2[0][1] = round1[0][7];
  		round2[0][2] = round1[1][6];
  		round2[0][3] = round1[0][6];
  		round2[0][4] = round1[1][5];
  		round2[0][5] = round1[0][5];
  		round2[0][6] = round1[1][4];
  		round2[0][7] = round1[0][4];
  		round2[1][0] = round1[1][3];
  		round2[1][1] = round1[0][3];
  		round2[1][2] = round1[1][2];
  		round2[1][3] = round1[0][2];
  		round2[1][4] = round1[1][1];
  		round2[1][5] = round1[0][1];
  		round2[1][6] = round1[1][0];
  		round2[1][7] = round1[0][0];
	}
	else {
		cout << "Wrong key pressed. Starting from Start !";
		goto startGame;
	}
	system("cls");
	// change console text color to green
	system("color 4");
	showArray(round2);
//-----------------------------------------------round 3
	//cin >> inp3;
	inp3 = getch();
	
	if(inp3 == '1'){
		round3[0][0] = round2[0][7];
  		round3[0][1] = round2[1][7];
  		round3[0][2] = round2[0][6];
  		round3[0][3] = round2[1][6];
  		round3[0][4] = round2[0][5];
  		round3[0][5] = round2[1][5];
  		round3[0][6] = round2[0][4];
  		round3[0][7] = round2[1][4];
  		round3[1][0] = round2[0][3];
  		round3[1][1] = round2[1][3];
  		round3[1][2] = round2[0][2];
  		round3[1][3] = round2[1][2];
  		round3[1][4] = round2[0][1];
  		round3[1][5] = round2[1][1];
  		round3[1][6] = round2[0][0];
  		round3[1][7] = round2[1][0];
		  	
	}else if(inp3 == '2'){
		
		round3[0][0] = round2[1][7];
 		round3[0][1] = round2[0][7];
  		round3[0][2] = round2[1][6];
  		round3[0][3] = round2[0][6];
  		round3[0][4] = round2[1][5];
  		round3[0][5] = round2[0][5];
  		round3[0][6] = round2[1][4];
  		round3[0][7] = round2[0][4];
  		round3[1][0] = round2[1][3];
  		round3[1][1] = round2[0][3];
  		round3[1][2] = round2[1][2];
  		round3[1][3] = round2[0][2];
  		round3[1][4] = round2[1][1];
  		round3[1][5] = round2[0][1];
  		round3[1][6] = round2[1][0];
  		round3[1][7] = round2[0][0];
	}
	system("cls");
	// change console text color to green
	system("color 6");
	showArray(round3);
//----------------------------------------------fourth round--------

	inp4 = getch();
	
	if(inp4 == '1'){
		round4[0][0] = round3[0][7];
  		round4[0][1] = round3[1][7];
  		round4[0][2] = round3[0][6];
  		round4[0][3] = round3[1][6];
  		round4[0][4] = round3[0][5];
  		round4[0][5] = round3[1][5];
  		round4[0][6] = round3[0][4];
  		round4[0][7] = round3[1][4];
  		round4[1][0] = round3[0][3];
  		round4[1][1] = round3[1][3];
  		round4[1][2] = round3[0][2];
  		round4[1][3] = round3[1][2];
  		round4[1][4] = round3[0][1];
  		round4[1][5] = round3[1][1];
  		round4[1][6] = round3[0][0];
  		round4[1][7] = round3[1][0];
		  	
	}else if(inp4 == '2'){
		
		round4[0][0] = round3[1][7];
 		round4[0][1] = round3[0][7];
  		round4[0][2] = round3[1][6];
  		round4[0][3] = round3[0][6];
  		round4[0][4] = round3[1][5];
  		round4[0][5] = round3[0][5];
  		round4[0][6] = round3[1][4];
  		round4[0][7] = round3[0][4];
  		round4[1][0] = round3[1][3];
  		round4[1][1] = round3[0][3];
  		round4[1][2] = round3[1][2];
  		round4[1][3] = round3[0][2];
  		round4[1][4] = round3[1][1];
  		round4[1][5] = round3[0][1];
  		round4[1][6] = round3[1][0];
  		round4[1][7] = round3[0][0];
	}
	else {
		cout << "Wrong key pressed. Starting from Start !";
		Sleep(1);
		goto startGame;
	}
		
	system("cls");
	// change console text color to green
	system("color 5");
	showArray(round4);
	
	inp4 = getch();
	int secretNum;
	if(inp4 == '1')
		secretNum = round4[0][2];
	else if(inp4 == '2')
		secretNum = round4[1][2];
		
	// change console text color to white
	system("color 8");
	system("cls");
	secretNumMsg();
//	cout << "\n" << secretNum;
	
	NumbersASCII num; // object
	switch(secretNum) {
		case 1: num.n1(); break;
		case 2: num.n2(); break;
		case 3: num.n3(); break;
		case 4: num.n4(); break;
		case 5: num.n5(); break;
		case 6: num.n6(); break;
		case 7: num.n7(); break;
		case 8: num.n8(); break;
		case 9: num.n9(); break;
		case 10: num.n10(); break;
		case 11: num.n11(); break;
		case 12: num.n12(); break;
		case 13: num.n13(); break;
		case 14: num.n14(); break;
		case 15: num.n15(); break;
		case 16: num.n16(); break;
		
	}

//--------------------------------------------------
	cout << "\n\nWant to play again? Enter 1 for yes,  0 for exitting : ";
	int replay;
	cin >> replay;
	if(replay == 1){
		system("cls");
		goto startGame;
	}
	else {
		cout << "\n\nGood bye !";
		//coderInfo();
	}
 	return 0;
 }




void setConsoleForTheGame() {
	//-----maximize console window
	HWND hWnd = GetConsoleWindow();
	ShowWindow(hWnd,SW_SHOWMAXIMIZED);
	// change console text color to green
	system("color 2");
	CONSOLE_FONT_INFOEX cfi;
cfi.cbSize = sizeof(cfi);
cfi.nFont = 0;
cfi.dwFontSize.X = 0;                   // Width of each character in the font
cfi.dwFontSize.Y = 20;                  // Height
cfi.FontFamily = FF_DONTCARE;
cfi.FontWeight = FW_NORMAL;
std::wcscpy(cfi.FaceName, L"Consolas"); // Choose your font
SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
}
void whichRow() {
	string whichRow = R"(
 _       _  _                _            ___                           _   
( )  _  ( )( )     _        ( )          |  _`\                       /'_`\ 
| | ( ) | || |__  (_)   ___ | |__        | (_) )   _    _   _   _    (_) ) |
| | | | | ||  _ `\| | /'___)|  _ `\      | ,  /  /'_`\ ( ) ( ) ( )      /'/'
| (_/ \_) || | | || |( (___ | | | |      | |\ \ ( (_) )| \_/ \_/ |     |_|  
`\___x___/'(_) (_)(_)`\____)(_) (_)      (_) (_)`\___/'`\___x___/'     (_)                                                                    

           .'\   /`.
         .'.-.`-'.-.`.
    ..._:   .-. .-.   :_...
  .'    '-.(o ) (o ).-'    `.
 :  _    _ _`~(_)~`_ _    _  :
:  /:   ' .-=_   _=-. `   ;\  :		Press 1 if your num is in first row, else press 2.
:   :|-.._  '     `  _..-|:   :
 :   `:| |`:-:-.-:-:'| |:'   :
  `.   `.| | | | | | |.'   .'
    `.   `-:_| | |_:-'   .'
      `-._   ````    _.-'
	)";
	for(int i=0; whichRow[i] != '\0'; i++) {
		cout << whichRow[i];
		usleep(100);
	}
}
void showArray(int arr[2][8]){
	cout << "\n\n\t####################################################\n\n\n\t\t";
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<8; j++)
		{
			cout << arr[i][j] << "  ";
			Sleep(100);
		}
		cout << "\n\n\t\t";
	}
	cout << "\n";
	cout << "\n\t####################################################\n\n";
	whichRow();
}
void loadScreen() {
	
	string loadScreen = R"(
/ / /\ \ \___| | ___ ___  _ __ ___   ___              | |_ ___  
\ \/  \/ / _ \ |/ __/ _ \| '_ ` _ \ / _ \             | __/ _ \ 
 \  /\  /  __/ | (_| (_) | | | | | |  __/             | || (_) |
  \/  \/ \___|_|\___\___/|_| |_| |_|\___|              \__\___/ 
                                                                
                                         

                                                                                                        
            o     o    o                8        .oPYo.                          8                  
            8b   d8                     8        8   `8                          8                  
            8`b d'8   o8   odYo.   .oPYo8       o8YooP'   .oPYo.   .oPYo.   .oPYo8   .oPYo.   oPYo. 
            8 `o' 8    8   8' `8   8    8        8   `b   8oooo8   .oooo8   8    8   8oooo8   8  `' 
            8     8    8   8   8   8    8        8    8   8.       8    8   8    8   8.       8     
            8     8    8   8   8   `YooP'        8    8   `Yooo'   `YooP8   `YooP'   `Yooo'   8       version: 3.0
::::::::::::..::::..:::..::..::..:::.....::::::::..:::..:::.....:::..:::::..::.....:::::.....::::.::..
::::::::::::::::::::::::::::: Concept : MUHAMMAD ASHIQ (my father) ::::::::::::::::::::::::::::::::::::
::::::::::::::::::::::::::::: Code: HUSSAIN ASHIQ  :::::::::::::::::::::::::::::::::::::::::::::::::::



	
	)";
	string instructions = R"(
		 +-+-+-+-+-+-+-+-+-+-+-+-+
 		 |I|n|s|t|r|u|c|t|i|o|n|s|
 		 +-+-+-+-+-+-+-+-+-+-+-+-+

		[+++] This game has FOUR rounds.
		[+++] You will be shown two rows of numbers from 1 to 16.
		[+++] Choose any number and don't tell me.
		[+++] You will be asked for the row in which your number is.
		[+++] Enter 1 if the number is in first row and 2 if the number is in second row.
	
	)";
	for(int i=0; loadScreen[i] != '\0'; i++){
		cout << loadScreen[i];
		usleep(100);
	}
	for(int i=0; instructions[i] != '\0'; i++){
		cout << instructions[i];
		usleep(1000*2);
	}
	
}
void secretNumMsg() {
	string secretNumMsg = R"(
     __     __                                         _                   
     \ \   / /                                        | |                  
      \ \_/ /__  _   _ _ __     ___  ___  ___ _ __ ___| |_                 
       \   / _ \| | | | '__|   / __|/ _ \/ __| '__/ _ \ __|                
        | | (_) | |_| | |      \__ \  __/ (__| | |  __/ |_                 
        |_|\___/ \__,_|_|      |___/\___|\___|_|  \___|\__|                
                                 | |                 (_)                _  
            _ __  _   _ _ __ ___ | |__   ___ _ __     _ ___            (_) 
           | '_ \| | | | '_ ` _ \| '_ \ / _ \ '__|   | / __|               
           | | | | |_| | | | | | | |_) |  __/ |      | \__ \            _  
           |_| |_|\__,_|_| |_| |_|_.__/ \___|_|      |_|___/           (_) 
                                                                           
	)";
	for(int i=0; secretNumMsg[i] != '\0'; i++) {
		cout << secretNumMsg[i];
		usleep(900);
	}
}


