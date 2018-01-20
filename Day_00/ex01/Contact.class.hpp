#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact {
	
public:

	Contact( void );
	~Contact( void );

	char firstName[512];
	char lastName[512];
	char nickName[512];
	char login[512];
	char address[512];
	char email[512];
	char phone[512];
	char birthday[512];
	char meal[512];
	char underwearColor[512];
	char secret[512];

};

#endif