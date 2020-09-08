#include<LiquidCrystal.h>
#include<RTC.h>
#include<Servo.h>
#include<EEPROM.h>
#include<Wire.h>

Servo servo;
float derajat;
static DS3231 RTC;


void setup() 
            {
            Serial.begin(9600);
            servo.attach(2);
            RTC.begin();
            }

void loop() 
            {
              Serial.print(" ");
              Serial.print(RTC.getDay());
              Serial.print("-");
              Serial.print(RTC.getMonth());
              Serial.print("-");
              Serial.print(RTC.getYear());

              Serial.print(" ");

              Serial.print(RTC.getHours());
              Serial.print(":");
              Serial.print(RTC.getMinutes());
              Serial.print(":");
              Serial.print(RTC.getSeconds());
              Serial.print(" ");
              delay(1000);
 
              if    (RTC.getMonth() == 1)               // Januari
                    {  
                    if    (RTC.getHours() >= 7 && RTC.getHours() <=17 )
                          {
                          delay(150);
                          servo.write(22);
                          Serial.print("JAN"); 
                          Serial.print(" ");
                          for   (derajat=22;derajat <= 164; derajat+=1.2)                // sudut jam 6.00, 8 derajat, bergerak 1.2 derajat setiap 5 menit
                                {
                                servo.write(derajat);                          
                                delay(1000);           
                                Serial.print(derajat); 
                                Serial.print(" ");
                                }
                          delay (5000);
                          for   (derajat=164;derajat>=22;derajat-=3)                    // servo kembali ke posisi 8 derajat
                                {
                                servo.write(derajat);                           
                                delay(1000);
                                Serial.print(derajat); 
                                Serial.print(" ");
                                }
                          delay(1000);                                          // menunggu 12 jam untuk kembali bergerak 
                          }
                    else 
                          {
                          servo.write(22);
                          Serial.print("Berhenti bergerak dari jam  17.00 hingga 06.00");
                          }
                     }
            else if (RTC.getMonth()==2)              // Februari
                    {
                    if    (RTC.getHours()>=7 && RTC.getHours()<=17)      
                          {
                          delay(150);
                          servo.write(17);
                          Serial.print("FEB");
                          Serial.print(" ");
                          for   (derajat=17;derajat <= 162; derajat+=1.3)               // sudut awal jam 6.00, 2 derajat, bergerak 1 derajat setiap 4 menit
                                {
                                servo.write(derajat);               
                                delay(1000);
                                Serial.print(derajat); 
                                Serial.print(" ");
                                }
                          delay (5000);
                          for   (derajat=162;derajat>=17;derajat-=3)                    // servo kembali ke posisi 2 derajat
                                {
                                servo.write(derajat);
                                delay(1000);
                                Serial.print(derajat);
                                Serial.print(" "); 
                                }
                          delay(1000);                                  
                          }
               else       {
                          servo.write(17);
                          Serial.print("Berhenti bergerak dari jam  17.00 hingga 06.00"); 
                          }
  
                    }
              else if     (RTC.getMonth()==3)              // Maret
                          {
                          if    (RTC.getHours()>=7 && RTC.getHours()<=17)
                                {
                                delay(150);
                                servo.write(17); 
                                Serial.print("MAR");
                                Serial.print(" ");
                                for   (derajat=17;derajat <= 165; derajat+=1)                // sudut awal 6.00, 2 derajat, bergerak 1 derajat setiap 4 menit
                                      {
                                      servo.write(derajat);
                                      delay(1000);
                                      Serial.print(derajat);
                                      Serial.print(" "); 
                                      }      
                                delay (5000);
                                for   (derajat=165;derajat>=17;derajat-=5)                  // servo kembali ke posisi 2 derajat
                                      {
                                      servo.write(derajat);
                                      delay(1000);
                                      Serial.print(derajat);
                                      Serial.print(" "); 
                                      }
                                delay(1000);
                                }
                          else  
                                {
                                servo.write(17);
                                Serial.print("Berhenti bergerak dari jam  17.00 hingga 06.00");
                                }
                          }
             
              else if     (RTC.getMonth()==4)           // April
                          {
                          if    (RTC.getHours()>=7 && RTC.getHours()>=17)
                                {
                                delay(150);
                                servo.write(17);
                                Serial.print("APR");
                                Serial.print(" ");
                                for   (derajat=17;derajat <= 168; derajat+=1.3)              // sudut awal 6.00, 2 derajat, bergerak 1 derajat setiap 4 menit
                                      {
                                      servo.write(derajat);                 
                                      delay(1000);
                                      Serial.print(derajat);
                                      Serial.print(" "); 
                                      }
                                delay (5000);
                                for   (derajat=168;derajat>=17;derajat-=3)
                                      {
                                      servo.write(derajat);
                                      delay(500);
                                      Serial.print(derajat); 
                                      Serial.print(" ");
                                      }
                                delay(1000);
                                } 
                        else  
                                {
                                servo.write(17);
                                Serial.print("Berhenti bergerak dari jam  17.00 hingga 06.00");
                                } 
                        }
  
               else if  (RTC.getMonth()==5)          // Mei
                        {
                        if    (RTC.getHours()>=7 && RTC.getHours()<=17)
                              {
                              delay(150);
                              servo.write(17);
                              Serial.print("MEI");
                              Serial.print(" ");
                              for   (derajat=17;derajat <= 171; derajat+=1.3)             // sudut awal 6.00, 2 derajat, bergerak 1 derajat setiap 4 menit
                                    {
                                    servo.write(derajat);                 
                                    delay(1000);
                                    Serial.print(derajat); 
                                    Serial.print(" ");
                                    }
                              delay (5000);
                            for     (derajat=171;derajat>=17;derajat-=5)
                                    {  
                                    servo.write(derajat);
                                    delay(500);
                                    Serial.print(derajat); 
                                    Serial.print(" ");
                                    }
                            delay(1000);
                            }  
                      else
                            {
                             servo.write(17);
                             Serial.print("Berhenti bergerak dari jam  17.00 hingga 06.00");
                            } 
                     }    
              else if  (RTC.getMonth()==6)        // Juni
                       {
                       if    (RTC.getHours()>=7 && RTC.getHours()<=17) 
                             {
                             delay(150);
                             servo.write(18);
                             Serial.print("JUN");
                             Serial.print(" ");
                             for   (derajat=18;derajat <= 172; derajat+=1.5)            // sudut awal 6.00, 0 derajat, bergerak 1.5 derajat setiap 5 menit
                                   {
                                   servo.write(derajat);                 
                                   delay(1000);
                                   Serial.print(derajat); 
                                   Serial.print(" ");
                                   }
                             delay (5000);
                             for   (derajat=172;derajat>=18;derajat-=5)
                                   {
                                   servo.write(derajat);
                                   delay(500);
                                   Serial.print(derajat); 
                                   Serial.print(" ");
                                   }
                             delay(1000);
                            }
                      else
                            {
                            servo.write(18);
                            Serial.print("Berhenti bergerak dari jam  17.00 hingga 06.00");
                            } 
                      }   
                      
            else if   (RTC.getMonth()==7)      // Juli
                      {
                      if    (RTC.getHours()>=7 && RTC.getHours()<=17)
                            {    
                            delay(150);
                            servo.write(15);
                            Serial.print("JUL");
                            Serial.print(" ");
                            for   (derajat=15;derajat <= 170; derajat+=1.4)            // sudut awal 6.00, 0 derajat, bergerak 1.4 derajat setiap 5 menit
                                  {
                                  servo.write(derajat);                 
                                  delay(1000);
                                  Serial.print(derajat); 
                                  Serial.print(" ");
                                  }
                           delay (5000);
                           for    (derajat=176;derajat>=0;derajat-=5)
                                  {
                                  servo.write(derajat);
                                  delay(500);
                                  Serial.print(derajat);
                                  Serial.print(" ");
                                  }
                          delay(1000);
                          }  
                      else
                          {
                           servo.write(15);
                           Serial.print("Berhenti bergerak dari jam  17.00 hingga 06.00");
                          } 
                      }
            else if   (RTC.getMonth()==8)         // Agustus
                      {
                      if   (RTC.getHours()>=7 && RTC.getMinutes()<=17)
                           {
                           delay(150);
                           servo.write(16);
                           Serial.print("AGUSTS");
                           Serial.print(" ");
                           for    (derajat=16;derajat <= 170; derajat+=1.5)             // sudut awal 6.00, 1 derajat, bergerak 1.5 derajat setiap 5 menit
                                  {
                                  servo.write(derajat);                 
                                  delay(1000);
                                  Serial.print(derajat);
                                  Serial.print(" ");
                                  }
                          delay (5000);
                          for     (derajat=170;derajat>=16;derajat-=5)
                                  {
                                  servo.write(derajat);
                                  delay(500);
                                  Serial.print(derajat); 
                                  Serial.print(" ");
                                  }
                          delay(1000);
                          }  
                      else
                          {
                          servo.write(16);
                          Serial.print("Berhenti bergerak dari jam  17.00 hingga 06.00");
                          }
                      }
             else if  (RTC.getMonth()==9)       // September
                      {
                      if  (RTC.getHours()>=7 && RTC.getHours()<=17) 
                          {
                          delay(150);
                          servo.write(19);
                          Serial.print("SEP");
                          Serial.print(" ");
                          for   (derajat=19;derajat <= 160; derajat+=1)             // sudut awal 6.00, 4 derajat, bergerak 1 derajat setiap 4 menit
                                {
                                servo.write(derajat);                 
                                delay(1000);
                                Serial.print(derajat); 
                                }
                          for   (derajat=160;derajat>=19;derajat-=5)
                                {
                                servo.write(derajat);
                                delay(500);
                                Serial.print(derajat); 
                                }
                          delay(1000);
                          }
                      else
                          {
                          servo.write(19);
                          Serial.print("Berhenti bergerak dari jam  17.00 hingga 06.00");
                          }
                      }      
             else if  (RTC.getMonth()==10)       // Oktober
                      {
                      if  (RTC.getHours()>=7 && RTC.getHours()>=17)
                          {
                          delay(150);
                          servo.write(25);
                          Serial.print("OKT");
                          for   (derajat=25;derajat <= 170; derajat+=1)             // sudut awal 6.00, 8 derajat, bergerak 1 derajat setiap 4 menit
                                {
                                servo.write(derajat);                 
                                delay(1000);
                                Serial.print(derajat); 
                                }
                          for   (derajat=176;derajat>=25;derajat-=5)
                                {
                                servo.write(derajat);
                                delay(500);
                                Serial.print(derajat); 
                                }
                                delay(1000);
                           }  
                      else
                          {
                          servo.write(23);
                          Serial.print("Berhenti bergerak dari jam  17.00 hingga 06.00");
                          }
                      }
  
               else if  (RTC.getMonth()==11)       // November
                      {
                      if  (RTC.getHours()>=7 && RTC.getHours()>=17)
                          {
                          delay(150);
                          servo.write(25);
                          Serial.print("NOV");
                          for   (derajat=25;derajat <= 170; derajat+=1)             // sudut awal 6.00, 8 derajat, bergerak 1 derajat setiap 4 menit
                                {
                                servo.write(derajat);                 
                                delay(1000);
                                Serial.print(derajat); 
                                }
                          for   (derajat=170;derajat>=25;derajat-=5)
                                {
                                servo.write(derajat);
                                delay(500);
                                Serial.print(derajat); 
                                }
                                delay(1000);
                           }  
                      else
                          {
                          servo.write(25);
                          Serial.print("Berhenti bergerak dari jam  17.00 hingga 06.00");
                          }
                      }
        
       else if  (RTC.getMonth()==12)       // DESEMBER
                      {
                      if  (RTC.getHours()>=7 && RTC.getHours()>=17)
                          {
                          delay(150);
                          servo.write(25);
                          Serial.print("DES");
                          for   (derajat=25;derajat <= 168; derajat+=1)             // sudut awal 6.00, 8 derajat, bergerak 1 derajat setiap 4 menit
                                {
                                servo.write(derajat);                 
                                delay(1000);
                                Serial.print(derajat); 
                                }
                          for   (derajat=168;derajat>=25;derajat-=5)
                                {
                                servo.write(derajat);
                                delay(500);
                                Serial.print(derajat); 
                                }
                                delay(1000);
                           }  
                      else
                          {
                          servo.write(25);
                          Serial.print("Berhenti bergerak dari jam  17.00 hingga 06.00");
                          }
                      }

       
        
       


} 
