/*
 * Generated by ASN.1 C Compiler (http://www.asnlab.org/)
 * From ASN.1 module "DataElements"
 */

#include "AllowedManeuvers.h"

#ifdef __cplusplus
extern "C" {
#endif

BITSTRING_TYPE(ALLOWEDMANEUVERS_TYPE, 12, 12, 0, true, true, 0, 0, false);
int encode_AllowedManeuvers(AsnBuffer* buffer, Bits/*SIZE(12)*/* allowedManeuvers) {
	return encode_object(buffer, allowedManeuvers, &ALLOWEDMANEUVERS_TYPE);
}

int decode_AllowedManeuvers(AsnBuffer* buffer, Bits/*SIZE(12)*/* allowedManeuvers) {
	return decode_object(buffer, allowedManeuvers, &ALLOWEDMANEUVERS_TYPE);
}


#ifdef __cplusplus
}
#endif
