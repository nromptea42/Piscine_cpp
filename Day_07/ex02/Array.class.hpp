#ifndef ARRAY_CLASS_H
# define ARRAY_CLASS_H

template < typename T = int >
class Array {

public:

	Array<T>(void) {
		this->_arr = new T[0];
		this->_len = 0;
	};

	virtual ~Array<T>(void) {
		delete [] this->_arr;
		return;
	};

	class OutOfRangeException : public std::exception {
		public:
			virtual const char * what() const throw() {
				return ("Not in range");
			};
	};

	Array<T>(unsigned int n) {
		this->_arr = new T[n];
		this->_len = n;
	};

	Array<T>( Array<T> & src ) {
		this->_arr = new T[src.size()];
		for(unsigned int i = 0; i < src.size(); i++) {
			this->_arr[i] = src[i];
		}
		this->_len = src.size();
		return;
	};

	Array<T> &	operator=( Array<T> & rhs ) {
		this->_arr = new T[rhs.size()];
		this->_len = rhs.size();
		for(unsigned int i = 0; i < rhs.size(); i++) {
			this->_arr[i] = rhs[i];
		}
		return *this;
	};

	T &	operator[]( unsigned int n ) {
		if (n >= this->_len) {
			throw Array<T>::OutOfRangeException();
		}
		return this->_arr[n];
	};

	unsigned int size() {
		return this->_len;
	}

private:

	T * _arr;
	unsigned int _len;

};

#endif