/*
 * Generated by ASN.1 C++ Compiler (http://www.asnlab.org/)
 * From ASN.1 module "DataElements"
 */

#ifndef ANTILOCKBRAKESTATUS_H
#define ANTILOCKBRAKESTATUS_H

#include "AsnRuntime.h"

using namespace asnrt;

namespace dataelements {

class AntiLockBrakeStatus {
public:
	enum __Enum {
		unavailable = 0,
		off = 1,
		on = 2,
		engaged = 3,
	};
	__Enum _value;
	AntiLockBrakeStatus(int value = 0) : _value((__Enum ) value) {}
	AntiLockBrakeStatus& operator=(int value) { this->_value = (__Enum ) value; return *this; } 
	operator int() const { return this->_value; }

	DECLARE_TYPE();
	static EnumeratedConverter<AntiLockBrakeStatus> CONVERTER;
};

}

#endif /*ANTILOCKBRAKESTATUS_H*/
