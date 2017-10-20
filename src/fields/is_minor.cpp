#include "fields/is_minor.h"

#include <string>
#include "global.h"

IsMinor::IsMinor(MinorType minorType) {
    this->minorType = minorType;
}

IsMinor::IsMinor(bool isMinor) {
	if(isMinor) {
		this->minorType = MinorType::isMinorCourse;
	}
	else {
		this->minorType = MinorType::isNotMinorCourse;
	}
}

FieldType IsMinor::getType() {
    return FieldType::isMinor;
}

MinorType IsMinor::getMinorType() {
	return minorType;
}

std::string IsMinor::getTypeName() {
	return "Minor Type";
}

std::string IsMinor::getName() {
	if(minorType == MinorType::isMinorCourse) {
		return "Yes";
	}
	return "No";
}