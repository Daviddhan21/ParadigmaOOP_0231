

class Mahasiswa {
public:
    int nim;
    string nama;
    float nilai;

    void printData() {
        cout << "NIM: " << nim << endl;
        cout << "Nama: " << nama << endl;
        cout << "Nilai: " << nilai << endl;
    }
}; // batas class

int main() {
    Mahasiswa mhs;
    mhs.nim = 2026;
    mhs.nama = "YonoKiwi";
    mhs.nilai = 89.5;

    mhs.printData();

    return 0;
}// batas main