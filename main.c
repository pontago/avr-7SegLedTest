
#include <avr/io.h>
#include <util/delay.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
  char n = 0;
  DDRD = 0b11111111;

  for (;;) {
    char i;

    for(i = 0; i < 5; i++) {
      _delay_ms(30);
    }

    PORTD = 1 << n;

    if (++n == 8) n = 0;
  }

  return 0;
}
