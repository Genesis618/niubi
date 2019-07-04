
刘腾 2019/7/4 15:13:26
//wasd 前左后右
char order_get = '*';
void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  
  if(Serial.available()>0){
      order_get = Serial.read();
  
  }
  switch(order_get){
      case 'w':forward();break;
    
      case 's':back();break;
    
      case 'a':left();break;
    
      case 'd':right();break;
    
      case 'q':stop();break;
    
      default:Serial.print("Invaild input!\n");break;
  }
  
}

void back(){
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);


}

void forward(){
    digitalWrite(6, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);


}

void left(){
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);


}

void right(){
    digitalWrite(6, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);


}

void stop(){
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
}
