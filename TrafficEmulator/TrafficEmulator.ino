/*
 * Created by Haseeb Ehsan
*/

int count = 1;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  for(int i = 2; i<10 ; i++){
    pinMode(i,OUTPUT);
   // digitalWrite(i, HIGH);
  }
  allRed();
  
  
}

void allRed(){
  for(int i = 2; i<10 ; i+=2){
    digitalWrite(i, HIGH);
  }
}

void makeGreen(int x){
  digitalWrite(x*2, LOW);
  digitalWrite((x*2)+1, HIGH);
}
// the loop function runs over and over again forever
void loop() {

  makeGreen(count);

  delay(3000);

  digitalWrite((count*2)+1, LOW);
  allRed();
  count++;
  if(count >4){
    count = 1;
  }
  
//  digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
//  delay(500);                       // wait for a second
//  digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
//  delay(200);                       // wait for a second
}
