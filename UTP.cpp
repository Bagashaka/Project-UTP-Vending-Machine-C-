#include <iostream>
using namespace std;

void pilih(int a){
	system("color E");
	int uang;
	int kembalian;
    int b;
	
	cout << "              Selamat Datang di ShakaDrink" << endl;
	cout << "Disini Kamu Dapat Membeli Minuman Secara Cepat dan Mudah" << endl;
	cout << " Silahkan Masukkan Uang :Rp.";
	cin >> uang;
	cout << "Pastikan Uang Anda Lurus"
	system("cls");
	
	string minuman[7]={
		"1. Coca Cola       Rp.8000", 
		"2. Pepsi           Rp.7500", 
		"3. Fanta           Rp.8200", 
		"4. Freshtea        Rp.7000", 
		"5. Mizone          Rp.6000",
		"6. Aqua            Rp.3000"};
	
	cout << " Daftar Minuman " << endl;	
	for(int i=0 ;i < 7;i++){
		cout << minuman[i] << endl;
	}
	cout << " Total Uang Anda :Rp. " << uang << endl;
	cout << "Silahkan Ketik Minuman Yang Ingin Anda Beli :";
	cin >> b ;
	system("cls");
	
	
	if (b == 1 ){
	  if(uang>=8000){	
	    cout << "Coca Cola" << endl;
		kembalian=uang-8000;
		cout << "Kembalian anda :Rp." << kembalian << endl;
}else {
		cout << "Uang Anda Tidak Cukup" << endl;
      }
    }else if(b == 2){
    	if(uang>=7500){	
	    cout << "Pepsi" << endl;
		kembalian=uang-7500;
		cout << "Kembalian anda :Rp." << kembalian << endl;
}else {
		cout << "Uang Anda Tidak Cukup" << endl;
      }
    }else if(b == 3){
    	if(uang>=8200){	
	    cout << "Fanta" << endl;
		kembalian=uang-8200;
		cout << "Kembalian anda :Rp." << kembalian << endl;
}else {
		cout << "Uang Anda Tidak Cukup" << endl;
	  }
    }else if(b == 4){
    		if(uang>=7000){	
	    cout << "Freshtea" << endl;
		cout << "Masukkan jumlah :";
		kembalian=uang-7000;
		cout << "Kembalian anda :Rp." << kembalian << endl;
}else {
		cout << "Uang Anda Tidak Cukup" << endl;
      }
    	
	}else if (b == 5){
			if(uang>=6000){	
	    cout << "Mizone" << endl;
		kembalian=uang-6000;
		cout << "Kembalian anda :Rp." << kembalian << endl;
}else {
		cout << "Uang Anda Tidak Cukup" << endl;
	  }

    }else if (b == 6){
    		if(uang>=3000){	
	    cout << "Aqua" << endl;
		kembalian=uang-3000;
		cout << "Kembalian anda :Rp." << kembalian << endl;
}else {
		cout << "Uang Anda Tidak Cukup" << endl;
	  }
	}else {
		cout << "Inputan Anda Salah" << endl;
	}  
}

int main(){
    int a;
	int uang;
	int harga;
	int b;
	pilih(a);
}
