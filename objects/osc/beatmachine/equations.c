#include "./equations.h"

uint32_t Equations(int equation_num, uint32_t t, uint32_t x, uint32_t y, uint32_t z) {
    switch (equation_num) {

        // Mostly taken from http://pelulamu.net/countercomplex/music_formula_collection.txt
    
        case 0: // object text field
        equation = attr_beat;
        break;

        case 1: // viznut 2011-09-18 http://www.youtube.com/watch?v=GtQdIYUtAHg
        equation = t*(((t>>x)|(t>>y))&(z&(t>>4)));
        break;

        case 2: // tejeez 2011-09-18 http://www.youtube.com/watch?v=GtQdIYUtAHg
        equation = (t*(t>>x|t>>y))>>(t>>z);
        break;
   
        case 3: // visy 2011-09-18 http://www.youtube.com/watch?v=GtQdIYUtAHg
        equation = t*(((t>>x)|(t>>y))&(z&(t>>6)));
        break;
      
        case 4: // tejeez 2011-09-18 http://www.youtube.com/watch?v=GtQdIYUtAHg
        equation = t*(((t>>x)&(t>>y))&(z&(t>>3)));
        break;
     
        case 5: // visy 2011-09-18 http://www.youtube.com/watch?v=GtQdIYUtAHg
        equation = t*(t>>x*((t>>y)|(t>>x))&(z|(t>>19)*5>>t|(t>>3)));
        break;     
      
        case 6: // blueberry 2011-10-05 http://pouet.net/topic.php?which=8357&page=12 
        equation = t*(((t>>x)^((t>>x)-1)^1)%y);  
        break;

        case 7: // visy 2011-09-18 http://www.youtube.com/watch?v=GtQdIYUtAHg "Space Invaders vs Pong"
        equation = t*(t>>((t>>x)|(t>>y))&(z&(t>>4)));
        break;

        case 8:
        equation = (((1317-x)*t)|w/y%t)>>(z>>6);
        break;

        case 9:
        equation = (((t%(t>>x|t>>y))>>z)&t)-1;
        break;

        case 10:
        equation = t/(t%(t>>x|t>>y));
        break;

        case 11:
        equation = (t*(t>>5|t>>8))>>(t>>16&t);
        break;

        case 12:
        equation = ((2*(t&1)-1)*t)-(t>>8);
        break;

        case 13:
        equation = (t&t>>4)-(t>>13&t);
        break;	

        default: // object text field
        equation = attr_beat;
    }
    
    return (uint32_t equation);
}
