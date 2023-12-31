int inp;
int led= 13;

void setup() {
  Serial.begin(9600);
}

void loop() {

while(Serial.available()>0){
  inp = Serial.read();
  Serial.println(inp);
  if(inp==97) digitalWrite(led,HIGH);
  else if(inp == 98) digitalWrite(led,LOW);
}

}
