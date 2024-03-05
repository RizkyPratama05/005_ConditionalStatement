#include <iostream>
using namespace std;
int main() {
	int nilMtk, nilBahasa, nilFisika;

	string status;
	float nRerata;


	cout << "Nilai Matematika = " << endl;
	cin >> nilMtk;
	cout << "Nilai Bahasa = " << endl;
	cin >> nilBahasa;
	cout << "Nilai Fisika = " << endl;
	cin >> nilFisika;


	float rerata = (nilBahasa + nilMtk + nilFisika) / 3;


	if (nilMtk > 70 || rerata > 60) {
		status = " Lulus ";
		if (nilFisika >= 90) {
			status = " Lulusan Terbaik ";

		}

	}
	else {
		status = " Tidak Lulus ";

	}
	cout << "Nilai Matetika = " << nilMtk << endl;
	cout << "Nilai Bahasa = " << nilBahasa << endl;
	cout << "status kelulusan = " << status;




}
