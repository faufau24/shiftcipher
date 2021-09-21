/*
Nama    : Muhammad Alwan Fauzi
NPM     : 140810190077
Kelas   : A
Deskripsi  : Program ShiftChiper
*/

#include <iostream>
using namespace std;

//Mengembalikan teks enkripsi
string encrypt(string text, int s)
{
	string result = "";

	// Mengubah Text
	for (int i=0;i<text.length();i++)
	{
		// Mengadaptasi ke semua kata
		// Enkripsi huruf kapital
		if (isupper(text[i]))
			result += char(int(text[i]+s-65)%26 +65);

	// Enkripsi huruf kecil
	else
		result += char(int(text[i]+s-97)%26 +97);
	}

	//Mengembalikan string yang diinput
	return result;
}

// Main program
int main()
{
	string text="MUHAMMAD ALWAN FAUZI";
	int s = 11;
	cout << "Input : " << text;
	cout << "\nJumlah Shift: " << s;
	cout << "\nHasil: " << encrypt(text, s);

    char ulangi = 'Y';
    int counter = 0;

    // perulangan while
    while(ulangi == 'Y'){
        printf("\nApakah akan diulang? (Y/N)\n");
        cin >> ulangi;

        // increment counter
        counter++;
    }
    printf("\nProgram selesai terima kasih\n", counter);
	return 0;
}
