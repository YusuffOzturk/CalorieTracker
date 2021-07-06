//
//  main.cpp
//  Calorie Tracker
//
//  Created by Yusuf Öztürk on 27.05.2021.
//

#include <iostream>
#include "Meals.h"
#include "Sports.h"
#include "User.h"
using namespace std;
void UserMenu(){
    
}

int main()
{
    
    int ch;
    cout<<"Lütfen Mod Seçiniz"<<endl
    <<"\n 1.Developer Mod"<<endl
    <<"\n 2.User Mod"<<endl
    <<"\n 3.Çıkış"<<endl;
    cin>>ch;
    
    switch (ch) {
        case 1:{
            User yusuf("Yusuf", "Öztürk",1,23,80);//User ekleme
            cout<<yusuf; //Overloading operator
            
            yusuf.week[0].day[1].football.Add(10);
            yusuf.week[3].day[3].football.Add(59);
            yusuf.week[1].day[4].football.Add(13);
            yusuf.week[1].day[2].football.Add(100);
            cout<<"4 ayrı futbol aktivitesi eklendi\n"<<endl;   //spor kalori
            
            int football_cal=0;
            for(int i=0; i<7;i++){
                for(int j=0 ; j<3;j++){
                    football_cal=yusuf.week[j].day[i].football.getCal()+football_cal;
                }
            }
            cout<<"\nSon 3 Haftada futbol oynayarak kaybedilen kalori: "<<football_cal<<endl;
            
            yusuf.week[1].day[0].basketball.Add(10);//basketbol ekleme
            yusuf.week[1].day[0].tennis.Add(10);//tenis ekleme
            yusuf.week[1].day[0].swimming.Add(10);    //yüzme ekleme
            cout<<"?n1 basketbol, 1 yüzme, 1 tenis aktivitesi eklendi."<<endl;
//basketbol kalorileirni toplar ve yazdırır
            int bask_cal=0;
            for(int i=0; i<7;i++){
                for(int j=0 ; j<3;j++){
                    bask_cal=yusuf.week[j].day[i].basketball.getCal()+bask_cal;
                }
            }
            cout<<"\nSon 3 Haftada basketbol oynayarak kaybedilen kalori: "<<bask_cal<<endl;
// yüzme kalorilerini toplar ve yazdırır
            int swim_cal=0;
            for(int i=0; i<7;i++){
                for(int j=0 ; j<3;j++){
                    swim_cal=yusuf.week[j].day[i].swimming.getCal()+swim_cal;
                }
            }
            cout<<"\nSon 3 Haftada yüzerek kaybedilen kalori: "<<swim_cal<<endl;
//tenis kalorilerini toplar ve yazdırır
            int tennis_cal=0;
            for(int i=0; i<7;i++){
                for(int j=0 ; j<3;j++){
                    tennis_cal=yusuf.week[j].day[i].tennis.getCal()+tennis_cal;
                }
            }
            cout<<"\nSon 3 Haftada tenis oynayarak kaybedilen kalori: "<<tennis_cal<<endl;
            
            //öğün kalorileri
            yusuf.week[1].day[1].breakfast.Add(1);
            yusuf.week[1].day[1].lunch.Add(2);
            yusuf.week[1].day[2].dinner.Add(3);
            
       
            
            //total öğün kalorisi
            int breakfast_cal=0;
            for(int i=0; i<7;i++){
                for(int j=0 ; j<3;j++){
                    breakfast_cal=yusuf.week[j].day[i].breakfast.getCal()+breakfast_cal;
                }
            }
            cout<<"\nSon 3 Haftada kahvaltıda alınan kalori: "<<breakfast_cal<<endl;
            
            int lunch_cal=0;
            for(int i=0; i<7;i++){
                for(int j=0 ; j<3;j++){
                    lunch_cal=yusuf.week[j].day[i].lunch.getCal()+lunch_cal;
                }
            }
            cout<<"\nSon 3 Haftada öğlen yemeğinde alınan kalori: "<<lunch_cal<<endl;
            int dinner_count=01;
            int dinner_cal=0;
            for(int i=0; i<7;i++){
                for(int j=0 ; j<3;j++){
                    dinner_cal=yusuf.week[j].day[i].dinner.getCal()+dinner_cal;
                }
            }
           //öğün sayısını al
            for(int i=0; i<7;i++){
                for(int j=0 ; j<3;j++){
                    dinner_count=yusuf.week[j].day[i].dinner.getCount()+dinner_count;
                }
            }
            cout<<"\nSon 3 Haftada yenilen akşam yemeği sayısı: "<<dinner_count<<endl;
            
            cout<<"\nToplam alınan kalori: "<<breakfast_cal+lunch_cal+dinner_cal<<endl;
            
            //total spor kalorileri
            int totalcal=football_cal+bask_cal+swim_cal+tennis_cal;
            cout<<"\nToplam alınan kalori: " <<totalcal<<endl;
            
            break;}
        case 2:
            //User mod
        {
            int ch1;
           
     
                    string isim;
                    string soyisim;
                    int id;
                    int yas;
                    int kilo;
                    
               
                    cout<<"İsim: \n"<<endl;
                    cin>>isim;
                    cout<<"Soyisim: \n"<<endl;
                    cin>>soyisim;
                    cout<<"ID: \n"<<endl;
                    cin>>id;
                    cout<<"Yaş: \n"<<endl;
                    cin>>yas;
                    cout<<"Kilo: \n"<<endl;
                    cin>>kilo;
                
                User user(isim,soyisim,id,yas,kilo);
                    
                cout<<"Kullanıcı oluşturuldu.\n"<<endl;
            int key=1;
            while(key!=0){
                cout<<"Kullanıcıyla yapmak istediğiniz işlemi seçiniz\n"<<
                        "1.Öğün Gir\n"<<
                        "2.Spor Gir\n"<<
                        "3.Alınan Kaloriyi Göster\n"<<
                        "4.Yakılan Kaloriyi Göster\n"<<
                        "5.Öğün Sayısını Göster\n"<<
                        "6.Spor Sayısını Göster\n"<<
                        "7.Toplam Alınan Verilen Kaloriyi Göster\n"<<
                        "0. Çıkış\n"<<endl;
                cin>>key;
                if(key==1){
                    int ch2;
                    while(true){
                    cout<<"Eklemek istediğiniz öğünü seçiniz\n"<<
                        "1.Kahvaltı\n"<<
                        "2.Öğlen Yemeği\n"<<
                        "3.Akşam Yemeği\n"<<
                        "0.Geri dön\n"<<endl;
                        cin>>ch2;
                        if(ch2==0){
                        break;
                        }
                        else if (ch2==1){
                                 int hafta;
                                 int gun;
                            int pors;
                                 cout<<"Hafta Giriniz\n"<<endl;
                                 cin>>hafta;
                                 cout<<"Gün Giriniz\n"<<endl;
                                 cin>>gun;
                            cout<<"Porsiyon:\n"<<
                            "1.Küçük\n"<<
                            "2.Orta\n"<<
                            "3.Büyük\n"<<endl;
                            cin>>pors;
                            if(pors==1||pors==2||pors==3){
                                user.week[hafta].day[gun].breakfast.Add(pors);
                               // cout<<user.week[hafta].day[gun].breakfast.Add(pors)<<endl;
                            }
                            else{
                                cout<<"Yanlış girdiniz.\n"<<endl;
                            }
                            
                        }
                        else if (ch2==2){
                                 int hafta;
                                 int gun;
                            int pors;
                                 cout<<"Hafta Giriniz\n"<<endl;
                                 cin>>hafta;
                                 cout<<"Gün Giriniz\n"<<endl;
                                 cin>>gun;
                            cout<<"Porsiyon:\n"<<
                            "1.Küçük\n"<<
                            "2.Orta\n"<<
                            "3.Büyük\n"<<endl;
                            cin>>pors;
                            if(pors==1||pors==2||pors==3){
                                user.week[hafta].day[gun].lunch.Add(pors);
                            }
                            else{
                                cout<<"Yanlış girdiniz.\n"<<endl;
                            }
                            
                        }
                        else if (ch2==3){
                                 int hafta;
                                 int gun;
                            int pors;
                                 cout<<"Hafta Giriniz\n"<<endl;
                                 cin>>hafta;
                                 cout<<"Gün Giriniz\n"<<endl;
                                 cin>>gun;
                            cout<<"Porsiyon:\n"<<
                            "1.Küçük\n"<<
                            "2.Orta\n"<<
                            "3.Büyük\n"<<endl;
                            cin>>pors;
                            if(pors==1||pors==2||pors==3){
                                user.week[hafta].day[gun].dinner.Add(pors);
                            }
                            else{
                                cout<<"Yanlış girdiniz.\n"<<endl;
                            }
                            
                        }
                            
                    }
                    
                }
                else if(key==2){
                    int ch3;
                    while(true){
                        cout<<"Eklemek istediğiniz sporu seçiniz\n"<<
                            "1.Basketbol\n"<<
                            "2.Futbol\n"<<
                            "3.Tenis\n"<<
                            "4.Yüzme\n"<<
                            "0.Geri dön\n"<<endl;
                            cin>>ch3;
                        if(ch3==0){
                            break;
                        }
                        else if(ch3==1){
                            int dakika;
                            int hafta;
                            int gun;
                    
                            cout<<"Hafta Giriniz\n"<<endl;
                            cin>>hafta;
                            cout<<"Gün Giriniz\n"<<endl;
                            cin>>gun;
                            cout<<"Dakika giriniz\n"<<endl;
                            cin>>dakika;
                            user.week[hafta].day[gun].basketball.Add(dakika);
                        }
                        else if(ch3==2){
                            int dakika;
                            int hafta;
                            int gun;
                    
                            cout<<"Hafta Giriniz\n"<<endl;
                            cin>>hafta;
                            cout<<"Gün Giriniz\n"<<endl;
                            cin>>gun;
                            cout<<"Dakika giriniz\n"<<endl;
                            cin>>dakika;
                            user.week[hafta].day[gun].football.Add(dakika);
                            
                            
                        }
                        else if(ch3==3){
                            int dakika;
                            int hafta;
                            int gun;
                    
                            cout<<"Hafta Giriniz\n"<<endl;
                            cin>>hafta;
                            cout<<"Gün Giriniz\n"<<endl;
                            cin>>gun;
                            cout<<"Dakika giriniz\n"<<endl;
                            cin>>dakika;
                            user.week[hafta].day[gun].tennis.Add(dakika);
                            
                            
                        }
                        else if(ch3==4){
                            int dakika;
                            int hafta;
                            int gun;
                    
                            cout<<"Hafta Giriniz\n"<<endl;
                            cin>>hafta;
                            cout<<"Gün Giriniz\n"<<endl;
                            cin>>gun;
                            cout<<"Dakika giriniz\n"<<endl;
                            cin>>dakika;
                            user.week[hafta].day[gun].swimming.Add(dakika);
       
                        }
                    }
                }
            
            //key 2 sonu
            else if(key==3){
                int ch;
            while(true){
            cout<<"1.Haftaya Göre Alınan Kaloriyi Göster \n"<<
                   "2.Toplam Kalori Miktarını Göster\n"<<
                "0.Çıkış\n"<<endl;
                cin>>ch;
            if(ch==0){
                    break;
                
                }
                
                else if (ch==1){
                    int hafta;
                    while (true){
                        int sec;
                        cout<<"Aramak istediğiniz haftayı seçiniz.\n"<<endl;
                        cin>>hafta;
                        cout<<"1.Kahvaltıda Alınan Kaloriler\n"<<
                        "2.Öğlen Yemeğinde Alınan Kaloriler\n"<<
                        "3.Akşam Yemeğinde Alınan Kaloriler\n"<<
                        "4."<<hafta<<"'inci haftada alınan tüm kaloriler\n"<<
                        "0.Geri Dön\n"<<endl;
                        cin>>sec;
                        while(true){
                            int breakfast_cal=0;
                            int lunch_cal=0;
                            int dinner_cal=0;
                            
                            if(sec==0){
                                break;
                                
                            }
                            else if(sec==1){
                                
                                for(int i=0;i<7;i++){

                                    breakfast_cal=user.week[hafta].day[i].breakfast.getCal()+breakfast_cal;
          
                                }
                                cout<<hafta<<"inci hafta kahvaltılarında alınan toplam kalori:  "<<breakfast_cal<<endl;
                                break;

                            }
                            else if(sec==2){
                                
                                for(int i=0;i<7;i++){

                                    lunch_cal=user.week[hafta].day[i].lunch.getCal()+lunch_cal;
          
                                }
                                cout<<hafta<<"inci hafta öğlen yemeklerinde alınan toplam kalori:  "<<lunch_cal<<endl;
                                break;

                            }
                            else if(sec==3){
                                
                                for(int i=0;i<7;i++){

                                    dinner_cal=user.week[hafta].day[i].dinner.getCal()+dinner_cal;
          
                                }
                                cout<<hafta<<"inci hafta akşam yemeklerinde alınan toplam kalori:  "<<dinner_cal<<endl;
                                break;
                            }
                            else if(sec==4){
                                    
                                    cout<<hafta<<"inci hafta alınan toplam kalori:  "<<breakfast_cal+dinner_cal+lunch_cal<<endl;
          
                                }
                            break;
                            }//while
                        
                        
                        
                        
                        
                        }//while
                        
                    }//else if ch1
                
                else if (ch==2){
                    int breakfast_cal=0;
                    int lunch_cal=0;
                    int dinner_cal=0;
                    
                    for(int i=0;i<7;i++){
                        for(int j=0;j<52;j++){
                        breakfast_cal=user.week[j].day[i].breakfast.getCal()+breakfast_cal;
                        }
                    }
                    cout<<"\n Kahvaltılarda alınan toplam kalori:  "<<breakfast_cal<<endl;

                    for(int i=0;i<7;i++){
                        for(int j=0;j<52;j++){
                        lunch_cal=user.week[j].day[i].lunch.getCal()+lunch_cal;
                        }
                    }
                    cout<<"\n Öğlen yemeklerinde alınan toplam kalori:  "<<lunch_cal<<endl;

                    for(int i=0;i<7;i++){
                        for(int j=0;j<52;j++){
                        dinner_cal=user.week[j].day[i].dinner.getCal()+dinner_cal;
                        }
                    }
                    cout<<"\n Akşam yemeklerinde alınan toplam kalori:  "<<dinner_cal<<endl;

                    cout<<"\nAlınan Toplam Kalori: "<<breakfast_cal+lunch_cal+dinner_cal<<endl;
                    int totalcalin=breakfast_cal+lunch_cal+dinner_cal;
 
                }
            }}
                else if(key==4){int ch;
                    int football_cal=0;
                    int basketball_cal=0;
                    int tennis_cal=0;
                    int swim_cal=0;
                    while(true){
                    cout<<"1.Haftaya Göre Verilen Kaloriyi Göster \n"<<
                           "2.Toplam Kalori Sayısını Göster\n"<<
                        "0.Çıkış\n"<<endl;
                        cin>>ch;
                    if(ch==0){
                        break;
            
 }
                        else if(ch==1){int hafta;
                            while (true){
                                int sec;
                                cout<<"Aramak istediğiniz haftayı seçiniz.\n"<<endl;
                                cin>>hafta;
                                cout<<"1.Futbolda Verilen Kaloriler\n"<<
                                "2.Basketbolda Verilen Kaloriler\n"<<
                                "3.Teniste Verilen Kaloriler\n"<<
                                "4.Yüzmede Verilen Kaloriler\n"<<
                                "5."<<hafta<<"'inci verilen toplam kaloriler\n"<<
                                "0.Geri Dön\n"<<endl;
                                cin>>sec;
                                while(true){
                                   
                                    
                                    
                                    if(sec==0){
                                        break;
                                        
                                    }
                                    else if(sec==1){
                                        
                                        for(int i=0;i<7;i++){

                                            football_cal=user.week[hafta].day[i].football.getCal()+football_cal;
                  
                                        }
                                        cout<<hafta<<"\ninci hafta futbolda verilen toplam kalori:  "<<football_cal<<endl;
                                        break;

                                    }
                                    else if(sec==2){
                                        
                                        for(int i=0;i<7;i++){

                                            basketball_cal=user.week[hafta].day[i].basketball.getCal()+basketball_cal;
                  
                                        }
                                        cout<<hafta<<"\ninci hafta basketbolda verilen toplam kalori:  "<<basketball_cal<<endl;
                                        break;
                                        

                                    }
                                    else if(sec==3){
                                        
                                        for(int i=0;i<7;i++){

                                            tennis_cal=user.week[hafta].day[i].tennis.getCal()+tennis_cal;
                  
                                        }
                                        cout<<hafta<<"\ninci hafta teniste verilen toplam kalori:  "<<tennis_cal<<endl;
                                        break;

                                    }
                                    else if(sec==3){
                                        
                                        for(int i=0;i<7;i++){

                                            swim_cal=user.week[hafta].day[i].swimming.getCal()+swim_cal;
                  
                                        }
                                        cout<<hafta<<"\ninci hafta yüzmede verilen toplam kalori:  "<<swim_cal<<endl;
                                        break;

                                    }
                                    
                                    else if(sec==5){
                                            
                                            cout<<hafta<<"\ninci hafta verilen toplam kalori:  "<<football_cal+basketball_cal+tennis_cal+swim_cal<<endl;
                                        break;
                  
                                        }
                                    break;
                                    }//while
                            }}
                            
                            else if(ch==2){
                                
                                for(int i=0; i<7;i++){
                                    for(int j=0 ; j<53;j++){
                                        football_cal=user.week[j].day[i].football.getCal()+football_cal;
                                    }
                                }
                                cout<<"\n Futbol oynayarak kaybedilen toplam kalori: "<<football_cal<<endl;
                                for(int i=0; i<7;i++){
                                    for(int j=0 ; j<53;j++){
                                        basketball_cal=user.week[j].day[i].basketball.getCal()+basketball_cal;
                                    }
                                }
                                cout<<"\n Basketbol oynayarak kaybedilen toplam kalori: "<<basketball_cal<<endl;
                                for(int i=0; i<7;i++){
                                    for(int j=0 ; j<53;j++){
                                        tennis_cal=user.week[j].day[i].tennis.getCal()+tennis_cal;
                                    }
                                }
                                cout<<"\n Tenis oynayarak kaybedilen toplam kalori: "<<tennis_cal<<endl;
                                
                                for(int i=0; i<7;i++){
                                    for(int j=0 ; j<53;j++){
                                        swim_cal=user.week[j].day[i].swimming.getCal()+swim_cal;
                                    }
                                }
                                cout<<"\n Yüzerek kaybedilen toplam kalori: "<<swim_cal<<endl;
                                
                                cout<<"\nKaybedilen toplam kalori: "<<football_cal+basketball_cal+swim_cal+tennis_cal<<endl;
                                int totalcalout=football_cal+basketball_cal+swim_cal+tennis_cal;
                            }
                    }
            }
                else if(key==5){
                    int ch;
                while(true){
                    int breakfast_count=0;
                    int lunch_count=0;
                    int dinner_count=0;
                cout<<"1.Haftaya Göre Öğün Göster \n"<<
                       "2.Toplam Öğün Sayısını Göster\n"<<
                    "0.Çıkış\n"<<endl;
                    cin>>ch;
                if(ch==0){
                        break;
                    
                    }
                    
                    else if (ch==1){
                        int hafta;
                        
                        while (true){
                            int sec;
                            cout<<"Aramak istediğiniz haftayı seçiniz.\n"<<endl;
                            cin>>hafta;
                            cout<<"1.Kahvaltı Öğünü\n"<<
                            "2.Öğlen Yemeği Öğünü\n"<<
                            "3.Akşam Yemeği Öğünü\n"<<
                            "4."<<hafta<<"'daki toplam öğün\n"<<
                            "0.Geri Dön\n"<<endl;
                            cin>>sec;
                            while(true){
                                
                                
                                if(sec==0){
                                    break;
                                    
                                }
                                else if(sec==1){
                                    
                                    for(int i=0;i<7;i++){
                                        breakfast_count=user.week[hafta].day[i].breakfast.getCount()+breakfast_count;
              
                                    }
                                    cout<<hafta<<"inci hafta kahvaltı sayısı:  "<<breakfast_count<<endl;
                                    break;

                                }
                                else if(sec==2){
                                    
                                    for(int i=0;i<7;i++){

                                        lunch_count=user.week[hafta].day[i].lunch.getCount()+lunch_count;
              
                                    }
                                    cout<<hafta<<"inci hafta öğlen yemeği sayısı:  "<<lunch_count<<endl;
                                    break;
                                    

                                }
                                else if(sec==3){
                                    
                                    for(int i=0;i<7;i++){

                                        dinner_count=user.week[hafta].day[i].dinner.getCount()+dinner_count;
              
                                    }
                                    cout<<hafta<<"inci hafta akşam yemeği sayısı  "<<dinner_count<<endl;
                                    break;
                                }
                                else if(sec==4){
                                        
                                        cout<<hafta<<"inci hafta toplam öğün sayısı:  "<<breakfast_count+dinner_count+lunch_count<<endl;
                                    break;
                                    }
                                }//while
                            
                            
                            
                            
                            
                            }//while
                            
                        }//else if
                    
                    else if (ch==2){
                        int breakfast_count=0;
                        int lunch_count=0;
                        int dinner_count=0;
                        
                        for(int i=0;i<7;i++){
                            for(int j=0;j<52;j++){
                            breakfast_count=user.week[j].day[i].breakfast.getCount()+breakfast_count;
                            }
                        }
                        cout<<"\n Toplam Kahvaltı Sayısı:  "<<breakfast_count<<endl;

                        for(int i=0;i<7;i++){
                            for(int j=0;j<52;j++){
                            lunch_count=user.week[j].day[i].lunch.getCount()+lunch_count;
                            }
                        }
                        cout<<"\n Toplam Öğlen Yemeği Sayısı  "<<lunch_count<<endl;

                        for(int i=0;i<7;i++){
                            for(int j=0;j<52;j++){
                            dinner_count=user.week[j].day[i].dinner.getCount()+dinner_count;
                            }
                        }
                        cout<<"\n Toplam Akşam Yemeği Sayısı:  "<<dinner_count<<endl;

                        cout<<"\n Toplam Öğün Sayısı "<<breakfast_count+lunch_count+dinner_count<<endl;
     
                    }
            
            
            }
                    
                }//key5 sonu
                else if(key==6){
                    int ch;
                    int football_count=0;
                    int basketball_count=0;
                    int tennis_count=0;
                    int swim_count=0;
                    while(true){
                    cout<<"1.Haftaya Göre Yapılan Sporu Göster \n"<<
                           "2.Toplam Spor Süresini Göster\n"<<
                        "0.Çıkış\n"<<endl;
                        cin>>ch;
                    if(ch==0){
                        break;
            
 }
                        else if(ch==1){int hafta;
                            while (true){
                                int sec;
                                cout<<"Aramak istediğiniz haftayı seçiniz.\n"<<endl;
                                cin>>hafta;
                                cout<<"1.Futbol\n"<<
                                "2.Basketbol\n"<<
                                "3.Tenis\n"<<
                                "4.Yüzme\n"<<
                                "5."<<hafta<<"'inci haftadaki toplam spor \n"<<
                                "0.Geri Dön\n"<<endl;
                                cin>>sec;
                                
                                   
                                    
                                    
                                    if(sec==0){
                                        break;
                                        
                                    }
                                    else if(sec==1){
                                        
                                        for(int i=0;i<7;i++){

                                            football_count=user.week[hafta].day[i].football.getMinute()+football_count;
                  
                                        }
                                        cout<<hafta<<"\ninci hafta futbol süresi: "<<football_count<<endl;
                                        break;
                                    }
                                    else if(sec==2){
                                        
                                        for(int i=0;i<7;i++){

                                            basketball_count=user.week[hafta].day[i].basketball.getMinute()+basketball_count;
                  
                                        }
                                        cout<<hafta<<"\ninci hafta basketbol süresi:   "<<basketball_count<<endl;
                                        break;
                                    }
                                    else if(sec==3){
                                        
                                        for(int i=0;i<7;i++){

                                            tennis_count=user.week[hafta].day[i].tennis.getMinute()+tennis_count;
                  
                                        }
                                        cout<<hafta<<"\ninci hafta tenis süresi  "<<tennis_count<<endl;
                                        break;
                                    }
                                    else if(sec==3){
                                        
                                        for(int i=0;i<7;i++){

                                            swim_count=user.week[hafta].day[i].swimming.getMinute()+swim_count;
                  
                                        }
                                        cout<<hafta<<"\ninci hafta yüzme süresi "<<swim_count<<endl;
                                        break;
                                    }
                                    
                                    else if(sec==5){
                                            
                                            cout<<hafta<<"\ninci hafta toplam spor süresi:  "<<football_count+basketball_count+tennis_count+swim_count<<endl;
                                        break;
                                        }
                                    //while
                            }}
                            
                            else if(ch==2){
                                
                                for(int i=0; i<7;i++){
                                    for(int j=0 ; j<53;j++){
                                        football_count=user.week[j].day[i].football.getMinute()+football_count;
                                    }
                                }
                                cout<<"\n Futbol süresi: "<<football_count<<endl;
                                for(int i=0; i<7;i++){
                                    for(int j=0 ; j<53;j++){
                                        basketball_count=user.week[j].day[i].basketball.getMinute()+basketball_count;
                                    }
                                }
                                cout<<"\n Basketbol süres: "<<basketball_count<<endl;
                                for(int i=0; i<7;i++){
                                    for(int j=0 ; j<53;j++){
                                        tennis_count=user.week[j].day[i].tennis.getMinute()+tennis_count;
                                    }
                                }
                                cout<<"\n Tenis süresi: "<<tennis_count<<endl;
                                
                                for(int i=0; i<7;i++){
                                    for(int j=0 ; j<53;j++){
                                        swim_count=user.week[j].day[i].swimming.getMinute()+swim_count;
                                    }
                                }
                                cout<<"\n Yüzme süresi: "<<swim_count<<endl;
                                
                                cout<<"\n Toplam spor süresi: "<<football_count+basketball_count+swim_count+tennis_count<<endl;
                            }
                    }
            }//key6
                else if(key==7){
                    int football_cal=0;
                    int basketball_cal=0;
                    int tennis_cal=0;
                    int swim_cal=0;
                    int breakfast_cal=0;
                    int lunch_cal=0;
                    int dinner_cal=0;
                    
                    for(int i=0; i<7;i++){
                        for(int j=0 ; j<53;j++){
                            football_cal=user.week[j].day[i].football.getCal()+football_cal;
                        }
                    }
                    cout<<"\n Futbol oynayarak kaybedilen toplam kalori: "<<football_cal<<endl;
                    for(int i=0; i<7;i++){
                        for(int j=0 ; j<53;j++){
                            basketball_cal=user.week[j].day[i].basketball.getCal()+basketball_cal;
                        }
                    }
                    cout<<"\n Basketbol oynayarak kaybedilen toplam kalori: "<<basketball_cal<<endl;
                    for(int i=0; i<7;i++){
                        for(int j=0 ; j<53;j++){
                            tennis_cal=user.week[j].day[i].tennis.getCal()+tennis_cal;
                        }
                    }
                    cout<<"\n Tenis oynayarak kaybedilen toplam kalori: "<<tennis_cal<<endl;
                    
                    for(int i=0; i<7;i++){
                        for(int j=0 ; j<53;j++){
                            swim_cal=user.week[j].day[i].swimming.getCal()+swim_cal;
                        }
                    }
                    cout<<"\n Yüzerek kaybedilen toplam kalori: "<<swim_cal<<endl;
                    
                    cout<<"\nKaybedilen toplam kalori: "<<football_cal+basketball_cal+swim_cal+tennis_cal<<endl;
                    int totalcalout=football_cal+basketball_cal+swim_cal+tennis_cal;
                   
                    for(int i=0;i<7;i++){
                        for(int j=0;j<52;j++){
                        breakfast_cal=user.week[j].day[i].breakfast.getCal()+breakfast_cal;
                        }
                    }
                    cout<<"\n kahvaltılarda alınan toplam kalori:  "<<breakfast_cal<<endl;

                    for(int i=0;i<7;i++){
                        for(int j=0;j<52;j++){
                        lunch_cal=user.week[j].day[i].lunch.getCal()+lunch_cal;
                        }
                    }
                    cout<<"\n öğlen yemeklerinde alınan toplam kalori:  "<<lunch_cal<<endl;

                    for(int i=0;i<7;i++){
                        for(int j=0;j<52;j++){
                        dinner_cal=user.week[j].day[i].dinner.getCal()+dinner_cal;
                        }
                    }
                    cout<<"\n akşam yemeklerinde alınan toplam kalori:  "<<dinner_cal<<endl;

                    cout<<"\nAlınan Toplam Kalori: "<<breakfast_cal+lunch_cal+dinner_cal<<endl;
                    int totalcalin=breakfast_cal+lunch_cal+dinner_cal;
                    
                    cout<<"\n Alınan Kalori- Verilen Kalori = "<<totalcalin-totalcalout<<endl;
 
                }
                
                
            }
              
            }
            
        
        default:
            cout<<"Yanlış bir seçim yaptınız!"<<endl;
            break;
    }
    
    return 0;
        
}
    
