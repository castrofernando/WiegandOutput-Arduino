#ifndef _WIEGANDOUT_H
#define _WIEGANDOUT_H

class WiegandOut{
  public:
    WiegandOut(int data0, int data1);
    void begin(int pinD0, int pinD1);
    void send(unsigned long data, unsigned int bits, bool useFacilityCode);

  private:
    void sendD1();
    void sendD0();
    void createParity(unsigned long data, unsigned int bits, bool useFacilityCode);
    int _pinData0;
    int _pinData1;
    int _evenParity;
    int _oddParity;
};

#endif // _WIEGANDOUT_H