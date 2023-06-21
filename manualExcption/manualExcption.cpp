#include <iostream>
using namespace std;

int main()
{
	try {
		cout << "Selamat Belajar di Prodi TI UMY" << endl;
		throw 0, 5; //melemparkan sebuah integer maka
		cout << "Pengecualian tidak akan dieksekusi" << endl;
	}
	catch (int a) {
		//blok ini akan dieksekuis
		cout << "Pengecualian akan dieksekusi" << endl;
	}
	catch (...) {
		/*jika selain integer maka block ini akan diesekusi*/
		cout << "default Pengecualian dexsekusi" << endl;
	}

	return 0;
}