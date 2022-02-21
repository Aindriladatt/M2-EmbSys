
CASE STUDY 2:

    Automatic Temperature Controller:
Purpose: Temperature controller is a system that monitors and controls the temperature of a room or any place under consideration such that if the temperature is higher than required, the system brings the temperature down. Similarly, if the temperature is lower, the system makes it high as required.

Block Diagram:

![image](https://user-images.githubusercontent.com/85006836/154883482-d4221e3f-5cb6-4712-a1b8-d062fd65eb6e.png)


1. LM35DZ temperature sensor is used. It senses the temperature of the given room and feeds it to the microcontroller which then decodes it and compares it to a predetermined values stored in it.
2.The microcontroller automatically switches on/off the heater, or a fan based on the result of the comparison
This design considered a predetermine temperature values of 26 0C as minimum and 29 0C as the maximum, such that the system switches ON the heater when the room temperature is below 26  0C switches  ON  the  fan  when  the  temperature  is  above  29  0C  and  the  measured  room  temperature  is displayed on the LCD accordingly. For temperature range, 26 0C – 29 0C, the circuit remained idle.

Components used:

Microcontroller -	PIC16F877A
Temperature sensor unit -	LM35DZ
Display unit -	16*2 LCD
Switching circuits -	Transistors & Relays


High level Requirements:

1.The power supply of +5v is used.
2.The MCU should be capable of monitoring and controlling the temperature of a thermally isolated chamber or enclosure.
3.The sensor should be able to give inherent accuracy for durability, range of operation, susceptibility to external noise, influences, ease of maintenance and installation, delicacy, etc.
4. Capable of displaying the room temperature.

Low Level Requirements:

1.The microcontroller selected is PIC16F877A [5].  It is an 8-bit, 40-     pins dual inline package 
(DIP), having five ports (A-E), 8- input channels (ADC module), and many more features. It is selected 
due to its in-built analogue-to-digital module and it’s readily availability in the market.
3.LM35DZ temperature sensor was selected for this work. Its output is linearly proportional to the Celsius (centigrade) temperature scale, as user does not require any calibration to obtain convenient centigrade scaling.  Its linear output, low output impedance, inherent precision calibration, easy interfacing and availability make it the choice for this work.
4. A Liquid crystal display (LCD) (16 x 2) type capable of displaying 32  characters  in alphanumeric form is employed in this work to display the measured room temperature. It is configured as 4-bit interface enabled to transmit or receive data in 4 bits.  It is chosen due to its low power consumption and ability to display a high precision result
5. The switching circuits consist of transistors and Relays that serves as an interface between the low voltage microcontroller and the high voltage loads i.e. the heater and fan.

References:
https://www.researchgate.net/publication/346234419_Microcontroller_Based_Automatic_Temperature_Controller
https://www.researchgate.net/publication/321105840_Construction_of_an_Automatic_Temperature_Controller_for_Monitoring_and_Cooling_Systems







       
		
					
					
					
				
