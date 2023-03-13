/**
 ** This file is part of https://github.com/CM0use/ROT13
 ** Copyright 2023 CM0use <dilanuzcs@gmail.com>.
 **
 ** This program is free software: you can redistribute it and/or modify
 ** it under the terms of the GNU General Public License as published by
 ** the Free Software Foundation, either version 3 of the License, or
 ** (at your option) any later version.
 **
 ** This program is distributed in the hope that it will be useful,
 ** but WITHOUT ANY WARRANTY; without even the implied warranty of
 ** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 ** GNU General Public License for more details.
 **
 ** You should have received a copy of the GNU General Public License
 ** along with this program.  If not, see <http://www.gnu.org/licenses/>.
 **/

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
