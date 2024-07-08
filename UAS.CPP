#include <iostream>
using namespace std;
int snbt;
int snbp;
class MasukUniversitas
{

private: // isi access modifier disini
    int uangPendaftaran;
    // isi daftar variable yang dibutuhkan di bawah ini
    int uangSemesterPertama;
    int uangBangunan;
    int totalBiaya;

public:
    MasukUniversitas()
    {
        uangPendaftaran;
        // isi nilai default variable yang dibutuhkan di bawah ini
        uangSemesterPertama;
        uangBangunan;
        totalBiaya;
    }
    virtual void namaJalurMasuk()
    {
        cout << " Nama Jalur Masuk: " << endl;
        return;
    } // isi disini dengan fungsi virtual yang dibutuhkan
    // isi setter dan getter variable yang dibutuhkan di bawah ini
    void setUangPendaftaran(int nilai)
    {
        this->uangPendaftaran = nilai;
    }
    int getUangPendaftaran()
    {
        return uangPendaftaran;
    }
    void setUangSemesterPertama(int nilai)
    {
        this->uangSemesterPertama = nilai;
    }
    int getUangSemesterPertama()
    {
        return uangSemesterPertama;
    }
    void setUangBangunan(int nilai)
    {
        this->uangBangunan = nilai;
    }
    int getUangBangunan()
    {
        return uangBangunan;
    }
    void setTotalBiaya(int nilai)
    {
        this->totalBiaya = nilai;
    }
    int getTotalBiaya()
    {
        return totalBiaya;
    }
};
class SNBT : public MasukUniversitas
{

    // isi disini untuk melengkapi class SNBT
};
class SNBP : public MasukUniversitas
{
    // isi disini untuk melengkapi class SNBP
};
void input()
{
    cout << "Masukkan uang pendaftran = ";
    cin >> snbt;
    cout << "masukkan uang semester pertama = ";
    cin >> snbt;
    cout << "masukkan uang bangunan : ";
    cin >> snbt;

    cout << "masukkan uang pendaftaran = ";
    cin >> snbp;
    cout << "masukkan uang semester pertama = ";
    cin >> snbp;
}

int main()
{
    // isi disini untuk fungsi main
    string kategori;
    string rekomendasi;
    int pilihan;
    if
        do
        {
            cout << "Pilih jalur Masuk" << endl;
            cout << "==================" << endl;
            cout << "1. SNBT" << endl;
            cout << "2. SNBP" << endl;
            cout << "3. Keluar" << endl;
            cout << "==================" << endl;
            cout << "Masukkan pilihan : ";
            cin >> pilihan;

            switch (pilihan)
            {
            case 1:
                SNBT();
                cout << "masukkan uang pendaftaran= " << endl;
                break;
            case 2:
                SNBP();
                cout << "masukkan uang pendaftaran = " << endl;
                break;
            case 3:
                break;
            default:
                cout << "Masukkan uang pendaftaran = " << endl;
                break;
            }
        } while (pilihan != 3);
}