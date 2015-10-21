#include<iostream>
#include<vector>
#include<string>
#include<cctype>

using namespace std;

int main(){
	vector< double > dvec = { 0 , 1 , 2 };
	vector< double > const cdvec = { 0 , 1 , 2 };
	for ( auto dvit = dvec.begin() ; dvit!=dvec.end() ; ++dvit ) {
		++(*dvit);
	}
	double s( 0 );
	auto cdvit = cdvec.cbegin();
	while ( ( *cdvit < 42 ) && ( cdvit!=cdvec.cend() ) ) {
		s += *cdvit;
		cdvit++;
	}
	for ( auto dvit = dvec.rbegin() ; dvit!=dvec.rend() ; ++dvit ) {
		*dvit = *dvit / 2;
	}
	for ( auto dvit = dvec.end() ; dvit!=dvec.begin() ; --dvit ) {
		*dvit = *dvit * *dvit;
	}
	double prod( 1. );
	for (vector< double >::const_iterator cdvit = cdvec.begin(); cdvit!= cdvec.end();++cdvit) {
		prod *= *cdvit;
	}
	return 0;
}
