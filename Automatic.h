

#ifndef AUTOMATIC_H_
#define AUTOMATIC_H_

#include "Mode.h"

class Automatic : public Mode{
public:
	Automatic(LiquidCrystal* lcd, DigitalIoPin* sw1, DigitalIoPin* sw2,DigitalIoPin*sw3, DigitalIoPin*sw4, I2C* i2c, ModbusMaster* node);
	void printInfo(uint16_t& cur_speed, int16_t& pressure, int16_t& pressure_ref, bool reached);
	void pressureMenu(int16_t& pressure_ref);
	void run();
	void setPressure();
	virtual ~Automatic();

private:
	bool automatic;
	const int accuracy = 1;
	int16_t pressure_ref;
	int timescalled;

};

#endif /* AUTOMATIC_H_ */
