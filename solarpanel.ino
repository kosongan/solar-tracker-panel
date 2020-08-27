#include<Wire.h>
#include<Servo.h>
#include<EEPROM.h>

Servo servo;
float derajat;
Time waktu;

void setup() 
             {
 
 Serial.begin(9600);
 servo.attach(2);
  
             }

void loop() 

{
 
    if (waktu.mon == 1 && waktu.hour >= 6 && waktu.min >=0)               // Januari
       {  
       delay(150);
       servo.write(8);
       for(derajat=8;derajat <= 175; derajat+=1.2)                // sudut jam 6.00, 8 derajat, bergerak 1.2 derajat setiap 5 menit
       {
       servo.write(derajat);                            
       delay(300000);                              
       }
       for(derajat=175;derajat>=8;derajat-=5)                    // servo kembali ke posisi 8 derajat
       {
       servo.write(derajat);                           
       delay(1000);
       }
       delay(43200000);                                          // menunggu 12 jam untuk kembali bergerak 
       }

else if (waktu.mon==2 && waktu.hour==6 && waktu.min==0)             // Februari
        {
        delay(150);
        servo.write(2);
       
       for(derajat=2;derajat <= 176; derajat+=1.3)               // sudut awal jam 6.00, 2 derajat, bergerak 1 derajat setiap 4 menit
       {
       servo.write(derajat);                  
       delay(240000);
       }
       for(derajat=176;derajat>=2;derajat-=5)                    // servo kembali ke posisi 2 derajat
       {
       servo.write(derajat);
       delay(1000);
       }
      delay(43200000);                                  
       }
  

else if (waktu.mon==3 && waktu.hour==6 && waktu.min==0)             // Maret
       {
       (delay(150);
       servo.write(2); 
       
       for(derajat=2;derajat <= 176; derajat+=1)                // sudut awal 6.00, 2 derajat, bergerak 1 derajat setiap 4 menit
       {
       servo.write(derajat);
       delay(240000);
       }      
       for(derajat=176;derajat>=2;derajat-=5){                  // servo kembali ke posisi 2 derajat
       servo.write(derajat);
       delay(1000);
       }
      delay(43200000);
       }

else if  (waktu.mon==4 && waktu.hour==6 && waktu.min==0)           // April
       {
       delay(150);
       servo.write(2);
       for(derajat=2;derajat <= 176; derajat+=1.3)              // sudut awal 6.00, 2 derajat, bergerak 1 derajat setiap 4 menit
       {
       servo.write(derajat);                 
       delay(240000);
       }
       for(derajat=176;derajat>=2;derajat-=5)
       {
       servo.write(derajat);
       delay(500);
       }
       delay(43200000);
       }  

  
else if  (waktu.mon==5 && waktu.hour==6 && waktu.min==0)          // Mei
       {
       delay(150);
       servo.write(2);
       for(derajat=2;derajat <= 176; derajat+=1.3)             // sudut awal 6.00, 2 derajat, bergerak 1 derajat setiap 4 menit
       {
       servo.write(derajat);                 
       delay(240000);
       }
       for(derajat=176;derajat>=2;derajat-=5)
       {
       servo.write(derajat);
       delay(500);
       }
       delay(43200000);
       }  
        
  else if  (waktu.mon==6 && waktu.hour==6 && waktu.min==0)        // Juni
       {
       delay(150);
       servo.write(0);
       for(derajat=0;derajat <= 176; derajat+=1.5)            // sudut awal 6.00, 0 derajat, bergerak 1.5 derajat setiap 5 menit
       {
       servo.write(derajat);                 
       delay(300000);
       }
       for(derajat=176;derajat>=0;derajat-=5)
       {
       servo.write(derajat);
       delay(500);
       }
       delay(43200000);
       }  
        
   else if  (waktu.mon==7 && waktu.hour==6 && waktu.min==0)      // Juli
       {
       delay(150);
       servo.write(0);
       for(derajat=0;derajat <= 176; derajat+=1.4)            // sudut awal 6.00, 0 derajat, bergerak 1.4 derajat setiap 5 menit
       {
       servo.write(derajat);                 
       delay(300000);
       }
       for(derajat=176;derajat>=0;derajat-=5)
       {
       servo.write(derajat);
       delay(500);
       }
       delay(43200000);
       }  
        
   else if  (waktu.mon==8 && waktu.hour==6 && waktu.min==0)       // Agustus
       {
       delay(150);
       servo.write(1);
       for(derajat=1;derajat <= 176; derajat+=1.5)             // sudut awal 6.00, 1 derajat, bergerak 1.5 derajat setiap 5 menit
       {
       servo.write(derajat);                 
       delay(300000);
       }
       for(derajat=176;derajat>=0;derajat-=5)
       {
       servo.write(derajat);
       delay(500);
       }
       delay(43200000);
       }  
        
   else if  (waktu.mon==9 && waktu.hour==6 && waktu.min==0)       // September
       {
       delay(150);
       servo.write(4);
       for(derajat=4;derajat <= 176; derajat+=1)             // sudut awal 6.00, 4 derajat, bergerak 1 derajat setiap 4 menit
       {
       servo.write(derajat);                 
       delay(240000);
       }
       for(derajat=176;derajat>=0;derajat-=5)
       {
       servo.write(derajat);
       delay(500);
       }
       delay(43200000);
       }  
        
else if  (waktu.mon==10 && waktu.hour==6 && waktu.min==0)       // Oktober
       {
       delay(150);
       servo.write(8);
       for(derajat=8;derajat <= 176; derajat+=1)             // sudut awal 6.00, 8 derajat, bergerak 1 derajat setiap 4 menit
       {
       servo.write(derajat);                 
       delay(240000);
       }
       for(derajat=176;derajat>=0;derajat-=5)
       {
       servo.write(derajat);
       delay(500);
       }
       delay(43200000);
       }  
        
else if  (waktu.mon==11 && waktu.hour==6 && waktu.min==0)       // November
       {
       delay(150);
       servo.write(10);
       for(derajat=10;derajat <= 176; derajat+=1)             // sudut awal 6.00, 8 derajat, bergerak 1 derajat setiap 4 menit
       {
       servo.write(derajat);                 
       delay(240000);
       }
       for(derajat=176;derajat>=0;derajat-=5)
       {
       servo.write(derajat);
       delay(500);
       }
       delay(43200000);
       }        
        
      else  (waktu.mon==12 && waktu.hour==6 && waktu.min==0)       // Desember
       {
       delay(150);
       servo.write(8);
       for(derajat=8;derajat <= 176; derajat+=1.4)             // sudut awal 6.00, 8 derajat, bergerak 1 derajat setiap 4 menit
       {
       servo.write(derajat);                 
       delay(300000);
       }
       for(derajat=176;derajat>=0;derajat-=5)
       {
       servo.write(derajat);
       delay(500);
       }
       delay(43200000);
       }        
        
}
