#include <iostream>
#include <string>
#include <vector>
#include "Vector.hpp"
#include <math.h>

int main()
{
	std::vector<int> vecint;

	std::cout << vecint.size() << " " << vecint.capacity() << std::endl;
	vecint.push_back(12);
	std::cout << vecint.size() << " " << vecint.capacity() << std::endl;
	vecint.push_back(5);
	std::cout << vecint.size() << " " << vecint.capacity() << std::endl;
	vecint.push_back(18);
	std::cout << vecint.size() << " " << vecint.capacity() << std::endl;
	vecint.push_back(18);
	std::cout << vecint.size() << " " << vecint.capacity() << std::endl;
	vecint.push_back(18);
	std::cout << vecint.size() << " " << vecint.capacity() << std::endl;
	vecint.push_back(18);
	std::cout << vecint.size() << " " << vecint.capacity() << std::endl;
	vecint.push_back(18);
	std::cout << vecint.size() << " " << vecint.capacity() << std::endl;
	vecint.push_back(18);
	std::cout << vecint.size() << " " << vecint.capacity() << std::endl;
	vecint.push_back(18);
	std::cout << vecint.size() << " " << vecint.capacity() << std::endl;
	vecint.push_back(18);
	std::cout << vecint.size() << " " << vecint.capacity() << std::endl;
	vecint.push_back(18);
	std::cout << vecint.size() << " " << vecint.capacity() << std::endl;
	vecint.push_back(18);
	std::cout << vecint.size() << " " << vecint.capacity() << std::endl;
	vecint.push_back(18);
	std::cout << vecint.size() << " " << vecint.capacity() << std::endl;
	vecint.push_back(18);
	std::cout << vecint.size() << " " << vecint.capacity() << std::endl;
	vecint.push_back(18);
	std::cout << vecint.size() << " " << vecint.capacity() << std::endl;
	vecint.push_back(18);
	std::cout << vecint.size() << " " << vecint.capacity() << std::endl;
	vecint.push_back(18);
	std::cout << vecint.size() << " " << vecint.capacity() << std::endl;
	vecint.push_back(18);
	std::cout << vecint.size() << " " << vecint.capacity() << std::endl;
	vecint.push_back(18);
	std::cout << vecint.size() << " " << vecint.capacity() << std::endl;
	vecint.push_back(18);
	std::cout << vecint.size() << " " << vecint.capacity() << std::endl;
	vecint.push_back(18);
	std::cout << vecint.size() << " " << vecint.capacity() << std::endl;
	vecint.push_back(18);
	std::cout << vecint.size() << " " << vecint.capacity() << std::endl;
	vecint.push_back(18);
	std::cout << vecint.size() << " " << vecint.capacity() << std::endl;
	vecint.push_back(18);
	std::cout << vecint.size() << " " << vecint.capacity() << std::endl;
	vecint.push_back(18);
	std::cout << vecint.size() << " " << vecint.capacity() << std::endl;
	vecint.push_back(18);
	std::cout << vecint.size() << " " << vecint.capacity() << std::endl;
	vecint.push_back(18);
	std::cout << vecint.size() << " " << vecint.capacity() << std::endl;
	vecint.push_back(18);
	std::cout << vecint.size() << " " << vecint.capacity() << std::endl;
	vecint.push_back(18);
	std::cout << vecint.size() << " " << vecint.capacity() << std::endl;
	vecint.push_back(18);
	std::cout << vecint.size() << " " << vecint.capacity() << std::endl;
	vecint.push_back(18);
	std::cout << vecint.size() << " " << vecint.capacity() << std::endl;
	vecint.push_back(18);
	std::cout << vecint.size() << " " << vecint.capacity() << std::endl;
	vecint.push_back(18);
	std::cout << vecint.size() << " " << vecint.capacity() << std::endl;

	std::vector<int> veccpy(vecint);

	std::cout << veccpy.size() << " " << veccpy.capacity() << std::endl;
	veccpy.push_back(18);
	std::cout << veccpy.size() << " " << veccpy.capacity() << std::endl;

	Vector<int> vec;

		std::cout << vec.size() << " " << vec.capacity() << std::endl;

	vec.push_back(5);
	std::cout << vec.size() << " " << vec.capacity() << " " << vec.at(0) << std::endl;
	vec.push_back(5);
	std::cout << vec.size() << " " << vec.capacity() << " " << vec.at(0) << std::endl;
	vec.push_back(5);
	std::cout << vec.size() << " " << vec.capacity() << " " << vec.at(0) << std::endl;
	vec.push_back(5);
	std::cout << vec.size() << " " << vec.capacity() << " " << vec.at(0) << std::endl;
	vec.push_back(5);
	std::cout << vec.size() << " " << vec.capacity() << " " << vec.at(0) << std::endl;
	vec.push_back(5);
	std::cout << vec.size() << " " << vec.capacity() << " " << vec.at(0) << std::endl;
	vec.push_back(5);
	std::cout << vec.size() << " " << vec.capacity() << " " << vec.at(0) << std::endl;
	vec.push_back(5);
	std::cout << vec.size() << " " << vec.capacity() << " " << vec.at(0) << std::endl;
	vec.push_back(5);
	std::cout << vec.size() << " " << vec.capacity() << " " << vec.at(0) << std::endl;
	vec.push_back(5);
	std::cout << vec.size() << " " << vec.capacity() << " " << vec.at(0) << std::endl;
	vec.push_back(5);
	std::cout << vec.size() << " " << vec.capacity() << " " << vec.at(0) << std::endl;
	vec.push_back(5);
	std::cout << vec.size() << " " << vec.capacity() << " " << vec.at(0) << std::endl;
	vec.push_back(5);
	std::cout << vec.size() << " " << vec.capacity() << " " << vec.at(0) << std::endl;
	vec.push_back(5);
	std::cout << vec.size() << " " << vec.capacity() << " " << vec.at(0) << std::endl;
	vec.push_back(5);
	std::cout << vec.size() << " " << vec.capacity() << " " << vec.at(0) << std::endl;

	std::vector<int> sizint;
	std::cout << sizint.max_size() << std::endl;
	std::vector<char> sizchar;
	std::cout << sizchar.max_size()<< std::endl;
	std::vector<std::string> sizstring;
	std::cout << sizstring.max_size() << std::endl;
	std::vector<bool> sizbool;
	std::cout << sizbool.max_size() << std::endl;
	std::vector<double> sizd;
	std::cout << sizd.max_size() << std::endl;

	std::vector<int> sizintb;
	std::cout << sizintb.max_size() << std::endl;
	std::vector<char> sizcharb;
	std::cout << sizcharb.max_size() << std::endl;
	std::vector<std::string> sizstringb;
	std::cout << sizstringb.max_size() << std::endl;
	std::vector<bool> sizboolb;
	std::cout << sizboolb.max_size() << std::endl;
	std::vector<double> sizdb;
	std::cout << sizdb.max_size() << std::endl;

	std::vector<int> babar;
	babar.push_back(10);
	babar.resize(3, 8);
	std::cout << babar.size() << " " << babar.capacity() << " " << babar.at(2) << std::endl;
	babar.resize(2);
	std::cout << babar.size() << " " << babar.capacity() << " " << babar.at(1) << std::endl;
	babar.reserve(20);
	std::cout << babar.size() << " " << babar.capacity() << " " << babar.at(1) << std::endl;
	babar.reserve(8);
	std::cout << babar.size() << " " << babar.capacity() << " " << babar.at(1) << std::endl;

	std::cout << "------" << std::endl;

	Vector<int> babarre;
	babarre.push_back(10);
	babarre.resize(3, 8);
	babarre.resize(2);
	std::cout << babarre.size() << " " << babarre.capacity() << " " << babarre.at(1) << std::endl;
	//	int i = 0;
	//while (1)
	//{
	babarre.reserve(20);
	//std::cout << babarre.capacity() << std::endl;
	//i++;
	//}
	//std::cout << "test" << std::endl;
	std::cout << babarre.size() << " " << babarre.capacity() << " " << babarre.at(1) << std::endl;
	babarre.reserve(8);
	std::cout << babarre.size() << " " << babarre.capacity() << " " << babarre.at(1) << std::endl;

	std::cout << "------" << std::endl;

	std::vector<int> dude;
	dude.push_back(10);
	dude.push_back(20);
	int a = dude.back();
	a++;
	std::cout << dude.size() << " " << dude.capacity() << " " << dude.back() << std::endl;

	std::cout << "------" << std::endl;

	Vector<int> dudel;
	dudel.push_back(10);
	dudel.push_back(20);
	int b = dudel.back();
	b++;
	std::cout << dudel.size() << " " << dudel.capacity() << " " << dudel.back() << std::endl;
	
	std::cout << "------" << std::endl;

	dude.clear();
	std::cout << dude.size() << " " << dude.capacity() << " " << dude[30] << std::endl;

	dudel.clear();
	std::cout << dudel.size() << " " << dudel.capacity() << " " << dudel[-1] << std::endl;
	std::allocator<int> myalloc;
	int *array;
	array = dudel.get_allocator().allocate(10);
	int i = 0;
	while (i < 10)
	{
		myalloc.construct(array + i, 100);
		std::cout << sizeof(array) << std::endl;
		i++;
	}
	int *p = &vecint[0];
	std::cout << *p << std::endl;


	std::cout << "------" << std::endl;

	std::vector<int> asd;
	std::vector<int>::const_iterator dsa;
	std::vector<int>::const_iterator dsaa(dsa);
	asd.push_back(10);
	asd.push_back(20);
	asd.push_back(30);
	dsa = asd.begin();
	*dsa++;
	std::cout << *(dsa) << std::endl;

	if (asd.begin() < (asd.begin() + 1))
		std::cout << "oki" << std::endl;

	Vector<int> qwe;
	
	Vector<int>::iterator ewq;
	Vector<int>::const_iterator ewqq;

	ewqq = qwe.begin();
	*ewqq++;
	qwe.push_back(10);
	qwe.push_back(20);
	qwe.push_back(30);
	ewq = qwe.begin();
	std::cout << (ewq[2]) << std::endl;

	std::cout << "------" << std::endl;

	Vector<int> undeutroi;
	Vector<int> quatrcinqsis;
	Vector<int>::iterator undeutroib;
	Vector<int>::iterator quatrcinqsisb;

	undeutroi.push_back(1);
	undeutroi.push_back(2);
	undeutroi.push_back(3);
	quatrcinqsis.push_back(4);
	quatrcinqsis.push_back(5);
	quatrcinqsis.push_back(6);
	undeutroib = undeutroi.begin();
	quatrcinqsisb = quatrcinqsis.begin();

	std::cout << *undeutroib << " " << *quatrcinqsisb << std::endl;
	undeutroi.swap(quatrcinqsis);
	std::cout << *undeutroib << " " << *quatrcinqsisb << std::endl;
	undeutroib = undeutroi.begin();
	quatrcinqsisb = quatrcinqsis.begin();
	std::cout << *undeutroib << " " << *quatrcinqsisb << std::endl;

	undeutroi.assign(undeutroi.begin(), undeutroi.end() + 5);
	undeutroi.assign((undeutroi.begin() + 1), (undeutroi.begin() + 8));
	undeutroi.assign(quatrcinqsis.begin(), quatrcinqsis.end() + 5);
	undeutroi.assign(100, 15);
	std::cout << undeutroi[28] << " " << undeutroi.size() << " " << undeutroi.capacity() << std::endl;



}