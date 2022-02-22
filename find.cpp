namespace qaz
{

template<class X, class Y, class Z>
auto find( const X& first, const Y& last, const Z& num )
{
	for( auto iter = first; iter != last; ++iter )
	{
		if( *iter == num ) return iter;
	}
	return last;
	
};

template<class X, class Y>
auto find( const X& v, const Y& num )
{
	for( auto iter = v.begin(); iter != v.end(); ++iter )
	{
		if( *iter == num ) return iter;
	}
	return v.end();
};

}