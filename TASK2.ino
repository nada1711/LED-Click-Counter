int red=5;
int yallow=6;
int green=7;
int button=8;
int count=0;
void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yallow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(button,INPUT);

}

void loop()
{
  

  if(digitalRead(button)==HIGH){
    

count++;
 if(count==1){
digitalWrite(red,1);
  
}
else if(count==2){
digitalWrite(yallow,1);
  digitalWrite(red,0);
  }
  else if(count==3){
    
  
digitalWrite(yallow,0);
  digitalWrite(red,0);
    digitalWrite(green,1);



}
    else{
digitalWrite(yallow,0);
  digitalWrite(red,0);
    digitalWrite(green,0);count=0;


}

delay(500);

   
  
  
}}