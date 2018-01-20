#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char** argv) {

	(void)argc;
	std::ifstream ifs(argv[1]);
	std::string x;
	std::string sum;
	while (ifs >> x) {
  		sum = sum + x;
  		sum = sum + " ";
	}
	std::cout << sum << std::endl;
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::string ret;
	for (int i = 0; i < (int) sum.length() - 1; i++) {
		if (sum.compare(i, s1.length(), s1) == 0) {
			ret += s2;
			i += s1.length() - 1;
		} else {
			ret += sum[i];
		}
	}

	std::ofstream ofs(filename += ".replace");

	ofs << ret << std::endl;
	ofs.close();

	return 0;
}