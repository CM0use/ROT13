
//          Copyright CM0use.
// Distributed under the Boost Software License, Version 1.0.
//    https://github.com/CM0use/ROT13/blob/main/LICENSE
//          https://www.boost.org/LICENSE_1_0.txt

# include <iostream>

std::string rot13(const std::string_view&);

# define ROT13 (13)
# define NABC (26)

std::string rot13(const std::string_view& message) {
	std::string encrypted{message};
	std::size_t nletters = encrypted.size();
	char c;

	for (std::size_t i = 0; i < nletters; ++i)
	{
		switch (encrypted[i]) {
			case 'A' ... 'Z':
			c = 'A'; break;
			
			case 'a' ... 'z':
			c = 'a'; break;
			
			default: continue;
		}
		c = (encrypted[i] - c + ROT13) % NABC + c;
		encrypted[i] = c;
	}
	return encrypted;
}
