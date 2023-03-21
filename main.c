/********************************************************************************
* main.c: Demonstration av inbyggt system innefattande 7-segmentsdisplayer.
*         Timerkrets Timer 1 anv�nds f�r att r�kna upp befintligt tal p�
*         7-segmentsdisplayerna en g�ng per sekund.
********************************************************************************/
#include "header.h"

struct button b1;
struct button b2;
struct button b3;

/********************************************************************************
* setup: Initierar systemet enligt f�ljande:
*
*        1. Initierar Watchdog-timern med en timeout p� 1024 ms. System reset
*           aktiveras s� att system�terst�llning sker ifall Watchdog-timern
*           l�per ut.
*
*        2. Initierar 7-segmentsdisplayerna med startv�rde 0 och aktiverar
*           uppr�kning en g�ng per sekund.
********************************************************************************/
static inline void setup(void)
{
   wdt_init(WDT_TIMEOUT_1024_MS);
   wdt_enable_interrupt();

   display_init();
   display_enable_output();
   
   button_init(&b1, 11);
   button_init(&b2, 12);
   button_init(&b3, 13);
   
   button_enable_interrupt(&b1);
   button_enable_interrupt(&b2);
   button_enable_interrupt(&b3);
   
   return;
}

/********************************************************************************
* main: Initierar systemet vid start. Uppr�kning sker sedan kontinuerligt
*       av talet p� 7-segmentsdisplayerna en g�ng per sekund.
********************************************************************************/
int main(void)
{
   setup();
   
   while (1)
   {
      wdt_reset();
   }
  
   return 0;
}

