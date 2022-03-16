//1 ile 1000 arasinda olan rastgele sayiyi bulmamizi saglar-srand ve rand kullanılarak oluşturulan sayilar sürekli tekrar ettiiği için 5 farklı sayi 
//uretip ortalaması alındı

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    
    srand(static_cast<unsigned int>(time(0)));
    
    unsigned int rN1 = 1 + rand()%1000;//rN == random number
    unsigned int rN2 = 1 + rand()%1000;
    unsigned int rN3 = 1 + rand()%1000;
    unsigned int rN4 = 1 + rand()%1000;
    unsigned int rN5 = 1 + rand()%1000;
    
    
    unsigned int randomNumber = (rN1 +rN2+rN3+rN4+rN5)/5;// random sayilarin ortalamasi
    
    cout<<"****SAYI BULMA OYUNUNA HOSGELDINIZ****"<<endl;
    cout<<"Lutfen bir sayi giriniz"<<endl;
    for(unsigned int i=0; ;i++){//random sayiyi bulana kadar döndürmesi icin orta kısım boş kaldı
        int randomEnter;
        cin>>randomEnter;//tahmin ettiğimiz sayiyi gireriz
        if(randomEnter<randomNumber){
            cout<<"Daha buyuk bir sayi giriniz"<<endl;
        }else if(randomEnter>randomNumber){
            cout<<"Daha kucuk bir sayi giriniz"<<endl;
        }else{
            cout<<"Tebrikler!! Buldunuz."<<endl;
            break;//sayiyi bulduğumuz için döngüyü kırar
        }
    
    
    
    }//for döngüsü sonu
    
    }

