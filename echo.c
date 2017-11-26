/*

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without ewven the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{

	if(argc < 2)
	{

		printf("Usage: [%s] [String to echo]\n", argv[0]);
		exit(EXIT_SUCCESS);

	}

	printf("%s\n", argv[1]);
	exit(EXIT_SUCCESS);

}
