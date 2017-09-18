/*
  Morse

  Uses LED to pass message via Morse Code

  modified 12 Sep 2017
  by Matthew Dang
  
*/
  String Message = "ABC DEF GHI JKL MNO PQR STU VWX YZ0 123 456 789"; //ONLY CAPITAL LETTERS & NUMERALS
  int mesI = 0;
  int letI = 0;
// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void printMesSpace() {
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(11000);
}

void printWordSpace() {
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(7000);
}

void printLetSpace() {
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(3000);
}

void printPartsSpace() {
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);
}

void printDot() {
  digitalWrite(LED_BUILTIN, HIGH);    // turn the LED off by making the voltage LOW
  delay(1000);
}

void printDash() {
  digitalWrite(LED_BUILTIN, HIGH);    // turn the LED off by making the voltage LOW
  delay(3000);
}

// the loop function runs over and over again forever
void loop() {
  // go through chars in message
  for(mesI = 0; mesI < Message.length(); mesI++) {
    Serial.print(Message[mesI]);
    switch(Message[mesI]) {
      case 'A': // dot dash
      printDot();
      printPartsSpace();
      printDash();
      break;
      case 'B': // dash dot dot dot
      printDash();
      printPartsSpace();
      printDot();
      printPartsSpace();
      printDot();
      printPartsSpace();
      printDot();
      break;
      case 'C': // dash dot dash dot
      printDash();
      printPartsSpace();
      printDot();
      printPartsSpace();
      printDash();
      printPartsSpace();
      printDot();
      break;
      case 'D': // dash dot dot
      printDash();
      printPartsSpace();
      printDot();
      printPartsSpace();
      printDot();
      break;
      case 'E': // dot
      printDot();
      break;
      case 'F': // dot dot dash dot
      printDot();
      printPartsSpace();
      printDot();
      printPartsSpace();
      printDash();
      printPartsSpace();
      printDot();
      break;
      case 'G': //dash dash dot
      printDash();
      printPartsSpace();
      printDash();
      printPartsSpace();
      printDot();
      break;
      case 'H': //dot dot dot dot
      printDot();
      printPartsSpace();
      printDot();
      printPartsSpace();
      printDot();
      printPartsSpace();
      printDot();
      break;
      case 'I': // dot dot
      printDot();
      printPartsSpace();
      printDot();
      break;
      case 'J': // dot dash dash dash
      printDot();
      printPartsSpace();
      printDash();
      printPartsSpace();
      printDash();
      printPartsSpace();
      printDash();
      break;
      case 'K': // dash dot dash
      printDash();
      printPartsSpace();
      printDot();
      printPartsSpace();
      printDash();
      break;
      case 'L' : // dot dash dot dot
      printDot();
      printPartsSpace();
      printDash();
      printPartsSpace();
      printDot();
      printPartsSpace();
      printDot();
      break;
      case 'M' : // dash dash
      printDash();
      printPartsSpace();
      printDash();
      break;
      case 'N' : //dash dot
      printDash();
      printPartsSpace();
      printDot();
      break;
      case 'O': // dash dash dash
      printDash();
      printPartsSpace();
      printDash();
      printPartsSpace();
      printDash();
      break;
      case 'P': // dot dash dash dot
      printDot();
      printPartsSpace();
      printDash();
      printPartsSpace();
      printDash();
      printPartsSpace();
      printDot();
      break;
      case 'Q': //dash dash dot dash
      printDash();
      printPartsSpace();
      printDash();
      printPartsSpace();
      printDot();
      printPartsSpace();
      printDash();
      break;
      case 'R': // dot dash dot
      printDot();
      printPartsSpace();
      printDash();
      printPartsSpace();
      printDot();
      break;
      case 'S': // dot dot dot
      printDot();
      printPartsSpace();
      printDot();
      printPartsSpace();
      printDot();
      break;
      case 'T': // dash
      printDash();
      break;
      case 'U': // dot dot dash
      printDot();
      printPartsSpace();
      printDot();
      printPartsSpace();
      printDash();
      break;
      case 'V': // dot dot dot dash
      printDot();
      printPartsSpace();
      printDot();
      printPartsSpace();
      printDot();
      printPartsSpace();
      printDash();
      break;
      case 'W': // dot dash dash
      printDot();
      printPartsSpace();
      printDash();
      printPartsSpace();
      printDash();
      break;
      case 'X': // dash dot dot dash
      printDash();
      printPartsSpace();
      printDot();
      printPartsSpace();
      printDot();
      printPartsSpace();
      printDash();
      break;
      case 'Y': // dash dot dash dash
      printDash();
      printPartsSpace();
      printDot();
      printPartsSpace();
      printDash();
      printPartsSpace();
      printDash();
      break;
      case 'Z': // dash dash dot dot
      printDash();
      printPartsSpace();
      printDash();
      printPartsSpace();
      printDot();
      printPartsSpace();
      printDot();
      break;

      case '0': // dash dash dash dash dash
      printDash();
      printPartsSpace();
      printDash();
      printPartsSpace();
      printDash();
      printPartsSpace();
      printDash();
      printPartsSpace();
      printDash();
      break;
      case '1': // dot dash dash dash dash
      printDot();
      printPartsSpace();
      printDash();
      printPartsSpace();
      printDash();
      printPartsSpace();
      printDash();
      printPartsSpace();
      printDash();
      break;
      case '2': // dot dot dash dash dash
      printDot();
      printPartsSpace();
      printDot();
      printPartsSpace();
      printDash();
      printPartsSpace();
      printDash();
      printPartsSpace();
      printDash();
      break;
      case '3': // dot dot dot dash dash
      printDot();
      printPartsSpace();
      printDot();
      printPartsSpace();
      printDot();
      printPartsSpace();
      printDash();
      printPartsSpace();
      printDash();
      break;
      case '4': // dot dot dot dot dash
      printDot();
      printPartsSpace();
      printDot();
      printPartsSpace();
      printDot();
      printPartsSpace();
      printDot();
      printPartsSpace();
      printDash();
      break;
      case '5': // dot dot dot dot dot
      printDot();
      printPartsSpace();
      printDot();
      printPartsSpace();
      printDot();
      printPartsSpace();
      printDot();
      printPartsSpace();
      printDot();
      break;
      case '6': // dash dot dot dot dot
      printDash();
      printPartsSpace();
      printDot();
      printPartsSpace();
      printDot();
      printPartsSpace();
      printDot();
      printPartsSpace();
      printDot();
      break;
      case '7': // dash dash dot dot dot
      printDash();
      printPartsSpace();
      printDash();
      printPartsSpace();
      printDot();
      printPartsSpace();
      printDot();
      printPartsSpace();
      printDot();
      break;
      case '8': // dash dash dash dot dot
      printDash();
      printPartsSpace();
      printDash();
      printPartsSpace();
      printDash();
      printPartsSpace();
      printDot();
      printPartsSpace();
      printDot();
      break;
      case '9': // dash dash dash dash dot
      printDash();
      printPartsSpace();
      printDash();
      printPartsSpace();
      printDash();
      printPartsSpace();
      printDash();
      printPartsSpace();
      printDot();
      break;
      
      case ' ':
      printWordSpace();
      break;
      default: Serial.print("Unknown Char");
      break;
    }// end of letter
    if(Message[mesI] != ' ') {
      printLetSpace();
    }
  }// end of message
  printMesSpace();
}
