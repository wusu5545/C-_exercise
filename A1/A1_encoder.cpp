// THERE IS NOTHING TO DO BUT ADAPT LINE 31

#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <iterator>

struct rot {
	char const operator()( unsigned char c ) {
		using std::isalpha;
		using std::islower;

		if ( isalpha( c ) ) {
			unsigned char const shift( 65 + ( islower( c ) ?  32 : 0 ) );

			c = ( ( ( c - shift ) + 13 ) % 26 ) + shift;
		}

		return c;
	}
};

int main() {
	using std::string;
	using std::cout;
	using std::transform;
	using std::endl;
	using std::ostream_iterator;

	string const myname( "Su Wu,ir36ukaq,21762068" );

	cout << '"' << myname << "\" becomes \"";

	transform( myname.begin() , myname.end() , ostream_iterator< char >( cout ) , rot() );

	cout << '"' << endl;

	return 0;
}
