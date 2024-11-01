#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector<string> nama, npm, tanggalLahir;
    string n, np, tl;
    int pil, h;
    char t;
    bool tes;
    do{
            cout << "=====Menu data mahasiswa====\n";
            cout << "1. Input Data Mahasiswa\n";
            cout << "2. Lihat Data Mahasiswa\n";
            cout << "3. Hapus Data Mahasiswa\n";
            cout << "4. Exit\n";
            cout << "Masukkan Nomor Pilihan (1-4) :";
            cin >> pil;
            system ("cls"); // buat ngapus layar

            switch (pil) {

            case 1:
                cin.ignore (); //bisa setelah input atau sebelum input
                cout << "Masukkan Nama Mahasiswa : "; getline (cin, n);
                nama.push_back(n);
                cout << "Masukkan NPM mahasiswa : ";
                cin >> np;
                cin.ignore ();
                npm.push_back (np);
                cout << "Masukkan tanggal lahir : "; getline (cin, tl);  //spasinya jdi karakter juga
                tanggalLahir.push_back (tl); //tambh data
                cout << "\nData telah ditambahkan\n";
                cout <<"Kembali ke menu utama? (y/n) : ";
                cin >> t;
                cin.ignore ();
                if (t== 'y' || t == 'Y') {
                    tes = true;
                } else if (t == 'n' || t == 'N') {
                    tes = false;

                }
                system ("cls");
                break;

            case 2:
                for (int i= 0; i < nama.size (); i++){
                        cout << "Data Mahasiswa ke-" << i+1 << endl;
                        cout << " Nama          : " <<nama[i] << endl;
                        cout << " NPM           : " <<npm[i] << endl;
                        cout << " Tanggal Lahir : " <<tanggalLahir[i] << endl;
                        cout << endl;

                }

                cout << "\nKembali ke menu utama? (y/n) : ";
                cin >> t;
                if ( t == 'y' || t == 'Y'){
                    tes = true;
                } else if ( t == 'n' || t == 'N') {
                    tes = false;
                }
                system ("cls");
                break;

            case 3:
                for (int i = 0; i<nama.size (); i++) {
                        cout << "Data mahasiswa ke-" << i+1 << endl;
                        cout << "Nama              : " << nama[i] << endl;
                        cout << "NPM               : " <<npm[i] << endl;
                        cout << "Tanggal Lahir     : " << tanggalLahir[i] <<endl;
                        cout << endl;
                }
                cout << "\nData mahasiswa ke berapa yang ingin dihapus? (masukkan Angka) : ";
                cin >> h;

                nama.erase (nama.begin()+h-1); //buat ngapus data, begin = 0, ditamnah h karena angka yg kita inginkan tp dikurang 1 karena begin dimulai dr 0
                npm.erase (npm.begin()+h-1);
                tanggalLahir.erase (tanggalLahir.begin () +h-1);

                cout << "\n Data Mahasiswa ke-" << h<< "telah dihapus" << endl;
                cout << "\nKembali ke menu utama? (y/n) : ";
                cin >> t;
                if (t=='y'|| t=='Y') {
                    tes = true;
                } else if (t == 'n' || t == 'N') {
                    tes = false;

                }
                system ("cls");
                break;

            case 4:
                tes = false;
                break;

            default:
                cout << "\nPilihan yang anda pilih tidak tersedia, kembali ke menu utama (y/n) : ";
                cin >> t;
                if ( t== 'y' || t== 'Y'){
                    tes = true;
                } else if (t == 'n' || t== 'N') {
                    tes = false;

                }
                system ("cls");
                break;


            }
    } while (tes == true);
    cout << "program selesai";

}
