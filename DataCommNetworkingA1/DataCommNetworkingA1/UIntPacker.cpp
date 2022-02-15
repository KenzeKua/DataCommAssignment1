#include "UIntPacker.h"

UIntPacker::UIntPacker()
{

}

UIntPacker::~UIntPacker()
{

}

bool UIntPacker::Pack(unsigned int value, unsigned int bitCount)
{
	if ((m_bitCount + bitCount) > 32)
	{
		std::cout << " WARNING! Not enough space" << std::endl;

		return false;
	}
	else
	{
		shiftSpace[valueOrder] = bitCount;
		m_data <<= bitCount;
		m_data |= value;

		m_bitCount += bitCount;
		valueOrder++;

		if (m_bitCount >= 32)
		{
			std::cout << " m_bitCount is now full" << std::endl;
		}

		return true; // Check if got enough bit counts
	}
}

unsigned int UIntPacker::Extract(unsigned int valueOrder)
{
	int totalShiftSpaces = 0;

	for (int i = 3; i > valueOrder; i--)
	{
		totalShiftSpaces += shiftSpace[i];
	}

	return (m_data >> totalShiftSpaces) & ((1 << shiftSpace[valueOrder]) - 1);
}