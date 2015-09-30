/*  GPL V3.0 Disclaimer
    Copyright (C) 2015 James Shawver

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

string gpl_disclaimer = "   SystemVerilogTools  Copyright (C) 2015 James Shawver  \n \
    This program comes with ABSOLUTELY NO WARRANTY; \n \
    This is free software, and you are welcome to redistribute it under certain conditions. \n \
    You should have received a copy of the GNU General Public License \n \
    along with this program.  If not, see <http://www.gnu.org/licenses/>.  ";

int main (int argc, char** argv) {
    cout << gpl_disclaimer << endl;
    return 0;
}
