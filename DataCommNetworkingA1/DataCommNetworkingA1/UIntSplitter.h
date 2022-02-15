#pragma once

#include <iostream>

class UIntSplitter
{
public:
	UIntSplitter();
	~UIntSplitter();

	unsigned char m_bytes[4] = { 0 };

	void StoreUInt(unsigned int value); // Store "1 unsigned int" value into "4 unsigned chars"
	unsigned int GetInt(void); // Merge the bytes(unsigned char) and return the unsigned int value
};
