namespace qaz
{

template<class X, class Y, class Z>
auto find_if( const X& first, const Y& last, const Z& func )
{
	for( auto iter = first; iter != last; ++iter )
	{
		if( func( *iter ) ) return iter;
	}
	return last;

};

template<class X, class Y>
auto find_if( const X& v, const Y& func )
{
	for( auto iter = v.begin(); iter != v.end(); ++iter )
	{
		if( func( *iter ) ) return iter;
	}
	return v.end();
};

}