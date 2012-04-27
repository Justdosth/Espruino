//#include "pic18f2620.h"
#include "pic18f8627.h"

/* ----------------------------------------------------------------------- */
/* ----------------------------------------------------------------------- */
/* ----------------------------------------------------------------------- */

void putchar (char c) {
  while (!TXSTAbits.TRMT);
  TXREG = c;
}

/* ----------------------------------------------------------------------- */
/* ----------------------------------------------------------------------- */
/* ----------------------------------------------------------------------- */


#include "jslex.c"
#include "jsparse.c"
#include "jsutils.c"
#include "jsvar.c"

/* ----------------------------------------------------------------------- */
/* ----------------------------------------------------------------------- */
/* ----------------------------------------------------------------------- */


/* ----------------------------------------------------------------------- */
/* ----------------------------------------------------------------------- */
/* ----------------------------------------------------------------------- */

void main() {
  // RS232 USART. Set bits up as if FOsc = 32Mhz  
  TXSTAbits.BRGH = 1; BAUDCONbits.BRG16 = 1; SPBRGH = 0; SPBRG = 138; // 57600 (ish!) 
  //TXSTAbits.BRGH = 0; BAUDCONbits.BRG16 = 1; SPBRGH = 0; SPBRG = 104; // 19200 (ish!) 

  TXSTAbits.SYNC = 0; // async
  RCSTAbits.SPEN = 1; // general enable 
  TXSTAbits.TXEN = 1; // tx enable
  RCSTAbits.CREN = 1; // rx enable 



}
