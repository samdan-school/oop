#include <iostream>
using namespace std;

/*
    Тухайн өгөгдсөн а хүснэгтийн хамгийн их эсвэл бага утгыг нь олно
    
	Params:
    int a[] - Хүснэгт
    bool condition  - Үнэн үед хамгийн утга / Худал үед хамгийн бага утгыг олно
    
	Return:
    return хамгийн их эсвэл бага утга
*/
int find(int a[], int n, bool condition)
{
	// а хүснэгтийн эхний элементийг хамгийн их / бага утга гэж үзнэ
	int num = a[0];

	// давталтанд оруулж нөхцлөө шалгана
	for (int i = 1; i < n; i++)
	{
		// зарлаж өгсөн num-тай хүснэгтийн i дахь элементтэй харьцуулна

		// i дахь элемент их үед, num-д утгыг нь өгнө
		if (num <= a[i] && condition)
			num = a[i];
		// i дахь элемент бага үед, num-д утгыг нь өгнө
		if (num >= a[i] && !condition)
			num = a[i];
	}

	return num;
}

int main()
{

	int n;
	int condition;
	// хүснэгтийн хэмжээг оруулсан
	cout << "Хүснэгтийн хэмжээ: ";
	cin >> n;

	cout << "Их утга олох бол 1, Бага утга олох үед 0: ";
	// Их багыг олоход нөхцөлийг гараас авна
	cin >> condition;

	// n хэмжээст хүснэгт зарлан
	int a[n];

	cout << "elementүүдээ оруулна уу: ";
	// n элементтэй хүснэгт үүсгэж утгыг нь оруулсан
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	// а хүснэгтийн хамгийн их эсвэл бага утгыг нь олж хэвлэнэ
	cout << "Хариу: ";
	cout << find(a, n, (condition > 0 ? true : false)) << endl;

	return 0;
}