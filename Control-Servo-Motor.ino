/* Kendali Motor Servo,
Sweep Servo
*/

#include <Servo.h> 
Servo myservo; // membuat obyek servo untuk kendali servo 
int pos = 0; // variabel untuk menyimpan posisi/sudut servo  
void setup(){ 
	myservo.attach(9);  // pasang objek servo pada pin 9 
} 
void loop(){ 
	for( pos = 0; pos < 180; pos += 1)// posisi dari 0                        // derajat ke 180 derajat dengan langkah 1 derajat
	{    
		myservo.write(pos);// posisi sesuai variable 'pos' 
		delay(15);  // tunggu 15ms untuk posisi servo 
	} 
	for(   pos = 180; pos >= 1; pos -= 1) // posisi dari 180              
	// derajat ke 0 derajat 
	{                                
		myservo.write(pos); // posisi sesuai variable 'pos'  
		delay(15);   // tunggu 15ms untuk posisi servo    
	} 
}
