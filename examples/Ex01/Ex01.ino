/*
Simples IO
Autor: Fabrício Ribeiro
12/01/2024
*/

#include <Simples_IO.h>

IN IN1(2);
OUT OUT1(13);

void setup() {
  OUT1.ON();
}

void loop() {
  //IN0 read
  if(!IN1.readPin())
    OUT1.OFF();
  else
    OUT1.ON();          
}