#include <iostream>
#include <stdlib.h>
#include "Contact.class.hpp"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (s1 && s2 && s1[i] && s2[i] && (s1[i] == s2[i]) && i < n)
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

Contact add_a_contact(void) {
	Contact myNewContact;

	std::cout << std::endl << "ADD A NEW CONTACT" << std::endl << std::endl;
	std::cout << "First Name : ";
	std::cin >> myNewContact.firstName;
	std::cout << "Last Name : ";
	std::cin >> myNewContact.lastName;
	std::cout << "Nickname : ";
	std::cin >> myNewContact.nickName;
	std::cout << "Login : ";
	std::cin >> myNewContact.login;
	std::cout << "Postal address : ";
	std::cin >> myNewContact.address;
	std::cout << "Email address : ";
	std::cin >> myNewContact.email;
	std::cout << "Birthday date : ";
	std::cin >> myNewContact.birthday;
	std::cout << "Favorite meal : ";
	std::cin >> myNewContact.meal;
	std::cout << "Underwear color : ";
	std::cin >> myNewContact.underwearColor;
	std::cout << "Darkest secret : ";
	std::cin >> myNewContact.secret;
	return myNewContact;
}

void printIt(char *toBePrinted) {
	if (ft_strlen(toBePrinted) > 10) {
		for (int i = 0; i < 9; i++) {
			std::cout << (char) toBePrinted[i];
		}
		std::cout << '.';
	} else {
		for (int j = 0; j < 10 - ft_strlen(toBePrinted); j++) {
			std::cout << " ";
		}
		for(int k = 0; k < ft_strlen(toBePrinted); k++) {
			std::cout << toBePrinted[k];
		}
	}
	return;
}

void printIndex(Contact print) {
	std::cout << "First name : " << print.firstName << std::endl;
	std::cout << "Last name : " << print.lastName << std::endl;
	std::cout << "Nickname : " << print.nickName << std::endl;
	std::cout << "Login : " << print.login << std::endl;
	std::cout << "Postal Address : " << print.address << std::endl;
	std::cout << "Email Address : " << print.email << std::endl;
	std::cout << "Birthday date : " << print.birthday << std::endl;
	std::cout << "Favorite meal : " << print.meal << std::endl;
	std::cout << "Underwear color : " << print.underwearColor << std::endl;
	std::cout << "Darkest secret : " << print.secret << std::endl;
	return;
}

int main (void) {
	char	buff[512];
	int		filled = 0;
	Contact contactList[8];

	std::cout << "Welcome to your awesome PhoneBook" << std::endl << std::endl;
	while (42) {
		std::cout << "What do you want to do ? ";
		std::cin >> buff;
		char str[512];
  		std::cin.getline(str, 512);
		if (ft_strncmp(buff, "EXIT", 4) == 0) {
			return (-1);
		} else if (ft_strncmp(buff, "ADD", 3) == 0) {
			if (filled == 8) {
				std::cout << "Can't add more than 8 contacts sorry" << std::endl;
			} else {
				contactList[filled] = add_a_contact();
				filled++;
			}
		} else if (ft_strncmp(buff, "SEARCH", 6) == 0) {
			for(int i = 0; i <= filled - 1; i++) {
				std::cout << "         " << i + 1 << "|";
				printIt(contactList[i].firstName);
				std::cout << "|";
				printIt(contactList[i].lastName);
				std::cout << "|";
				printIt(contactList[i].nickName);
				std::cout << std::endl;
			}
			if (filled != 0) {
				char rep[128];
				std::cout << "Which one do you want to look at ? Give me the index : ";
				std::cin >> rep;
				int index = atoi(rep);
				if (index <= filled) {
					printIndex(contactList[index - 1]);
				}
			}
		}
	}
}