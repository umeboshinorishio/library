namespace qaz
{

template<class X, class Y, class Z>
auto count_if( const X& first, const Y& last, const Z& func )
{
	s32 count{};
	for( auto iter = first; iter != last; ++iter )
	{
		if( func( *iter ) ) count++;
	}
	return count;

};

template<class X, class Y>
auto count_if( const X& v, const Y& func )
{
	s32 count{};
	for( auto iter = v.begin(); iter != v.end(); ++iter )
	{
		if( func( *iter ) ) count++;
	}
	return count;
};

}