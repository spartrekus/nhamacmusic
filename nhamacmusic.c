
#include <stdio.h> 
#include <stdlib.h> 

int main(){ 
    while( 1 )
    {
      printf( "HELLO NHAMACMUSIC \n" ); 
      system( " xterm -e mplayer -vo null -ao alsa:device=hw=1,0 --playlist=njukebox.lst  " );
      system( " xterm -e mplayer       -ao alsa:device=hw=1,0       ~/music/*.mp*  " );
      system( " sleep 1s " );
    }
    return 0; 
}  

