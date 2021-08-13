// ***DISCLAIMER, my camera program never actually worked*** //

//attempted to use serial communication with an OPENMV M7 program initially which we eventually abandoned due to a lack of time.

void readcam()  {
  while(Serial2.available()>0)  Serial.println(Serial2.read());
  goalX = Serial2.read();
}

void processcam() {
  if (goalX < 75) { //FOV of camera is 150 deg
    goalangle = goalX*5/6+270;
  }
  else  {
    goalangle = goalX-75*5/6;
    //Serial.println(goalangle);
  }
  radgoal = (90+goalangle)*3.141592654/180;
  /*Serial.print(" ");
  Serial.print(radgoal);
  Serial.println();*/
}
