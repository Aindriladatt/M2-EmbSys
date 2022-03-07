# Table of Content:

Introduction

Requirements

High Level Requirements 

Low level Requirements

SWOT ANALYSIS

Strength

Weakness

Opportunities

Threats

5Ws & 1H

WHAT

WHEN

WHERE

WHO

WHY

HOW
 
Block Diagram

Components Description

Working Principle

Flow Chart

Outcome

Application


# INTRODUCTION:
A water level indicator is basically a system that relays information back to a control panel to indicate whether a body of water has a high or low water level. Some water level indicators use a combination of probe sensors or float switches to sense water levels.The Water Level Indicator employs a simple mechanism to detect and indicate the water level in an overhead tank or any other water container.The purpose of a water level indicator is to gauge and manage water levels in a water tank. The control panel can also be programmed to automatically turn on a water pump once levels get too low and refill the water back to the adequate level. Nowadays, all the householders/owners are storing the water in overhead tanks by using the pumps. When the water is stored in the tank, no one can identify the level of water and also, no one can know when the water tank will fill. Hence there is an overflow of water in the tank, thus there is a wastage of energy and water.To overcome this problem we can use water level indicator.

# REQUIREMENTS

HIGH LEVEL REQUIREMENTS:
-->An ultrasonic distance sensor is used here to calculate the distance of the barrier from the ultrasonic sensor.

-->System should be able to detect the water level.

LOW LEVEL REQUIREMENTS:
-->We can utilize this technology to measure the level of liquids in a tank. All we need to do is program the arduino in such a way that when the liquid is at certain distances from the sensor certain things happen, maybe an LED comes ON goes OFF, or a relay is energised to turn a switch ON or OFF.

# SWOT Analysis:
Strengths:

-->Easy to install

-->Very little maintenance

-->Compact design

-->Saves money by using less water and electricity

-->Can help avoid seepage of walls and roofs due to tanks overflowing

-->Consumes very little energy, perfect for continuous operation

-->Shows indication of water levels in any type of tank

Weaknesses:

-->Water level controls need to be replaced every 3 years.

-->No Warranty or Guarantee

Opportunities:

-->It is a very useful application of embedded system used in various home and industry appliances.

Weakness:

-->Keep the circuit clean always for long-lasting performances & efficiency.

# 5Ws & 1H:
WHAT: Measures the water level when the circuits indicate when the tank its half and full.

WHEN:When using water based home appliances.

WHERE:The water level indicator circuits are used in factories, chemical plants, and electricalsubstations and in other liquid storage systems. There are many possible uses for this simple system.

WHO:The water level indicator is used in Hotels, Home apartments, commercial complex, and in factories.

WHY:Saves water,energy & valuable time.

HOW: When water level increases and touches the sensor, the LED will glow indicating that there is water within the tank

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

# OUTCOME:

If the circuit is constructed as shown above, if initially the water in the tank is below minimum threshold, and the system is turned ON, the pump will start pumping water into the tank, and no LED will come ON, but immediately water reaches the minimum threshold, the yellow LED will come ON, indicating that the tank is one third full. As water keeps pumping, when the tank is two third full the red LED will come ON, and when the tank is full, the blue LED will come ON while the pump switches OFF automatically. If water starts receding from the tank, the LEDs will start going OFF gradually to indicate the level of water in the tank as it recedes & purple LED turns ON. Finally when water has got to the minimum threshold, the pump will come ON again.

# APPLICATIONS:

The uses of a water level indicator include the following applications:

Can be used in water tanks to control water levels

Automatically turn ON/OFF pumps

Can be used in factories, commercial complexes, apartments, home.

Fuel tank level gauging

Oil tank level control

Pool water level control

Leachate level control

Sewage pump level control

Remote monitoring liquid

Water level control

Pump controller



