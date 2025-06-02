#include <iostream>
using namespace std;

class mahasiswa {
    //syarat encapsulasi
    //1. data harus private
    protected:
    string nama;
    string nim;
    private:
    string umur;

    public:
    mahasiswa (string pnama, string pnim, string pumur):
    nama(pnama), nim(pnim), umur(pumur){
        
    }

    //menandakan ini sebagai abstrak class dan menandakan polymorphy
    virtual void infoMhs() = 0;

    void setNama(string pumur) {
        nama = pumur;
    }
    string getUmur(){
        return umur;
    }

};

class mhsBaru : public mahasiswa{
    public:
    mhsBaru(string pnama, string pnim, string pumur):
    mahasiswa(pnama, pnim, pumur){}

    void infoMhs() override{
        cout << "Nama Mhs: " << nama << endl; //abstraksi
        cout << "NIM Mhs: " << nim << endl; //abstraksi
        cout << "Umur Mhs: " << getUmur() << endl; //encapsulation
    }
};

class mhsLama : public mahasiswa{
    public:
    mhsLama(string pnama, string pnim, string pumur):
    mahasiswa(pnama, pnim, pumur){}

    void infoMhs() override{
        cout << "Nama Mhs: " << nama << endl; //abstraksi
        cout << "NIM Mhs: " << nim << endl; //abstraksi
        cout << "Umur Mhs: " << getUmur() << endl; //encapsulation
    }
};


int main(){
    mahasiswa *mhs; //buat objek
    mhsBaru mhsb("Joko", "2023", "45");
    mhsLama mhsl("Jarwo", "2021", "35");

    mhs = &mhsb;
    mhs->infoMhs();
    mhs = &mhsl;
    mhs->infoMhs();
}