# Christmas Crib LEDs
This little project was a gift for my parents for Christmas 2017. During the
complete restoration of the fences, fount, wooden logs and other stuff which was
broken or missing over the years on the crib, I also replaced the ambient
lights. Previously they were realized through small 12V light bulbs which were
driven from an ancient two-ton-weight transformer. 

The new lightning system is powered by a small PCB with an *avr attiny2313*
microcontroller on it and an transistor array to drive the LEDs. 

So the Crib has some elements which are lighten by different LEDs:
- The *fountain* has a *blue led* which is slowly fading to simulate water
  waving.
- The *cabin* has two *orange leds*, one on the front of the building, the other
  one in the building itself. Both leds are just on or off.  
- The *fireplace* has a *red led* which is flickering randomly pretty fast. This
  generates the effect that there is a real burning fire.  


![picture of the crib](files/IMG_20171223_153801.jpg)


# Required Parts 
These are the most important parts, all other things are normally lying around at home :)  

- ISP-Programmer (e.g. AVR-Dragon)
- ATTINY 2313 (Microcontroller)
- ULN2803 (Transistor-Array)
- Some LEDs, Resistors, Capacitors...

# Schematic
![schematic](/files/schematic_christmas_crib.png)

A PDF version of the schematic is located under
`files/schematic_christmas_crib.pdf`. For the *fireplace* is a RGB-LED shown,
but actually is just a single *red led* used. The effect of a burning fire with
just a red flickering LED was way better than first expected, so I decided to
keep things simple and do it without the RGB LED. 


