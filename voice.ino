String voice;

int 
led1 = 8,
led2 = 10, 
led3 = 12, 
led4 = 13,  
led5 = 5;
led6 = 6;
led7 = 3;

void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT); 
  pinMode(led2, OUTPUT); 
  pinMode(led3, OUTPUT); 
  pinMode(led4, OUTPUT); 
  pinMode(led5, OUTPUT); 
  pinMode(led6, OUTPUT); 
  pinMode(led7, OUTPUT); 
}

void hidupsemua(){
     digitalWrite(led1, HIGH); 
     digitalWrite(led2, HIGH); 
     digitalWrite(led3, HIGH); 
     digitalWrite(led4, HIGH); 
     digitalWrite(led5, HIGH); 
     digitalWrite(led6, HIGH); 
     digitalWrite(led7, HIGH); 
}
void matisemua(){
     digitalWrite(led1, LOW); 
     digitalWrite(led2, LOW); 
     digitalWrite(led3, LOW); 
     digitalWrite(led4, LOW); 
     digitalWrite(led5, LOW);
     digitalWrite(led6, LOW);
     digitalWrite(led7, LOW);
}


void loop() {
  while (Serial.available()){ 
  delay(10); 
  char c = Serial.read(); 
  if (c == '#') {break;} 
  voice += c; 
  }  
  if (voice.length() > 0) {
    Serial.println(voice); 


  if(voice == "*hidup") {
       hidupsemua();}  
  else if(voice == "*mati"){
       matisemua();} 

  else if(voice == "*TV") {
       digitalWrite(led1, HIGH);} 
  else if(voice == "*kipas") {
       igitalWrite(led2, HIGH);}
  else if(voice == "*AC") {
       digitalWrite(led3, HIGH);}
  else if(voice == "*dispenser") {
       digitalWrite(led4, HIGH);}
  else if(voice == "*sanyo") {
       digitalWrite(led5, HIGH);}
  else if(voice == "*lampu dapur") {
       digitalWrite(led6, HIGH);}
  else if(voice == "*lampu kamar surya") {
       digitalWrite(led7, HIGH);}
 
  else if(voice == "*TV mati") {
       digitalWrite(led1, LOW);} 
  else if(voice == "*kipas mati") {
       digitalWrite(led2, LOW);}
  else if(voice == "*AC mati") {
       digitalWrite(led3, LOW);}
  else if(voice == "*dispenser mati") {
       digitalWrite(led4, LOW);}
  else if(voice == "*sanyo mati") {
       digitalWrite(led5, LOW);}
  else if(voice == "*lampu dapur mati") {
       digitalWrite(led6, LOW);}
  else if(voice == "*lampu kamar surya mati") {
       digitalWrite(led7, LOW);}

voice="";}} 
