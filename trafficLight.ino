// Define the pins for the traffic lights

const int redPin1 = 2;
const int yellowPin1 = 3;
const int greenPin1 = 4;

const int greenPin2 = 7;
const int yellowPin2 = 6;
const int redPin2 = 5;

const int greenPin3 = 10;
const int yellowPin3 = 9;
const int redPin3 = 8;

const int greenPin4 = 13;
const int yellowPin4 = 12;
const int redPin4 = 11;

int traffic_delay = 0;




void traffic_light1(int num_cars){
  if (num_cars > 0 && num_cars <=2){
    traffic_delay = 3000;
      digitalWrite(redPin1, LOW);
      digitalWrite(yellowPin1, LOW);
      digitalWrite(greenPin1, HIGH);
      delay(traffic_delay); // Wait for 2 seconds
      for (int i = 0; i < 3; i++) {  // Blink 3 times
        digitalWrite(greenPin1, HIGH);
        delay(500);  // Green light ON for 0.5 seconds
        digitalWrite(greenPin1, LOW);
        delay(500);  // Green light OFF for 0.5 seconds
      }

      // Red and Yellow lights (transition)
      
      for (int i = 0; i < 4; i++) {  // Blink 3 times
        digitalWrite(yellowPin1, HIGH);
        delay(500);  // Green light ON for 0.5 seconds
        digitalWrite(yellowPin1, LOW);
        delay(500);  // Green light OFF for 0.5 seconds
      }

      // Red light
      digitalWrite(redPin1, HIGH);
      digitalWrite(greenPin1, LOW);
      digitalWrite(yellowPin1, LOW);
      delay(1000); // Wait for 2 seconds

  }

  if (num_cars == 3){
    traffic_delay = 6000;
      digitalWrite(redPin1, LOW);
      digitalWrite(yellowPin1, LOW);
      digitalWrite(greenPin1, HIGH);
      delay(traffic_delay); // Wait for 2 seconds
      for (int i = 0; i < 3; i++) {  // Blink 3 times
        digitalWrite(greenPin1, HIGH);
        delay(500);  // Green light ON for 0.5 seconds
        digitalWrite(greenPin1, LOW);
        delay(500);  // Green light OFF for 0.5 seconds
      }

      // Red and Yellow lights (transition)
      
      for (int i = 0; i < 4; i++) {  // Blink 3 times
        digitalWrite(yellowPin1, HIGH);
        delay(500);  // Green light ON for 0.5 seconds
        digitalWrite(yellowPin1, LOW);
        delay(500);  // Green light OFF for 0.5 seconds
      }

      // Red light
      digitalWrite(redPin1, HIGH);
      digitalWrite(greenPin1, LOW);
      digitalWrite(yellowPin1, LOW);
      delay(2000); // Wait for 2 seconds

  }

  if (num_cars >= 4){
    traffic_delay = 12000;
      digitalWrite(redPin1, LOW);
      digitalWrite(yellowPin1, LOW);
      digitalWrite(greenPin1, HIGH);
      delay(traffic_delay); // Wait for 2 seconds
      for (int i = 0; i < 3; i++) {  // Blink 3 times
        digitalWrite(greenPin1, HIGH);
        delay(500);  // Green light ON for 0.5 seconds
        digitalWrite(greenPin1, LOW);
        delay(500);  // Green light OFF for 0.5 seconds
      }

      // Red and Yellow lights (transition)
      
      for (int i = 0; i < 4; i++) {  // Blink 3 times
        digitalWrite(yellowPin1, HIGH);
        delay(500);  // Green light ON for 0.5 seconds
        digitalWrite(yellowPin1, LOW);
        delay(500);  // Green light OFF for 0.5 seconds
      }

      // Red light
      digitalWrite(redPin1, HIGH);
      digitalWrite(greenPin1, LOW);
      digitalWrite(yellowPin1, LOW);
      delay(2000); // Wait for 2 seconds

  }
}

//#################################################################

void traffic_light2(int num_cars){
  if (num_cars > 0 && num_cars <=2){
    traffic_delay = 3000;
      digitalWrite(redPin2, LOW);
      digitalWrite(yellowPin2, LOW);
      digitalWrite(greenPin2, HIGH);
      delay(traffic_delay); // Wait for 2 seconds
      for (int i = 0; i < 3; i++) {  // Blink 3 times
        digitalWrite(greenPin2, HIGH);
        delay(500);  // Green light ON for 0.5 seconds
        digitalWrite(greenPin2, LOW);
        delay(500);  // Green light OFF for 0.5 seconds
      }

      // Red and Yellow lights (transition)
      
      for (int i = 0; i < 4; i++) {  // Blink 3 times
        digitalWrite(yellowPin2, HIGH);
        delay(500);  // Green light ON for 0.5 seconds
        digitalWrite(yellowPin2, LOW);
        delay(500);  // Green light OFF for 0.5 seconds
      }

      // Red light
      digitalWrite(redPin2, HIGH);
      digitalWrite(greenPin2, LOW);
      digitalWrite(yellowPin2, LOW);
      delay(1000); // Wait for 2 seconds

  }

  if (num_cars == 3){
    traffic_delay = 6000;
      digitalWrite(redPin2, LOW);
      digitalWrite(yellowPin2, LOW);
      digitalWrite(greenPin2, HIGH);
      delay(traffic_delay); // Wait for 2 seconds
      for (int i = 0; i < 3; i++) {  // Blink 3 times
        digitalWrite(greenPin2, HIGH);
        delay(500);  // Green light ON for 0.5 seconds
        digitalWrite(greenPin2, LOW);
        delay(500);  // Green light OFF for 0.5 seconds
      }

      // Red and Yellow lights (transition)
      
      for (int i = 0; i < 4; i++) {  // Blink 3 times
        digitalWrite(yellowPin2, HIGH);
        delay(500);  // Green light ON for 0.5 seconds
        digitalWrite(yellowPin2, LOW);
        delay(500);  // Green light OFF for 0.5 seconds
      }

      // Red light
      digitalWrite(redPin2, HIGH);
      digitalWrite(greenPin2, LOW);
      digitalWrite(yellowPin2, LOW);
      delay(2000); // Wait for 2 seconds

  }

  if (num_cars >= 4){
    traffic_delay = 12000;
      digitalWrite(redPin2, LOW);
      digitalWrite(yellowPin2, LOW);
      digitalWrite(greenPin2, HIGH);
      delay(traffic_delay); // Wait for 2 seconds
      for (int i = 0; i < 3; i++) {  // Blink 3 times
        digitalWrite(greenPin2, HIGH);
        delay(500);  // Green light ON for 0.5 seconds
        digitalWrite(greenPin2, LOW);
        delay(500);  // Green light OFF for 0.5 seconds
      }

      // Red and Yellow lights (transition)
      
      for (int i = 0; i < 4; i++) {  // Blink 3 times
        digitalWrite(yellowPin2, HIGH);
        delay(500);  // Green light ON for 0.5 seconds
        digitalWrite(yellowPin2, LOW);
        delay(500);  // Green light OFF for 0.5 seconds
      }

      // Red light
      digitalWrite(redPin2, HIGH);
      digitalWrite(greenPin2, LOW);
      digitalWrite(yellowPin2, LOW);
      delay(2000); // Wait for 2 seconds

  }
}

//#########################################################################

void traffic_light3(int num_cars){
  if (num_cars > 0 && num_cars <=2){
    traffic_delay = 3000;
      digitalWrite(redPin3, LOW);
      digitalWrite(yellowPin3, LOW);
      digitalWrite(greenPin3, HIGH);
      delay(traffic_delay); // Wait for 2 seconds
      for (int i = 0; i < 3; i++) {  // Blink 3 times
        digitalWrite(greenPin3, HIGH);
        delay(500);  // Green light ON for 0.5 seconds
        digitalWrite(greenPin3, LOW);
        delay(500);  // Green light OFF for 0.5 seconds
      }

      // Red and Yellow lights (transition)
      
      for (int i = 0; i < 4; i++) {  // Blink 3 times
        digitalWrite(yellowPin3, HIGH);
        delay(500);  // Green light ON for 0.5 seconds
        digitalWrite(yellowPin3, LOW);
        delay(500);  // Green light OFF for 0.5 seconds
      }

      // Red light
      digitalWrite(redPin3, HIGH);
      digitalWrite(greenPin3, LOW);
      digitalWrite(yellowPin3, LOW);
      delay(1000); // Wait for 2 seconds

  }

  if (num_cars == 3){
    traffic_delay = 6000;
      digitalWrite(redPin3, LOW);
      digitalWrite(yellowPin3, LOW);
      digitalWrite(greenPin3, HIGH);
      delay(traffic_delay); // Wait for 2 seconds
      for (int i = 0; i < 3; i++) {  // Blink 3 times
        digitalWrite(greenPin3, HIGH);
        delay(500);  // Green light ON for 0.5 seconds
        digitalWrite(greenPin3, LOW);
        delay(500);  // Green light OFF for 0.5 seconds
      }

      // Red and Yellow lights (transition)
      
      for (int i = 0; i < 4; i++) {  // Blink 3 times
        digitalWrite(yellowPin3, HIGH);
        delay(500);  // Green light ON for 0.5 seconds
        digitalWrite(yellowPin3, LOW);
        delay(500);  // Green light OFF for 0.5 seconds
      }

      // Red light
      digitalWrite(redPin3, HIGH);
      digitalWrite(greenPin3, LOW);
      digitalWrite(yellowPin3, LOW);
      delay(2000); // Wait for 2 seconds

  }

  if (num_cars >= 4){
    traffic_delay = 12000;
      digitalWrite(redPin3, LOW);
      digitalWrite(yellowPin3, LOW);
      digitalWrite(greenPin3, HIGH);
      delay(traffic_delay); // Wait for 2 seconds
      for (int i = 0; i < 3; i++) {  // Blink 3 times
        digitalWrite(greenPin3, HIGH);
        delay(500);  // Green light ON for 0.5 seconds
        digitalWrite(greenPin3, LOW);
        delay(500);  // Green light OFF for 0.5 seconds
      }

      // Red and Yellow lights (transition)
      
      for (int i = 0; i < 4; i++) {  // Blink 3 times
        digitalWrite(yellowPin3, HIGH);
        delay(500);  // Green light ON for 0.5 seconds
        digitalWrite(yellowPin3, LOW);
        delay(500);  // Green light OFF for 0.5 seconds
      }

      // Red light
      digitalWrite(redPin3, HIGH);
      digitalWrite(greenPin3, LOW);
      digitalWrite(yellowPin3, LOW);
      delay(2000); // Wait for 2 seconds

  }
}

//#########################################################################

void traffic_light4(int num_cars){
  if (num_cars > 0 && num_cars <=2){
    traffic_delay = 3000;
      digitalWrite(redPin4, LOW);
      digitalWrite(yellowPin4, LOW);
      digitalWrite(greenPin4, HIGH);
      delay(traffic_delay); // Wait for 2 seconds
      for (int i = 0; i < 3; i++) {  // Blink 3 times
        digitalWrite(greenPin4, HIGH);
        delay(500);  // Green light ON for 0.5 seconds
        digitalWrite(greenPin4, LOW);
        delay(500);  // Green light OFF for 0.5 seconds
      }

      // Red and Yellow lights (transition)
      
      for (int i = 0; i < 4; i++) {  // Blink 3 times
        digitalWrite(yellowPin4, HIGH);
        delay(500);  // Green light ON for 0.5 seconds
        digitalWrite(yellowPin4, LOW);
        delay(500);  // Green light OFF for 0.5 seconds
      }

      // Red light
      digitalWrite(redPin4, HIGH);
      digitalWrite(greenPin4, LOW);
      digitalWrite(yellowPin4, LOW);
      delay(1000); // Wait for 2 seconds

  }

  if (num_cars == 3){
    traffic_delay = 6000;
      digitalWrite(redPin4, LOW);
      digitalWrite(yellowPin4, LOW);
      digitalWrite(greenPin4, HIGH);
      delay(traffic_delay); // Wait for 2 seconds
      for (int i = 0; i < 3; i++) {  // Blink 3 times
        digitalWrite(greenPin4, HIGH);
        delay(500);  // Green light ON for 0.5 seconds
        digitalWrite(greenPin4, LOW);
        delay(500);  // Green light OFF for 0.5 seconds
      }

      // Red and Yellow lights (transition)
      
      for (int i = 0; i < 4; i++) {  // Blink 3 times
        digitalWrite(yellowPin4, HIGH);
        delay(500);  // Green light ON for 0.5 seconds
        digitalWrite(yellowPin4, LOW);
        delay(500);  // Green light OFF for 0.5 seconds
      }

      // Red light
      digitalWrite(redPin4, HIGH);
      digitalWrite(greenPin4, LOW);
      digitalWrite(yellowPin4, LOW);
      delay(2000); // Wait for 2 seconds

  }

  if (num_cars >= 4){
    traffic_delay = 12000;
      digitalWrite(redPin4, LOW);
      digitalWrite(yellowPin4, LOW);
      digitalWrite(greenPin4, HIGH);
      delay(traffic_delay); // Wait for 2 seconds
      for (int i = 0; i < 3; i++) {  // Blink 3 times
        digitalWrite(greenPin4, HIGH);
        delay(500);  // Green light ON for 0.5 seconds
        digitalWrite(greenPin4, LOW);
        delay(500);  // Green light OFF for 0.5 seconds
      }

      // Red and Yellow lights (transition)
      
      for (int i = 0; i < 4; i++) {  // Blink 3 times
        digitalWrite(yellowPin4, HIGH);
        delay(500);  // Green light ON for 0.5 seconds
        digitalWrite(yellowPin4, LOW);
        delay(500);  // Green light OFF for 0.5 seconds
      }

      // Red light
      digitalWrite(redPin4, HIGH);
      digitalWrite(greenPin4, LOW);
      digitalWrite(yellowPin4, LOW);
      delay(2000); // Wait for 2 seconds

  }
}

//#########################################################################

void red_traffic(int num_cars[]){
  while (num_cars[0] == 0 && num_cars[1] == 0 && num_cars[2] == 0 && num_cars[3] == 0){
    digitalWrite(redPin4, HIGH);
    digitalWrite(greenPin4, LOW);
    digitalWrite(yellowPin4, LOW);

    digitalWrite(redPin3, HIGH);
      digitalWrite(greenPin3, LOW);
      digitalWrite(yellowPin3, LOW);

    digitalWrite(redPin2, HIGH);
      digitalWrite(greenPin2, LOW);
      digitalWrite(yellowPin2, LOW);

    digitalWrite(redPin1, HIGH);
      digitalWrite(greenPin1, LOW);
      digitalWrite(yellowPin1, LOW);
  }
}


//#########################################################################
void red_traffic1(){
 
    digitalWrite(redPin4, HIGH);
    digitalWrite(greenPin4, LOW);
    digitalWrite(yellowPin4, LOW);

    digitalWrite(redPin3, HIGH);
      digitalWrite(greenPin3, LOW);
      digitalWrite(yellowPin3, LOW);

    digitalWrite(redPin2, HIGH);
      digitalWrite(greenPin2, LOW);
      digitalWrite(yellowPin2, LOW);

    digitalWrite(redPin1, HIGH);
      digitalWrite(greenPin1, LOW);
      digitalWrite(yellowPin1, LOW);
    
}
//#########################################################################
void setup() {
  // Set the LED pins as OUTPUT
  Serial.begin(9600);
  pinMode(redPin1, OUTPUT);
  pinMode(yellowPin1, OUTPUT);
  pinMode(greenPin1, OUTPUT);
}

//#########################################################################

void loop() {
  

 
  
  if (Serial.available()>0){
  
    red_traffic1();
    
    String msg = Serial.readString();
    int msgArray[msg.length()];

    for (int i = 0; i < msg.length(); i++) {
      msgArray[i] = msg.charAt(i) - '0';
    }
    
    



    
    if (msgArray[0] == 0 && msgArray[1] == 0 && msgArray[2] == 0 && msgArray[3] == 0){
      red_traffic(msgArray);
    }
  

    if(msgArray[0] != 0){
      traffic_light1(msgArray[0]);
      red_traffic1();

    }

 

    if(msgArray[1] != 0){
      traffic_light2(msgArray[1]);
      red_traffic1();

    }
   
    if(msgArray[2] != 0){
      traffic_light3(msgArray[2]);
      red_traffic1();

    }
   
    if(msgArray[3] != 0){
      traffic_light4(msgArray[3]);
      red_traffic1();

    }
   
  

    
    
    
  }
 
}
