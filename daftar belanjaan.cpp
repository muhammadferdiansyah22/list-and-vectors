#include <iostream>
#include <vector>

using namespace std;

class Daftar{
    private:
        vector <string> Barang;
    public:
        Daftar(){
            Barang = {"Gula", "Minyak Goreng", "Kopi","Susu"};
        }
        Daftar(vector<string> Barang){
            this->Barang = Barang;
        }
        void setBarang(vector<string> Barang){
            this->Barang = Barang;
        }
        vector<string> getBarang(){
            return Barang;
        }
        void tambahAkhir(string nama){
            Barang.push_back(nama);
        }
        void hapusAkhir(){
            Barang.pop_back();
        }
        void tambahBarang(int urutan, string nama){
            Barang.insert(Barang.begin() + urutan-1, nama);
        }
        void hapusBarang(int urutan){
            Barang.erase(Barang.begin() + urutan-1);
        }
        void daftarBaru(string* nama, int jumlah){
            Barang.assign(nama, nama + jumlah);
        }
        void hapusDaftar(){
            if (Barang.empty() != 1){
                Barang.clear();
            }else{
                cout << "Daftar sudah kosong\n";
            }
        }
        void cetakDaftar(){
            cout << "Daftar barang Aca : \n";
            for (int i = 0; i < Barang.size(); i++){
                cout << i+1 << ". " << Barang[i] << "\n";
            }
        }
};

int main(){
    Daftar d;
    
    Daftar d2({"hp", "dompet"});
    
    d.setBarang({"baju", "celana", "kaos kaki"});
    
    d.tambahBarang(3, "hp");
    
    d.hapusBarang(2);
    
    string nama[] = {"hp", "dompet", "earphone"};
    int jumlah = sizeof(nama)/sizeof(nama[0]);
    d.daftarBaru(nama, jumlah);
    
    d.hapusAkhir();
    
    d.tambahAkhir("uang");
    
    d.hapusDaftar();
    
    d.cetakDaftar();
}
