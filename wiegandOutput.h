#ifndef _WIEGANDOUT_H
#define _WIEGANDOUT_H

class WiegandOut{
  public:
    WiegandOut(int data0, int data1);
    void begin(int pinD0, int pinD1);
    void send(unsigned long data, unsigned int bits, bool useFacilityCode);

  private:
    static void sendD1();
    static void sendD0();
    static void createParity(unsigned long data, unsigned int bits, bool useFacilityCode);
    static int _pinData0;
    static int _pinData1;
    static int _evenParity;
    static int _oddParity;
};

#endif // _WIEGANDOUT_H