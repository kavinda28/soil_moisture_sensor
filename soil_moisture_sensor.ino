int soil =A1;
int value=0;
int led=13;

void setup()
{
 pinMode(soil,INPUT);

 pinMode(led,OUTPUT);
 Serial.begin(9600); //this is not necessary-but to show value to pc

}
void loop()
{
 value = analogRead(soil );  //read value-analog from A0
 
  
  Serial.println(value);    
 delay(100);
 
if(value<260){
digitalWrite(led,HIGH);

} 
if(value>260){
digitalWrite(led,LOW);
}
delay(100);
}
