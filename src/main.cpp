/**
 ** This file is part of ROT13 project
 ** Copyright 2023 CM0use dilanuzcs@gmail.com
 ** URL: https://github.com/CM0use/ROT13
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

// Thanks to https://es.wikipedia.org/wiki/ROT13#Implementaci%C3%B3n_en_C_de_ROT13
std::string rot13(const std::string_view&);

int main(int argc, char* argv[])
{
	for (int i = 1; i < argc; ++i)
		std::cout << rot13(argv[i]) << ' ';

	std::cout.put('\n');

	return EXIT_SUCCESS;
}
