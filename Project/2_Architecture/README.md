BLOCK DIAGRAM:


![image](https://user-images.githubusercontent.com/85006836/157017326-932a34f8-b013-41f6-a15a-434315dfe0cb.png)











The general explanation of the circuit operation is as follows:

After the sketch is sent to the arduino board and the board is powered, the system will kick into action;the ultrasonic sensor will send out ultrasound and receives it back when the signal hits the barrier whose distance from the sensor is to be measured. The time it took the signal to travel and return is computed and with the code in the arduino, the distance of the barrier will be measured. The arduino is programmed to initiate actions with various values of distances measured by the ultrasonic sensor. In the design as can be shown in the coding, let’s assume the tank is 20cm high, there is no water in the tank and the system is ON, because the distance measured by the sensor at this moment is >= 15cm, pin 5 goes high and biases a transistor which drives the relay to switch ON the pump. When water has been pumped into the tank up to the point that thesensor measures a distance of 14cm, the yellow LED comes ON, again as water keeps filling up the tank and gets to the point the sensor measures 8cm, the red LED comes ON, finally when water gets close to the brim of the tank where the sensor measures a distance <=3cm, the blue LED comes ON indicating that the tank is full, and at this point, pin 5 of the arduino goes LOW, thereby cutting supply to the transistor and relay, this in turn switches OFF the pump. When water starts receding in the tank, the same process is executed but this time in reverse. The blue LED goes OFF followed by the red and the yellow, at the point the yellow LED goes OFF the purple LED comes ON again and the circle keeps repeating. With this system water will not lack the tank as long as there is power.


FLOW CHART:

![image](https://user-images.githubusercontent.com/85006836/157010062-7f05510f-13ee-4bf7-8b06-209ae9755699.png)
