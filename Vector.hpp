#ifndef VECTOR_HPP
# define VECTOR_HPP

# include <iostream>
# include <string>
# include <type_traits>
# include <math.h>
# include <iterator>

template<typename T>
class Vector
{
	public:

	class iterator : std::iterator<std::random_access_iterator_tag, T>
	{
		public : 

		iterator(T* ptr) : m_ptr(ptr) {}
		T* get_ptr() const { return this->m_ptr;};

		iterator(const iterator& x) {this->m_ptr = x.m_ptr;}
		iterator() {};
		~iterator() {};


		T& operator*() const { return *m_ptr; }
		T* operator->() { return m_ptr; }
		iterator& operator++() { m_ptr++; return *this; }  
		iterator operator++(int) { iterator tmp = *this; ++(*this); return tmp; }
		iterator& operator--() { m_ptr--; return *this; }  
		iterator operator--(int) { iterator tmp = *this; --(*this); return tmp; }
		iterator operator+(const int& b) { return (this->get_ptr() + b);}
		T& operator[](const int& b) { return ( m_ptr[b]);}
		friend iterator operator+(const int& b, const iterator& a) { return (a.m_ptr + b);}
		iterator operator-(const int& b) { return (this->get_ptr() - b);}
		ptrdiff_t operator-(const iterator& b) { return (this->get_ptr() - b.get_ptr());}
		iterator& operator=(iterator b) { this->m_ptr = b.m_ptr; return (*this);}
		iterator operator+=(const int& b) { this->m_ptr = this->get_ptr() + b; return (this->get_ptr());}
		iterator operator-=(const int& b) { this->m_ptr = this->get_ptr() - b; return (this->get_ptr());}
		bool operator== (const iterator& b) { return this->get_ptr() == b.get_ptr(); };
		bool operator!= (const iterator& b) { return this->get_ptr() != b.get_ptr(); };
		bool operator>= (const iterator& b) { return this->get_ptr() >= b.get_ptr(); };
		bool operator<= (const iterator& b) { return this->get_ptr() <= b.get_ptr(); };
		bool operator> (const iterator& b) { return this->get_ptr() > b.get_ptr(); };
		bool operator< (const iterator& b) { return this->get_ptr() < b.get_ptr(); };

		private:

		T* m_ptr;
	};

	class const_iterator : std::iterator<std::random_access_iterator_tag, T>
	{
		public : 

		const_iterator(T* ptr) : m_ptr(ptr) {}
		const T* get_ptr() { return this->m_ptr;};

		const_iterator(const const_iterator& x) {this->m_ptr = x.m_ptr;}
		const_iterator() {};
		~const_iterator() {};


		const T& operator*() const { return *m_ptr; }
		const T* operator->() { return m_ptr; }
		const_iterator& operator++() { m_ptr++; return *this; }  
		const_iterator operator++(int) { const_iterator tmp = *this; ++(*this); return tmp; }
		const_iterator& operator--() { m_ptr--; return *this; }  
		const_iterator operator--(int) { const_iterator tmp = *this; --(*this); return tmp; }
		const_iterator operator+(const int& b) { return (this->get_ptr() + b);}
		const T& operator[](const int& b) { return ( m_ptr[b]);}
		friend const_iterator operator+(const int& b, const const_iterator& a) { return (a.m_ptr + b);}
		const_iterator operator-(const int& b) { return (this->get_ptr() - b);}
		ptrdiff_t operator-(const const_iterator& b) { return (this->get_ptr() - b.get_ptr());}
		const_iterator& operator=(const_iterator b) { this->m_ptr = b.m_ptr; return (*this);}
		const_iterator& operator=(iterator b) { this->m_ptr = b.get_ptr(); return (*this);}
		const_iterator operator+=(const int& b) { this->m_ptr = this->get_ptr() + b; return (this->get_ptr());}
		const_iterator operator-=(const int& b) { this->m_ptr = this->get_ptr() - b; return (this->get_ptr());}
		bool operator== (const const_iterator& b) { return this->get_ptr() == b.get_ptr(); };
		bool operator!= (const const_iterator& b) { return this->get_ptr() != b.get_ptr(); };
		bool operator>= (const const_iterator& b) { return this->get_ptr() >= b.get_ptr(); };
		bool operator<= (const const_iterator& b) { return this->get_ptr() <= b.get_ptr(); };
		bool operator> (const const_iterator& b) { return this->get_ptr() > b.get_ptr(); };
		bool operator< (const const_iterator& b) { return this->get_ptr() < b.get_ptr(); };

		private:

		T* m_ptr;
	};

	class reverse_iterator : std::iterator<std::random_access_iterator_tag, T>
	{
		public : 

		reverse_iterator(T* ptr) : m_ptr(ptr) {}
		T* get_ptr() { return this->m_ptr;};

		reverse_iterator(const reverse_iterator& x) {this->m_ptr = x.m_ptr;}
		reverse_iterator() {};
		~reverse_iterator() {};


		T& operator*() const { return *m_ptr; }
		T* operator->() { return m_ptr; }
		reverse_iterator& operator++() { m_ptr--; return *this; }  
		reverse_iterator operator++(int) { iterator tmp = *this; --(*this); return tmp; }
		reverse_iterator& operator--() { m_ptr++; return *this; }  
		reverse_iterator operator--(int) { iterator tmp = *this; ++(*this); return tmp; }
		reverse_iterator operator+(const int& b) { return (this->get_ptr() - b);}
		T& operator[](const int& b) { return ( m_ptr[b]);}
		friend iterator operator+(const int& b, const reverse_iterator& a) { return (a.m_ptr - b);}
		reverse_iterator operator-(const int& b) { return (this->get_ptr() + b);}
		ptrdiff_t operator-(const reverse_iterator& b) { return (this->get_ptr() + b.get_ptr());}
		reverse_iterator& operator=(reverse_iterator b) { this->m_ptr = b.m_ptr; return (*this);}
		reverse_iterator operator+=(const int& b) { this->m_ptr = this->get_ptr() - b; return (this->get_ptr());}
		reverse_iterator operator-=(const int& b) { this->m_ptr = this->get_ptr() + b; return (this->get_ptr());}
		bool operator== (const reverse_iterator& b) { return this->get_ptr() == b.get_ptr(); };
		bool operator!= (const reverse_iterator& b) { return this->get_ptr() != b.get_ptr(); };
		bool operator>= (const reverse_iterator& b) { return this->get_ptr() >= b.get_ptr(); };
		bool operator<= (const reverse_iterator& b) { return this->get_ptr() <= b.get_ptr(); };
		bool operator> (const reverse_iterator& b) { return this->get_ptr() > b.get_ptr(); };
		bool operator< (const reverse_iterator& b) { return this->get_ptr() < b.get_ptr(); };

		private:

		T* m_ptr;
	};

	class reverse_const_iterator : std::iterator<std::random_access_iterator_tag, T>
	{
		public : 

		reverse_const_iterator(T* ptr) : m_ptr(ptr) {}
		const T* get_ptr() { return this->m_ptr;};

		reverse_const_iterator(const reverse_const_iterator& x) {this->m_ptr = x.m_ptr;}
		reverse_const_iterator() {};
		~reverse_const_iterator() {};


		const T& operator*() const { return *m_ptr; }
		const T* operator->() { return m_ptr; }
		reverse_const_iterator& operator++() { m_ptr--; return *this; }  
		reverse_const_iterator operator++(int) { const_iterator tmp = *this; --(*this); return tmp; }
		reverse_const_iterator& operator--() { m_ptr++; return *this; }  
		reverse_const_iterator operator--(int) { const_iterator tmp = *this; ++(*this); return tmp; }
		reverse_const_iterator operator+(const int& b) { return (this->get_ptr() - b);}
		const T& operator[](const int& b) { return ( m_ptr[b]);}
		friend const_iterator operator+(const int& b, const reverse_const_iterator& a) { return (a.m_ptr - b);}
		reverse_const_iterator operator-(const int& b) { return (this->get_ptr() + b);}
		ptrdiff_t operator-(const reverse_const_iterator& b) { return (this->get_ptr() + b.get_ptr());}
		reverse_const_iterator& operator=(reverse_const_iterator b) { this->m_ptr = b.m_ptr; return (*this);}
		reverse_const_iterator& operator=(reverse_iterator b) { this->m_ptr = b.get_ptr(); return (*this);}
		reverse_const_iterator operator+=(const int& b) { this->m_ptr = this->get_ptr() - b; return (this->get_ptr());}
		reverse_const_iterator operator-=(const int& b) { this->m_ptr = this->get_ptr() + b; return (this->get_ptr());}
		bool operator== (const reverse_const_iterator& b) { return this->get_ptr() == b.get_ptr(); };
		bool operator!= (const reverse_const_iterator& b) { return this->get_ptr() != b.get_ptr(); };
		bool operator>= (const reverse_const_iterator& b) { return this->get_ptr() >= b.get_ptr(); };
		bool operator<= (const reverse_const_iterator& b) { return this->get_ptr() <= b.get_ptr(); };
		bool operator> (const reverse_const_iterator& b) { return this->get_ptr() > b.get_ptr(); };
		bool operator< (const reverse_const_iterator& b) { return this->get_ptr() < b.get_ptr(); };

		private:

		T* m_ptr;
	};
		

	class out_of_range : public std::exception
	{
		public :

			virtual const char* what() const throw()
				{
					return ("Exception caught : trying to access out of bound array");
				}
	};

	class not_moveable : public std::exception
	{
		public :

			virtual const char* what() const throw()
				{
					return ("Exception caught : the vector's type is not a movable type");
				}
	};

	class length_error : public std::exception
	{
		public :

			virtual const char* what() const throw()
				{
					return ("Exception caught : the capacity requested does not fit max size");
				}
	};



		Vector();
		Vector( Vector const & src );
		~Vector();

		Vector &		operator=( Vector const & rhs );

		iterator begin();
		const_iterator begin() const;
		iterator end();
		const_iterator end() const;
		reverse_iterator rbegin();
		reverse_const_iterator rbegin() const;
		reverse_iterator rend();
		reverse_const_iterator rend() const;

		size_t size() const;
		size_t max_size() const;
		void resize(size_t n);
		void resize(size_t n, T val);
		size_t capacity() const;
		bool empty() const;
		void reserve(size_t n);

		T &		operator[](size_t n);
		T const &		operator[](size_t n) const;
		T &at(int);
		const T &at(int) const;
		T &front();
		const T &front() const;
		T &back();
		const T &back() const;

		template <class InputIterator>
		void assign (InputIterator first, InputIterator last);
		void assign (size_t n, const T& val);


		void push_back(const T &val);
		void pop_back();
		void swap(Vector<T> & x);
		void clear();
		
		std::allocator<T> get_allocator() const;

	private:

		void reallocate(int newsize);

		T* _array;
		size_t _size;
		size_t _capacity;
		size_t _max_size;
		std::allocator<T> _myalloc;
};

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

template<typename T>
Vector<T>::Vector() : _size(0), _capacity(0), _max_size((size_t)(pow(2, 64)/ (sizeof(T))) - 1){

	if (std::is_nothrow_move_constructible<T>::value == false)
		throw(not_moveable());
}

template<typename T>
Vector<T>::Vector( const Vector & src ) : _size(src.get_size()), _capacity(src.get_size()){

	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

template<typename T>
Vector<T>::~Vector(){

	if (this->capacity() != 0)
	{
		this->_myalloc.deallocate(this->_array, this->size());
		this->_myalloc.destroy(this->_array);
	}
}


/*
** --------------------------------- OPERATORS ---------------------------------
*/

template<typename T>
Vector<T> &				Vector<T>::operator=( Vector const & rhs )
{
	int i = 0;
	if ( this != &rhs )
	{
		while (i < this->_size)
		{
			this->_array[i] = rhs.get_array(i);
			i++;
		}
	}
	return *this;
}

template<typename T>
T &		Vector<T>::operator[](size_t n){

	return(this->_array[n]);
}

template<typename T>
T const &		Vector<T>::operator[](size_t n) const{
	
	return(this->_array[n]);
}


/*
** --------------------------------- METHODS ----------------------------------
*/
template<typename T>
typename Vector<T>::iterator Vector<T>::begin(){

	return iterator(&_array[0]);
}
template<typename T>
typename Vector<T>::const_iterator Vector<T>::begin() const{

	return const_iterator(&_array[0]);
}

template<typename T>
typename Vector<T>::iterator Vector<T>::end(){

	return iterator(&_array[this->size()]);
}
template<typename T>
typename Vector<T>::const_iterator Vector<T>::end() const{

	return const_iterator(&_array[this->size()]);
}

template<typename T>
typename Vector<T>::reverse_iterator Vector<T>::rbegin(){

	return reverse_iterator(&_array[this->size() - 1]);
}
template<typename T>
typename Vector<T>::reverse_const_iterator Vector<T>::rbegin() const{

	return reverse_const_iterator(&_array[this->size() - 1]);
}

template<typename T>
typename Vector<T>::reverse_iterator Vector<T>::rend(){

	return reverse_iterator(&_array[-1]);
}
template<typename T>
typename Vector<T>::reverse_const_iterator Vector<T>::rend() const{

	return reverse_const_iterator(&_array[-1]);
}

template<typename T>
void Vector<T>::reallocate(int newsize){

	T* buffer;
	int i = 0;

	if (this->capacity() > 0)
	{
		buffer = _myalloc.allocate(newsize);
		while (i < this->size())
		{
			buffer[i] = this->_array[i];
			i++;
		}
		_myalloc.deallocate(this->_array, this->size());
		_myalloc.destroy(this->_array);
		this->_array = buffer;
	}
	else
		this->_array = _myalloc.allocate(newsize);
	this->_capacity = newsize;
}

template<typename T>
void Vector<T>::resize(size_t n){

	int i;

	if (n <= this->size())
	{
		this->_size = n;
	}
	else
	{
		if (n > this->capacity())
			reallocate(n);
		i = this->size();
		while (i < n)
		{
			this->_array[i] = 0;
			i++;
		}
		this->_size = n;
	}

}

template<typename T>
void Vector<T>::resize(size_t n, T val){

	int i;

	if (n <= this->size())
	{
		this->_size = n;
	}
	else if (n > this->size())
	{
		if (n > this->capacity())
			reallocate(n);
		i = this->size();
		while (i < n)
		{
			this->_array[i] = val;
			i++;
		}
		this->_size = n;
	}
}

template<typename T>
bool Vector<T>::empty() const{

	if (this->size() == 0)
		return(true);
	return(false);
}

template<typename T>
void Vector<T>::reserve(size_t n){

	if (n > this->max_size())
		throw(length_error());
	else if (n > this->capacity())
		reallocate(n);
	return;
}

template <typename T>
template <class InputIterator>
void Vector<T>::assign(InputIterator first, InputIterator last){

	Vector<T>::iterator it;

	if (first > last || last - first > this->max_size())
		throw(length_error());
	if (last - first > this->capacity())
		this->reallocate(last - first);
	this->_size = last - first;
	if (first >= this->begin())
	{
		it = this->begin();
		while (first != last)
		{
			*it = *first;
			first++;
			it++;
		}
	}
	else if (first < this->begin())
	{
		it = (this->end() - 1);
		last--;
		while (first - 1 != last)
		{
			*it = *last;
			last--;
			it--;
		}
	}
}

template < class T,
           class = typename std::enable_if<std::is_integral<T>::value>::type>
void Vector<T>::assign (size_t n, const T& val){

	int i = 0;

	if (n > this->max_size())
		throw(length_error());
	if (n > this->capacity())
		reallocate(n);

	this->size = n;
	while(i < n)
	{
		this->_array[i] = val;
		i++;
	}
}



template<typename T>
void Vector<T>::push_back(const T &value){

	if (this->size() < this->capacity())
	{
		this->_size++;
	}
	else if (this->capacity() > 0)
	{
		this->reallocate(this->capacity() * 2);
		this->_size++;
	}
	else
	{
		this->reallocate(1);
		this->_size++;
	}
	this->_array[this->size() - 1] = value;
}

template<typename T>
void Vector<T>::pop_back(){

	this->_size--;
}

template<typename T>
void Vector<T>::swap(Vector<T> & x){

	T* buffarray;
	size_t buffsize;
	size_t buffmaxsize;
	size_t buffcapacity;

	buffarray = x._array;
	x._array = this->_array;
	this->_array = buffarray;

	buffsize = x._size;
	x._size = this->_size;
	this->_size = buffsize;

	buffmaxsize = x._max_size;
	x._max_size = this->_max_size;
	this->_max_size = buffmaxsize;

	buffcapacity = x._capacity;
	x._capacity = this->_capacity;
	this->_capacity = buffcapacity;
}

template<typename T>
void Vector<T>::clear(){

	this->_size = 0;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

template<typename T>
size_t Vector<T>::size() const{

	return(this->_size);
}

template<typename T>
size_t Vector<T>::capacity() const{

	return(this->_capacity);
}

template<typename T>
T &Vector<T>::at(int i){

	if (i < 0 || i >= this->size())
		throw(out_of_range());
	return(this->_array[i]);
}

template<typename T>
const T &Vector<T>::at(int i) const{

	if (i < 0 || i >= this->size())
		throw(out_of_range());
	return(this->_array[i]);
}

template<typename T>
size_t Vector<T>::max_size() const{

	return(this->_max_size);
}

template<typename T>
T &Vector<T>::front(){

	return (this->_array[0]);
}

template<typename T>
const T &Vector<T>::front() const{

	return (this->_array[0]);
}

template<typename T>
T &Vector<T>::back(){

	return (this->_array[this->size() - 1]);
}

template<typename T>
const T &Vector<T>::back() const{

	return (this->_array[this->size() - 1]);
}

template<typename T>
std::allocator<T> Vector<T>::get_allocator() const{

	return (this->_myalloc);
}

template<typename T>	
bool		operator==( Vector<T> const & rhs,  Vector<T> const & rhad){

	int i = 0;

	if (rhs.size() == rhad.size())
	{
		while (i < rhs.size())
		{
			if (rhs[i] != rhad[i])
				return (false);
			i++;
		}
		return (true);
	}
	return (false);
}

template<typename T>
bool		operator!=( Vector<T> const & rhs,  Vector<T> const & rhad){

	int i = 0;

	if (rhs.size() == rhad.size())
	{
		while (i < rhs.size())
		{
			if (rhs[i] != rhad[i])
				return (true);
			i++;
		}
		return (false);
	}
	return (true);
}

template<typename T>
bool		operator<( Vector<T> const & rhs,  Vector<T> const & rhad){

	int i = 0;

		while (i < rhs.size() && i < rhad.size())
		{
			if (rhs[i] >= rhad[i])
				return (false);
			i++;
		}
		if (rhad.size() >= rhs.size())
			return (true);
		return (false);
}

template<typename T>
bool		operator>( Vector<T> const & rhs,  Vector<T> const & rhad){

	int i = 0;

		while (i < rhs.size() && i < rhad.size())
		{
			if (rhs[i] <= rhad[i])
				return (false);
			i++;
		}
		if (rhad.size() <= rhs.size())
			return (true);
		return (false);
}

template<typename T>
bool		operator<=( Vector<T> const & rhs,  Vector<T> const & rhad){

	int i = 0;

		while (i < rhs.size() && i < rhad.size())
		{
			if (rhs[i] > rhad[i])
				return (false);
			i++;
		}
		if (rhad.size() > rhs.size())
			return (true);
		return (false);
}

template<typename T>
bool		operator>=( Vector<T> const & rhs,  Vector<T> const & rhad){

	int i = 0;

		while (i < rhs.size() && i < rhad.size())
		{
			if (rhs[i] < rhad[i])
				return (false);
			i++;
		}
		if (rhad.size() < rhs.size())
			return (true);
		return (false);
}

/* ************************************************************************** */
#endif /* ********************************************************** VECTOR_H */
