// my-initials.cpp
// Edited by: PUT YOUR NAME HERE, and DATE
// Enqi Chen, Sep. 30, 2022
// A program that draws my initials on the screen
// Press any key to quit.

#include "graphics.h"

int main()
{
	int k;
	// Open a graphics window size 800 pixels wide x 600 pixels high
	initwindow(800, 600);

	//background for the letter E
	setcolor(WHITE);
	for (k = 80; k <= 520; k += 4)
	{
		line(20, k, 770, k);
		delay(5);
	}

	//the vertical line of the Letter E
	setcolor(BLACK);
	setfillstyle(SOLID_FILL, BLACK);
	bar(90, 120, 150, 480);

	//the horizontal line 1
	setcolor(BLACK);
	setfillstyle(SOLID_FILL, BLACK);
	bar(150, 120, 320, 180);

	//the horizontal line 2
	setcolor(BLACK);
	setfillstyle(SOLID_FILL, BLACK);
	bar(150, 270, 290, 330);

	//the horizontal line 3
	setcolor(BLACK);
	setfillstyle(SOLID_FILL, BLACK);
	bar(150, 420, 320, 480);
	delay(100);

	//background for the letter C
	setcolor(WHITE);
	rectangle(400, 80, 770, 520);
	delay(500);

	setfillstyle(SOLID_FILL, BLACK);
	bar(401, 81, 770, 520);
	delay(500);

	//Letter C
	setcolor(BLACK);
	setfillstyle(BKSLASH_FILL, WHITE);
	pieslice(600, 300, 45, 315, 180);
	setcolor(BLACK);
	setfillstyle(SOLID_FILL, BLACK);
	pieslice(600, 300, 0, 360, 100);
	delay(1000);



	getch(); //Wait for a key. (When main function ends, the window will close)
	closegraph(); // shut down the graphics window
	return 0;
} // end main()