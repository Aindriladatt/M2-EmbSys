# BLOCK DIAGRAM:

![image](https://user-images.githubusercontent.com/85006836/157017543-e0af73e6-208a-4bd9-aab8-c476fd9d5a87.png)












# COMPONENTS DESCRIPTION:

Ultrasonic Sensor: The sensor has two transducer bands, the trigger band and echo band, the trigger band sends out ultrasonic signals from the sensor, if this signal that was sent out bounces on any obstacle within the distances of 2 and 400 cm and reflects back to the sensor, the echo band will receive the reflected signal. The time it took the signal to travel and return back will be recorded by the sophisticated circuitry in the sensor, with this time which ranges from 150µS to 25000µS, we can compute the distance of the sensor from the obstacle using the conventional formula for calculating distance in physics multiplied by a factor of 2.

LEDs: Indication of water levels:Yellow: Maximum distance from the ultrasonic sensor, red: midway from the ultransonic sensor, blue:Near the sensor

Relay: a relay is energised to turn a switch ON or OFF.

Wave generator/ A.c. pump: For filling the water.It stops as soon as the purple LED switches on.






# WORKING PRINCIPLE:

After the sketch is sent to the arduino board and the board is powered, the system will kick into action;the ultrasonic sensor will send out ultrasound and receives it back when the signal hits the barrier whose distance from the sensor is to be measured. The time it took the signal to travel and return is computed and with the code in the arduino, the distance of the barrier will be measured. The arduino is programmed to initiate actions with various values of distances measured by the ultrasonic sensor. In the design as can be shown in the coding, let’s assume the tank is 20cm high, there is no water in the tank and the system is ON, because the distance measured by the sensor at this moment is >= 15cm, pin 5 goes high and biases a transistor which drives the relay to switch ON the pump. When water has been pumped into the tank up to the point that thesensor measures a distance of 14cm, the yellow LED comes ON, again as water keeps filling up the tank and gets to the point the sensor measures 8cm, the red LED comes ON, finally when water gets close to the brim of the tank where the sensor measures a distance <=3cm, the blue LED comes ON indicating that the tank is full, and at this point, pin 5 of the arduino goes LOW, thereby cutting supply to the transistor and relay, this in turn switches OFF the pump. When water starts receding in the tank, the same process is executed but this time in reverse. The blue LED goes OFF followed by the red and the yellow, at the point the yellow LED goes OFF the purple LED comes ON again and the circle keeps repeating. With this system water will not lack the tank as long as there is power.


# FLOW CHART:

![image](https://user-images.githubusercontent.com/85006836/157017447-fd8e5612-fd34-40b0-bc8d-364e44eff4b5.png)

