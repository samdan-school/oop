#include <iostream>;
using namespace std;

int main()
{
	// а гэсэн бүхэл тоо зарлаж, түүнд 125 гэсэн анхны утга оноож өгнө
	int a = 125;

	// p гэсэн бүхэл тоон хаяган хувьсагч зарлаж, а-н хаягийг p-д оноож өгнө
	int *p = &a;

	// p буюу а-н хаягийг хэлнэ
	cout << p << endl;

	// р-д байгаа хаягийн утга буюу а-125 -г хэвлэнэ
	cout << *p << endl;

	// p хувьсагч а-н хаяг дээр 1-ийг нэмэх ба энэ заагч нь бүхэл тоон төрөл
	// учир &a + 4 байна.
	p++;

	// р-н шинэ хаягийг хэвлэнэ
	cout << p << endl;

	// шинэ хаягт байгаа утгыг хэвлэнэ
	cout << *p << endl;
}