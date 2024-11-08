/*
Simples_IO

Essa biblioteca configura de forma simples os pinos de
IOs do Arduino.
Autor: Fabrício Ribeiro
Data: 08/11/2024
Versão: 1.0.0
*/

#ifndef Simles_IO_h
#define Simles_IO_h

#include <Arduino.h>

class OUT {
  private:
    int Pin;
    unsigned char pinState;

  public:
    OUT(int pin);
    void ON();
    void OFF();
    int getState();
};

class IN {
  private:
    int Pin;

  public:
    IN(int pin);
    int readPin();
};

#endif