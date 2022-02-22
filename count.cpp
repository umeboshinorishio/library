namespace qaz
{

template<class X, class Y, class Z>
auto count( const X& first, const Y& last, const Z& num )
{
	s32 count{};
	for( auto iter = first; iter != last; ++iter )
	{
		if( *iter == num ) count++;
	}
	return count;

};

template<class X, class Y>
auto count( const X& v, const Y& num )
{
	s32 count{};
	for( auto iter = v.begin(); iter != v.end(); ++iter )
	{
		if( *iter == num ) count++;
	}
	return count;
};

}