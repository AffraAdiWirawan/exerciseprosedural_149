#include <iostream>

using namespace std;

#include <iostream>
using namespace std;

int arr[20];
int n;
string nama;

double rerata(double a, double b) {
	return (a + b) / 2;
}

string status(double rerata) {
	if (rerata >= 70)
		return "Diterima";
	else
		return "Tidak Diterima";
}

string status2(double rerata, double nilM) {
	if (rerata >= 70 || nilM >= 80)
		return "Diterima";
	else
		return "Tidak Diterima";
}

void input() {
	int temp;
	int n;
	double nilM, nilB;
	while (true) {
		cout << "Masukkan Jumlah Mahasiswa : ";
		cin >> n;

		if (n <= 20) {
			break;
		}
		else {
			cout << "\nJumlah Mahasiswa yang anda masukkan maksimal 20 element. \n";
		}
	}
	cout << "Masukkan Nama Mahasiswa : ";
	cin >> nama;
	cout << "Masukkan nilai Matematika : ";
	cin >> nilM;
	cout << "Masukkan nilai Bahasa Inggris : ";
	cin >> nilB;
	cout << "Status Kelulusan : " << status(rerata(nilM, nilB));
	cout << "\nStatus Kelulusan : " << status2(rerata(nilM, nilB), nilM) << "\n";

	for (int i = n; i < n; i++) {
		cout << arr[n];
	}
}

int main() {
	input();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
