#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>


class Span{
	private:
		std::vector<int> num;
		unsigned int N;
	public:
		Span();
		Span(unsigned int n);
		void addNumber(int n);
		int shortestSpan();
		int longestSpan();
};

#endif