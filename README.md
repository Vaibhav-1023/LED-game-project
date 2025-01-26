# LED-game-project
# Introduction:
This project was made by a team of 6 first year students as the first project at the Electronics Club in IIT Indore.

# Team members:
1. Vaibhav Sharma (leader)
2. Ninad Kulkarni
3. Yash Modi
4. Viraj Patel
5. Karan Bagthariya
6. Priyanshi Mahto

# Project Description:
We were given around 2 months to learn and work with Arduino Uno to design and make a simple project using the aquired knowledge.

## Components required:
	1. 1, Arduino Uno Microcontroller
	2. 2, 74HC138 3 to 8 line Decoder
	3. 16, LEDs
	4. 1, Potentiometer
	5. 1, Push Button
	6. Connecting and Jumper wires
	7. Breadboards

## Idea:
We wanted to create a game which uses Arduino logic to make a polygonal loop of LEDs which would glow one after the another, switching off when the next one lights up. This would create a moving effect which would be used by us to make a game out of it. We would change one of the LED's color and would want to stop the moving line of LEDs at the right time such that the differently colored LED glows up. We would later add a potentiometer to control the speed of animation to increase or decrease difficulty.

## Challenge:
We could've used either fewer LEDs or another Arduino Uno board to make the size of loop we wanted. But we wanted to learn about decoders and how to use them to increase efficiency of the Arduino board. For that, we used 74HC138 3 to 8 line decoder. Due to  the IC, we were able to control 8 LEDs with only 3 digital pins of Arduino instead of 8 digital pins.

## Problems faced:
Initially, we faced a lot of problems in the interpretation of the datasheet for the decoder IC we used. We didn't know that some of the pins required Vcc or gnd depending. This caused a lot of confusion at that start and wasted a lot of time.
Later, we were having problems with connections. Because our project was wire intensive, we preferred using connecting wires instead of Jumpers for the LED connections. It was neat but sometimes these wires would disconnect and we had to find the error. This wasted quite a lot of time as well.

# Learnings:
We learnt the importance of team work and team coordination while doing this project. There were times when the team was disorganized and effort wasn't directed. Careful reading of datasheets is a must. If not read carefully, it can lead to wastage of time and sometimes resources too. 
