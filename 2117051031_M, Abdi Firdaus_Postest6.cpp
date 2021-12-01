#include <ncurses/ncurses.h>
#include <windows.h>
#include <unistd.h>
using namespace std;

void bismillah(){
	refresh();
	Sleep(700);
	clear();	
}
int main(){
	
	initscr();
	
	start_color();
	init_pair(1,COLOR_BLUE,COLOR_YELLOW);
	attron(COLOR_PAIR(1));
	
	printw ("m abdi firdaus");
	bismillah();
	
	printw("M abdi firdaus");
	bismillah();

	
	printw("m Abdi firdaus");
	bismillah();
	
	printw("m aBdi firdaus");
	bismillah();
	
	printw("m abDi firdaus");
	bismillah();
	
	printw("m abdI firdaus");
	bismillah();
	
	printw("m abdi Firdaus");
	bismillah();
	
	printw("m abdi fIrdaus");
	bismillah();
	
	printw("m abdi fiRdaus");
	bismillah();
	
	printw("m abdi firDaus");
	bismillah();
	
	printw("m abdi firdAus");
	bismillah();
	
	printw("m abdi firdaUs");
	bismillah();
	
	printw("m abdi firdauS");
	bismillah();
	
	
	getch();
	endwin();
}
