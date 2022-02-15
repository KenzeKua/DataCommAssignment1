#include "UIntSplitter.h"

UIntSplitter::UIntSplitter()
{
}

UIntSplitter::~UIntSplitter()
{

}

void UIntSplitter::StoreUInt(unsigned int value)
{
	for (int i = 0; i < 4; i++)
	{
		m_bytes[i] = (value >> 24 - (i * 8)) & ((1 << 8) - 1);
		std::cout << " m_bytes [" << i << "]: " << (unsigned int)m_bytes[i] << std::endl;
	}
}

unsigned int UIntSplitter::GetInt()
{
	unsigned int value = 0;

	for (int i = 0; i < 4; i++)
	{
		value |= (m_bytes[i] << (24 - (i * 8)));
	}
	return value;
}