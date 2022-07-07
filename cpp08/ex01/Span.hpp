#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <set>
#include <ctime>
#include <cstdlib>

class Span
{

	public:

		Span( void );
		Span( unsigned int n );
		Span( Span const & src );
		~Span( void );

		Span &	operator=( Span const & rhs );

		unsigned int	getSizeMax( void ) const;

		void			addNumber( int addNum );
		unsigned int	shortestSpan( void ) const;
		unsigned int	longestSpan( void ) const;
		void			setRandomNumber( unsigned int setSize );

	private:

		std::multiset<int>	intMultiSet;
		unsigned int		sizeMax;
};

#endif