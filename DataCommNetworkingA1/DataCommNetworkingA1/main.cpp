#include <iostream>
#include <Windows.h>
#include <List>
#include <Vector>

#include "UIntPacker.h"
#include "UIntSplitter.h"

int main() {

	UIntPacker Packer;
	UIntSplitter Splitter;

	Packer.Pack(0, 1);
	Packer.Pack(15, 4);
	Packer.Pack(31, 5);
	Packer.Pack(3, 2);

	std::cout << " == Packer class ==\n\n";

	for (int i = 0; i < 4; i++)
	{
		std::cout << " Value[" << i << "]: " << Packer.Extract(i) << std::endl;
	}
	
	std::cout << "\n ===========================\n\n";
	std::cout << " == Splitter class ==\n\n";

	Splitter.StoreUInt(2216786910);
	std::cout << "\n Split value: " << Splitter.GetInt() << std::endl;
	std::cout << "\n ===========================" << std::endl;

	std::cin.get();

	return 0;
}