#include <iostream>

int main()
{
	std::cout << "Size of char : " << sizeof(char) << " bytes" << std::endl;
	std::cout << "Size of wchar_t : " << sizeof(wchar_t) << " bytes" << std::endl;
	std::cout << "Size of int : " << sizeof(int) << " bytes" << std::endl;
	std::cout << "Size of short int : " << sizeof(short int) << " bytes" << std::endl;
	std::cout << "Size of long int : " << sizeof(long int) << " bytes" << std::endl;
	std::cout << "Size of long long int : " << sizeof(long long int) << " bytes" << std::endl;
	std::cout << "Size of float : " << sizeof(float) << " bytes" << std::endl;
	std::cout << "Size of double : " << sizeof(double) << " bytes" << std::endl;
	std::cout << "Size of long double : " << sizeof(long double) << " bytes" << std::endl;
	
	std::cout << "\nType\t\t Minimum\t\t Maximum\n\n";
	std::cout << "bool\t\t" << std::numeric_limits<bool>::min() << '\t' << '\t' << '\t' << std::numeric_limits<bool>::max() << '\n';
	std::cout << "char\t\t" << std::numeric_limits<char>::min() << '\t' << '\t' << '\t' << std::numeric_limits<char>::max() << '\n';
	std::cout << "unsigned char\t" << std::numeric_limits<unsigned char>::min() << '\t' << '\t' << '\t' << std::numeric_limits<unsigned char>::max() << '\n';
	std::cout << "short\t\t" << std::numeric_limits<short>::min() << '\t' << '\t' << '\t' << std::numeric_limits<short>::max() << '\n';
	std::cout << "unsigned short\t" << std::numeric_limits<unsigned short>::min() << '\t' << '\t' << '\t' << std::numeric_limits<unsigned short>::max() << '\n';
	std::cout << "int\t\t" << std::numeric_limits<int>::min() << '\t' << '\t' << std::numeric_limits<int>::max() << '\n';
	std::cout << "unsigned int\t" << std::numeric_limits<unsigned int>::min() << '\t' << '\t' << '\t' << std::numeric_limits<unsigned int>::max() << '\n';
	std::cout << "long int\t" << std::numeric_limits<long int>::min() << '\t' << '\t' << std::numeric_limits<long int>::max() << '\n';
	std::cout << "unsigned long int " << std::numeric_limits<unsigned long int>::min() << '\t' << '\t' << '\t' << std::numeric_limits<unsigned long int>::max() << '\n';
	std::cout << "long long int\t" << std::numeric_limits<long long int>::min() << '\t' << std::numeric_limits<long long int>::max() << '\n';
	std::cout << "float\t\t" << std::numeric_limits<float>::min() << '\t' << '\t' << std::numeric_limits<float>::max() << '\n';
	std::cout << "double\t\t" << std::numeric_limits<double>::min() << '\t' << '\t' << std::numeric_limits<double>::max() << '\n';
	std::cout << "long double\t" << std::numeric_limits<long double>::min() << '\t' << '\t' << std::numeric_limits<long double>::max() << '\n';
	
	system("PAUSE");
}