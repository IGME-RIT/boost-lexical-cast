#include <boost/lexical_cast.hpp>
#include <string>
#include <iostream>

int main()
{
	std::string s = boost::lexical_cast<std::string>(123);
	std::cout << s << std::endl;
	double d = boost::lexical_cast<double>(s);
	std::cout << d << std::endl;

	try
	{
		int i = boost::lexical_cast<int>("abc");
		std::cout << i << std::endl;
	}
	catch (const boost::bad_lexical_cast &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

