namespace qaz 
{

template<class X, class Y, class Z>
void for_each( const X& first, const Y& last, const Z& func )
{
	for( auto iter = first; iter != last; ++iter )
	{
		func( *iter );
	}
};

template<class X, class Y>
void for_each( const X& v, const Y& func )
{
	for( auto iter = v.begin(); iter != v.end(); ++iter )
	{
		func( *iter );
	}
};

}