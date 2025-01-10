#include <iostream>
#include <string>
using namespace std;
class Kisi {
public:
    string adi_soyadi;
    string adresi;
    string telefon_no;
    Kisi(string adi_soyadi, string adresi, string telefon_no)
        : adi_soyadi(adi_soyadi), adresi(adresi), telefon_no(telefon_no) {}

    void yazdir() {
        cout << "Adi Soyadi: " << adi_soyadi << ", Adres: " << adresi << ", Telefon No: " << telefon_no << endl;
    }
};
class Gonderi {
public:
    string gonderi_no;
    double agirlik;   
    double hacim;     
    bool garanti;     
    double ucret;     
    Kisi* gonderen;   
    Kisi* alici;      
    Gonderi(string gonderi_no, double agirlik, double hacim, bool garanti, double ucret, Kisi* gonderen, Kisi* alici)
        : gonderi_no(gonderi_no), agirlik(agirlik), hacim(hacim), garanti(garanti), ucret(ucret), gonderen(gonderen), alici(alici) {}

    void yazdir() {
        cout << "\nGönderi No: " << gonderi_no << endl;
        cout << "Agirlik: " << agirlik << " kg, Hacim: " << hacim << " cm^3" << endl;
        cout << "Garanti: " << (garanti ? "Var" : "Yok") << ", Ücret: " << ucret << " TL" << endl;
        cout << "Gönderen Bilgileri: ";
        gonderen->yazdir();
        cout << "Alici Bilgileri: ";
        alici->yazdir();
    }
};


class Kurye {
public:
    string adi_soyadi;
    string telefon_no;
    Kurye(string adi_soyadi, string telefon_no)
        : adi_soyadi(adi_soyadi), telefon_no(telefon_no) {}

    void yazdir() {
        cout << "Kurye Adi Soyadi: " << adi_soyadi << ", Telefon No: " << telefon_no << endl;
    }
};

int main() {
    Kisi gonderen1("Yeliz Erdem", "Antalya, Cadde No:5", "5254875977");
    Kisi alici1("Mehmet Akpinar", "Ankara, Sokak No:12", "5857654321");
    Kisi gonderen2("Asli Enver", "istanbul, Mahalle No:3", "5652345678");
    Kisi alici2("Fatma Turgut", "Manisa, Cadde No:7", "5579872543");
    Gonderi gonderi1("G001", 5.5, 1500, true, 100.0, &gonderen1, &alici1);
    Gonderi gonderi2("G002", 2.0, 800, false, 50.0, &gonderen2, &alici2);
    Gonderi gonderi3("G003", 3.2, 1200, true, 75.0, &gonderen1, &alici2);
    Gonderi gonderi4("G004", 10.0, 2500, false, 150.0, &gonderen2, &alici1);
    Gonderi gonderi5("G005", 1.5, 600, true, 30.0, &gonderen1, &alici2);
    Kurye kurye("Ahmet Kenan", "5581622334");
    gonderi1.yazdir();
    gonderi2.yazdir();
    gonderi3.yazdir();
    gonderi4.yazdir();
    gonderi5.yazdir();
    kurye.yazdir();

    return 0;
}

