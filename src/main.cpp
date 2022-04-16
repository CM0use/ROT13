
//          Copyright CM0use.
// Distributed under the Boost Software License, Version 1.0.
//    https://github.com/CM0use/ROT13/blob/main/LICENSE
//          https://www.boost.org/LICENSE_1_0.txt

# include <iostream>

std::string rot13(const std::string_view&);

int main(int argc, char* argv[])
{
	for (int i = 1; i < argc; ++i)
		std::cout << rot13(argv[i]) << ' ';

	std::cout.put('\n');

	return EXIT_SUCCESS;
}
