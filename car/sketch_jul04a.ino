void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}


int input = 0;
void loop()
{
  
  
  if(Serial.available()>0){
      input = Serial.read() - '0';
      Serial.print("Number get:");
      Serial.println(input);
    int arr[4]={0, 0, 0, 0};
      int count = 0;
      while(input > 0){
        
        if(input % 2 == 0){
            arr[count] = 0;
        }
        else{
            arr[count] = 1;
        }
        
        input = input / 2;
        count ++ ;
    }
      
    
      for(int i=0;i<4;i++){
          
      
          if(arr[i]==0){
              digitalWrite(i+2, LOW);
    }
          else{
              digitalWrite(i+2, HIGH);
    }
       
  }
    
    
      Serial.print("Pin:");
      Serial.print(digitalRead(5));
      Serial.print(digitalRead(4));
      Serial.print(digitalRead(3));
      Serial.print(digitalRead(2));
      
      Serial.println();Serial.print("YOUR CODE:");
      for(int j=0;j<4;j++){

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
