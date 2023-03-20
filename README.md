# Projekt-II-7-segmentsdisplayer

Ett system bestående av en räknare som räknar upp/ned från 0 – 99, där uppräknat heltal skrivs ut på två 7-
segmetsdisplayer en gång i sekunden när uppräkning är aktiverat. När räknarens värde överstiger 99 ska räknaren
återställas till 0. På samma sätt gäller att om räknarens värde understiger 0 sätts räknaren till 99.

En tryckknapp ansluten till pin 11 (PORTB3) ska användas som en start/stopp-signal för att starta eller stoppa uppräkning.
Som default ska uppräkning inte ske.
• En tryckknapp ansluten till pin 12 (PORTB4) ska användas för att toggla uppräkningsriktningen mellan upp och ned. Som
default ska uppräkning ske uppåt.
• En tryckknapp ansluten till pin 13 (PORTB5) ska användas som av/på-signal för att tända/släcka 7-segmentsdisplayerna. Som
default ska 7-segmentsdisplayerna vara släckta. Även om 7-segmentsdisplayerna är släckta ska uppräkning ske om detta är
aktiverat.
• Skrivning ska ske till EEPROM-minnet en gång per sekund, så att om systemet återstartas, exempelvis efter att tillförsel av
matningsspänning upphör, ska räknaren fortsätta på samma värde som tidigare, men samma uppräkningsriktning samt i
samma tillstånd. Tips: Skriv information om samtliga parametrar till EEPROM-minnet en gång i sekunden och läs in dessa vid
programstart.
• Watchdog-timern ska implementeras så att systemåterställning sker ifall Watchdog-timern inte återställs inom en sekund.
