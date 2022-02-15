#pragma once

#include <iostream>

class UIntPacker
{
private:
	unsigned int m_data = 0;
	unsigned int m_bitCount = 0; // To count how many bits are used.
	int valueOrder = 0;
	unsigned int shiftSpace[32] = { 0 };

public:
	UIntPacker();
	~UIntPacker();

	// Pack the "value" into m_data, it retuns true if there are enough bits available 
	// bitCount : the bit count of "value"
	bool Pack(unsigned int value, unsigned int bitCount);

	unsigned int Extract(unsigned int bitCount);
};
