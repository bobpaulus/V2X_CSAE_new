/*
 * Generated by ASN.1 C++ Compiler (http://www.asnlab.org/)
 * From ASN.1 module "MapData"
 */
#include "MapData.h"
#include "MapData.h"

namespace mapdata {

MapData::MapData() {
}

void MapData::free() {
	free_object(this, MapData::TYPE, &MapData::CONVERTER);
}

AsnType* MapData::TYPE = MapData::getType(65537);
ASN_COMPOSITE(
	CompositeConverter,
	MapData,
	{ 0 }
);

}