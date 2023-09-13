// int trig =7;
// int echo = 6;
// int timeInMicro;
// int distanceInCm; 
// int buzzer = 8;



// void setup(){
//   Serial.begin(9600);
//   pinMode(7,OUTPUT);
//   pinMode(6,INPUT);
// }

// void loop(){
//   pinMode(buzzer,OUTPUT);
//   digitalWrite(trig,LOW);
//   delayMicroseconds(2);
//   digitalWrite(trig,HIGH);
//   delayMicroseconds(10);
//   digitalWrite(trig,LOW);
//   timeInMicro = pulseIn(echo,HIGH);
//   distanceInCm = timeInMicro /29 /2 ;
//   if (distanceInCm ==100){
//     for(int i=0;i<100; i++){
//     digitalWrite(buzzer,HIGH);
//     delay(1);
//     digitalWrite(buzzer,LOW);
//     delay(1);
//   }
//   delay(1000);
//   } 
//   Serial.println(distanceInCm);
//   delay(100);
// }