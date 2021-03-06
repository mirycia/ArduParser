#include <ArduParser.h>

//Definition bauds per second for Serial Communication (ESP8266, BlueTooth, Serial)
long bps=9600;

arduParser parserApp ("<","|",">"); 

void setup() {
  Serial.begin(bps);
  Serial.println("ArduParser Init!");
  
  String BTLine = "<FW|C|10|3.123>";
  
  parseString v = parserApp.parser(BTLine);
  Serial.println(parserApp.ndata);

  for(int n=0; n < parserApp.ndata; n++){
    Serial.print(v.typeString[n]);
    Serial.print(" : ");
    Serial.println(v.dataString[n]);
  }
}

void loop() {

}
