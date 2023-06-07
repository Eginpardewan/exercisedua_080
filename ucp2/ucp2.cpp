#include <iostream> 
using namespace std;

class bidangDatar{
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar 
public:    
	bidangDatar() { //constructor 
		x=0;
	}  
		virtual void input() {
		} //fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
		virtual float Luas(int a) {
			return 0;
		} //fungsi untuk menghitung luas 
		virtual float Keliling(int a) {
			return 0; 
		} //fungsi untuk menghitung keliling 
		void setX(int a){ 
			//fungsi untuk memberi/mengirim nilai pada x   
			this->x = a;
		}

int getX() { //fungsi untuk membaca/mengambil nilai dalam x 
	return x;
}
};


int main() {
	Lingkaran lingkaran;
	Bujursangkar bujursangkar;

	cout << "Lingkaran dibuat" << endl;
	bd = &lingkaran;
	bd->input();
	int r = bd->getX();
	cout << "Luas Lingkaran = " << lingkaran.Luas(r) << endl;
	cout << "Keliling Lingkaran = " << lingkaran.Keliling(r) << endl;
	cout << endl;

	cout << "Bujursangkar dibuat" << endl;
	bd = &bujursangkar;
	bd->input();
	int sisi = bdPtr->getX();
	cout << "Luas Bujursangkar = " << bujursangkar.Luas(sisi) << endl;
	cout << "Keliling Bujursangkar = " << bujursangkar.Keliling(sisi) << endl;

	return 0;
}