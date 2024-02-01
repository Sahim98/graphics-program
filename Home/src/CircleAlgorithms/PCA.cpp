#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<math.h>

      int main(void)
	    {
	      int x,h,k,r,x2;
	      float y;

	      /* request auto detection */
	      int gdriver = DETECT, gmode, errorcode;

	      initgraph(&gdriver, &gmode, "c:\\tc\\bgi");

	      outtext("Using Polynomial Method (Circle)");

	      x=0;
	      r=100;
	      h=300;
	      k=250;

	      x2=r/(sqrt(2));

         while(x<=x2)
		 {
		    y=sqrt(r*r-x*x);

		    putpixel(x+h,y+k,2);
		    putpixel(y+h,x+k,2);
		    putpixel(-y+h,x+k,3);
		    putpixel(-x+h,y+k,3);
		    putpixel(-x+h,-y+k,4);
		    putpixel(-y+h,-x+k,4);
		    putpixel(y+h,-x+k,5);
		    putpixel(x+h,-y+k,5);

		    x++;
		 }

	   getch();
      closegraph();
 }

