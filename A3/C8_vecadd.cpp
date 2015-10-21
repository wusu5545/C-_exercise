Vetor& addVectors( const Vector& v1, const Vector& v2 )
{
	// Throwing an exception in case the sizes of the two
	// vectors don’t match
	if( v1.size() != v2.size() )
		throw std::invalid_argument( "Vector sizes don’t match" );
	Vector tmp( v1.size() );
	for( size_t i = 0; i < v1.size(); ++i )
		tmp[i] = v1[i] + v2[i];
	return tmp;
}
