# R3-SoftwareTask1-RolandOgunleye
R3 Training Task 1
2021-09-30


The potentiometer is first connected to the A0 pin where its value originally ranges from 0-1023 and then is mapped out to only range from values 0-99. The variable Sensorvalue reads the analog pin of A0 and stores it. Based on the output of the potentiometer the value will be converted into bits that represent the decimal value. For example, if the value is 99 then the 8 pins that are connected to two seven segment decoders will have an input of 1001 each.

I created two variables to keep track of the first digit and the second digit separately. I then used if statements to check the digits of the output of the potentiometer and then changed the pins from high to low to match the binary value needed to display the correct value. Based on the inputs given to the decoder it will switch gates that will turn on certain segments of the display. The only problem that I noticed with the design was that at certain points the display would be off by two digits from the value output by the potentiometer. 
