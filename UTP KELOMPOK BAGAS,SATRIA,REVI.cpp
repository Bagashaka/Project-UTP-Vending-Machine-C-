#include <iostream>
using namespace std;

void pilih(int a) { // umtuk memunculkan menu awal
	system("color E");	
	cout << "              Selamat Datang di ShakaDrink" << endl;
	cout << "         Vending Machine Terbaik Dan Terpraktis" << endl;
	cout << "Disini Kamu Dapat Membeli Minuman Secara Cepat dan Mudah" << endl;	
}

int main(){
    int a;
	int uang;
	int kembalian;
	int b;
	pilih(a);
	
	cout << " Silahkan Masukkan Uang :Rp.";
	cin >> uang;
	system("cls");
	
		string minuman[7]={ // array pilihan barang
		"1. Coca Cola      : Rp.8000",
		"2. Pepsi          : Rp.7500",
		"3. Fanta          : Rp.8200",
		"4. Freshtea       : Rp.7000", 
		"5. Mizone         : Rp.6000",
		"6. Aqua           : Rp.3000"};
	
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
	    cout << minuman[0] << endl;
        cout << "Uang Anda         :Rp." << uang << endl;
		kembalian=uang-8000;
		cout << "Kembalian anda    :Rp." << kembalian << endl;
		cout << "Silahkan Nikmati Minuman Anda" << endl;
		cout << "Buanglah Sampah Pada Tempatnya" << endl;
}else {
		cout << "Maaf Uang Anda Tidak Cukup" << endl;
      }
    }else if(b == 2){
    	    if(uang>=7500){	
	    cout << minuman[1] << endl;
	    cout << "Uang Anda         :Rp." << uang << endl;
		kembalian=uang-7500;
		cout << "Kembalian anda    :Rp." << kembalian << endl;
		cout << "Silahkan Nikmati Minuman Anda" << endl;
		cout << "Buanglah Sampah Pada Tempatnya" << endl;
}else {
		cout << "Maaf Uang Anda Tidak Cukup" << endl;
      }
    }else if(b == 3){
    	    if(uang>=8200){	
	    cout << minuman[2] << endl;
	    cout << "Uang Anda         :Rp." << uang << endl;
		kembalian=uang-8200;
		cout << "Kembalian anda    :Rp." << kembalian << endl;
		cout << "Silahkan Nikmati Minuman Anda" << endl;
		cout << "Buanglah Sampah Pada Tempatnya" << endl;
}else {  
		cout << "Maaf Uang Anda Tidak Cukup" << endl;
	  }
    }else if(b == 4){
    		if(uang>=7000){	
	    cout << minuman[3] << endl;
	    cout << "Uang Anda          :Rp." << uang << endl;
		kembalian=uang-7000;
		cout << "Kembalian anda     :Rp." << kembalian << endl;
		cout << "Silahkan Nikmati Minuman Anda" << endl;
		cout << "Buanglah Sampah Pada Tempatnya" << endl;
}else {
		cout << "Maaf Uang Anda Tidak Cukup" << endl;
      }
    	
	}else if (b == 5){
			if(uang>=6000){	
	    cout << minuman[4] << endl;
	    cout << "Uang Anda         :Rp." << uang << endl;
		kembalian=uang-6000;
		cout << "Kembalian anda    :Rp." << kembalian << endl;
		cout << "Silahkan Nikmati Minuman Anda" << endl;
		cout << "Buanglah Sampah Pada Tempatnya" << endl;
}else {
		cout << "Maaf Uang Anda Tidak Cukup" << endl;
	  }

    }else if (b == 6){
    		if(uang>=3000){	
	    cout << minuman[5] << endl;
	    cout << "Uang Anda          :Rp." << uang << endl;
		kembalian=uang-3000;
		cout << "Kembalian anda     :Rp." << kembalian << endl;
		cout << "Silahkan Nikmati Minuman Anda" << endl;
		cout << "Buanglah Sampah Pada Tempatnya" << endl;
}else {
		cout << "Maaf Uang Anda Tidak Cukup" << endl;
	  }
	}else {
		cout << "Maaf Inputan Anda Salah" << endl;
	}  

	return 0;
}
