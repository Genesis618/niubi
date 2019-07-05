#include <string.h>


char ch_get;

String out;
void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    if(Serial.available()>0){
      ch_get = Serial.read(); 
      if(ch_get==' ' || ch_get=='\n'){
      out += "/???";
      }
          else{
             switch(ch_get){
        case 'a':out = "*-??"; break; 
        case 'b':out = "-***";  break;
        case 'c':out = "-*-*";   break;
        case 'd':out = "-**?";  break;
        case 'e':out = "*???";break;
        case 'f':out = "**-*";  break;
        case 'g':out = "--*?";break;
        case 'h':out = "****";break;
        case 'i':out = "**??";   break;
        case 'j':out = "*---";break;
        case 'k':out = "-*-?";break;
        case 'l':out = "*-**";   break;
        case 'm':out = "--??";break;
        case 'n':out = "-*??";break;
        case 'o':out = "---?";break;
        case 'p':out = "*--*";break;
        case 'q':out = "--*-";break;
        case 'r':out = "*-*?";break;
        case 's':out = "***?";  break;
        case 't':out = "-???";  break;
        case 'u':out = "**-?";break;
        case 'v':out = "***-";  break;
        case 'w':out = "*--?";break;
        case 'x':out = "-**-";break;
        case 'y':out = "-*--";break;
        case 'z':out = "--**";  break;

        }//switch
            
            
      } //else
      
      for(int i=0;i<4;i++){
          if(out[i] == '*'){
              on(1);
              off(1);
          }else if(out[i] == '-'){
              on(3);
              off(1);
          }else if(out[i] == '/'){
              off(4);
          }
          
          
      }
      off(2);
      out = "";
      
      }//if
  
}  




void on(int time){
    int baseTime = 500;
    digitalWrite(2, HIGH);
    delay(time * baseTime);




}

void off(int time){
    int baseTime = 500;
    digitalWrite(2, LOW);
    delay(time * baseTime);




}
