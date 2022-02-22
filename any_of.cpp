namespace qaz
{

template<class X, class Y, class Z>
auto any_of( const X& first, const Y& last, const Z& func )
{
	for( auto iter = first; iter != last; ++iter )
	{
		if( func( *iter ) ) return true;
	}
	return false;
};

template<class X, class Y>
auto any_of( const X& v, const Y& func )
{
	for( auto iter = v.begin(); iter != v.end(); ++iter )
	{
		if( func( *iter ) ) return true;
	}
	return false;
};

}