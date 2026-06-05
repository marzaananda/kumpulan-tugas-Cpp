#include <iostream>
using namespace std;

string tumpukanTeks[100];
int atas = -1;

void tambahData(string data) {
    atas++;
    tumpukanTeks[atas] = data;
}

void batal() {
    if (atas > 0) {
        atas--;
        cout << "Undo berhasil!\n";
    } else {
        cout << "Tidak ada data untuk di-undo!\n";
    }
}

void tampilkanDokumen() {
    if (atas >= 0) {
        cout << "\nIsi Dokumen:\n";
        cout << tumpukanTeks[atas] << endl;
    } else {
        cout << "Dokumen kosong.\n";
    }
}

int main() {
    int pilihan;
    string teks;

    tambahData("");

    do {
        cout << "\n===== TEXT EDITOR =====\n";
        cout << "1. Ketik Teks\n";
        cout << "2. Undo\n";
        cout << "3. Tampilkan Dokumen\n";
        cout << "4. Keluar\n";
        cout << "Pilih : ";
        cin >> pilihan;
        cin.ignore();

        switch (pilihan) {

        case 1:
            cout << "Masukkan teks : ";
            getline(cin, teks);

            tambahData(tumpukanTeks[atas] +" "+ teks);
            break;

        case 2:
            batal();
            break;

        case 3:
            tampilkanDokumen();
            break;

        case 4:
            cout << "Program selesai.\n";
            break;

        default:
            cout << "Pilihan tidak valid!\n";
        }

    } while (pilihan != 4);

    return 0;
}