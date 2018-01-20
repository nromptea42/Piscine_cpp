#include <iostream>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

int main (int argc, char **argv) {
	int i = 1;
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	while (i < argc) {
		for (int j = 0; argv[i][j]; ++j)
    		std::cout << (char) ft_toupper(argv[i][j]);
		if (i == argc - 1) {
			 std::cout << std::endl;
		}
		i++;
	}
	return 0;
}