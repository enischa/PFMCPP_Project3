/*
Project 3 - Part 1a-d / 5
Video:  Chapter 2 Part 5
User-Defined Types

Create a branch named Part1

Purpose: The entire purpose of this 5-part project is to get you 
writing C++ code that compiles and to reinforce the syntax habits 
that C++ requires.  
What you create in this project will be used as the basis of 
Project 5 in C++ Language Fundamentals.

************************
Part1 purpose:  Learn to write User-Defined Types (UDTs)

You are going to write 10 UDTs in project3.  
Part1 will be broken up into 5 separate steps, all on the same branch.
    Part 1a: you will learn to think about an object in terms of 
    its sub-objects.
    
    Part 1b: you will write 4 un-related UDTs in plain english.
    
    Part 1c: you will write 1 UDT in plain english that will be 
    made of 5 related sub-objects.
    
    Part 1d: you will write plain-english UDTs for the 5 
    sub-objects that form the UDT defined in Part 1c.
    
    Part 1e: you will convert those 10 plain-english UDTs into code 
    that runs.
************************
*/

/*
Part 1a
1) Look at the picture of the car interior (Part1a pic.jpg).  
    It's in the list of files on the left in Replit.
    Fill in the blanks below which break this car interior down 
    into sub-objects.

Several sub-objects are listed below that make up this car's interior.
    you're going to name several things that you'll find on each 
    subobject.
    you're going to name several things that each subobject can do.
    If you've seen "Family Feud", we are going to do what they do 
    in that show.

    A few blanks are filled in for you already.

Main Object: Car Interior
Sub Object 1: Steering Wheel
    Name 4 things you'll find on the:    Steering Wheel
        1) paddle shifters
        2) 'cruise control' controls
        3) horn
        4) wiper arms
    Name 2 things you can do with the:   Steering Wheel
        1) adjust cruise control settings.
        2) speed up wiper
        
Sub Object 2: Instrument Cluster
    Name 4 things you'll find on the:   Instrument Cluster
        1) speedometer
        2) temperature gauge
        3) fuel gauge
        4) odometer
    Name 3 things you can do with the:   Instrument Cluster
        1) reset km
        2) close light warning
        3) open cluster submenu
    
Sub Object 3: Environment Controls
    Name 3 things you'll find on the:    Environment Controls
        1) air conditioner
        2) mirror heater
        3) pressure sensor
    Name 3 things you can do with the:   Environment Controls
        1) set cool down
        2) open back mirror heater
        3) close pressure sensor

Sub Object 4: Infotainment System
    Name 3 things you'll find on the:    Infotainment System
        1) music player
        2) bluetooth
        3) gps
    Name 3 things you can do with the:   Infotainment System
        1) eject cd
        2) pair device
        3) set destination

Sub Object 5: Seat 
    Name 3 things you'll find on the:    Seat
        1) safety belt
        2) height adjustment
        3) seat-back angle adjustment
    Name 2 things you can do with the:   Seat
        1) push down the lever
        2) lock safety belt 
*/

/*
Part 1b
Now you have some basic understanding of how to think of an object 
in terms of its sub-objects.

Next, write 4 un-related UDTs in plain english:
*/
/*
 example:  
 
Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - the amount of water used per week.
        - amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior

    Notice that I did not use "has a vacuum cleaner" or "Has 
    eco-friendly cleaning supplies" as one of the properties.
    
    Writing 'has a ___" checks whether or not your object **has the 
    ability to do something**.
    Instead, I wrote "number of vacuum cleaners" and "number of 
    eco-friendly cleaning supplies".  
    
    These are specific objects or amounts. 
    
    In C++ terms, this means to I want you to avoid using 'bool' 
    (has a) as a member variable type.
    Instead, prefer the other primitive types.

    In addition to the usual primitives (covered in Project 2), you 
    can use 'std::string' to represent strings in this project.
 */

/*
===================
Part 1b Assignment:
===================
1)  Fill in the 4 UDTs below with a random UDT in plain english.
    These 4 UDTs do not need to be related.
        a) For each plain-english UDT, write out 5 traits or 
        properties and 3 things it can do.
        b) remember: these properties will eventually become
        primitives.
        c) pick properties that can eventually be represented with 
        'int float double bool char std::string'.
*/

/*

 */

 /*
Part 1c
You have just finished practicing writing out a UDT that is has 
5 properties and can perform 3 actions.  

Now you will write 1 UDT in plain english. 

This UDT will be different than the previous 4 you wrote: It will 
use UDTs to describe its 5 properties, as opposed to using C++ 
primitives to describe the 5 properties.

You will define these 5 'property' UDTs in Part 1d.
 */

 /*
Part 1c example:
    Cell Phone

    A Cell Phone is built using the following 5 UDTs:
        Display
        Memory
        CPU
        Radio
        Applications

    A Cell Phone has 3 things it can do:
        make a call
        send a text
        run an application.

    Notice that I did not use "has a display" or "Has memory" or 
    "has a cpu" as one of the properties of the CellPhone.
    
    Writing 'has a ___" checks whether or not your object **has 
    the ability to do something**.
    Instead, I wrote "Display" or "CPU".  These are specific 
    objects or amounts. 
    
    In C++ terms, this means to I want you to avoid using 'bool' 
    (has a) as a member variable type.
    Instead, prefer the other primitive types.

    When you choose your 5 smaller parts, remember that each of 
    these 5 Sub Objects will need to be defined with 5 primitive 
    properties and 3 actions EACH.
*/
/*
===================
Part 1c assignment:
===================

1) Fill in the 10th UDT below.
Define an object that is made of 5 sub-objects.
    These 5 sub-objects will not be defined using Primitives, but instead will be their own UDTs 
    you'll define these 5 sub-objects in Part 1d.

2) write the name of the primitive type you'll be using after each 
    property in UDTs 1-4:
    pick properties that can be represented with 
    'int float double bool char std::string'.
    example: 
        Display:
            Number of Pixels (int)
            Amount of Power consumed (milliwatt-hours) (float)
            Brightness (double)
            area in cm2 (int)
            brand (std::string)
*/



/*
Part 1d
You now know how to define a UDT that is composed of other UDT.
Now you will learn how to break down those sub-object UDTs into 
their 5 properties and 3 actions.

The goal of Part 1d is to get you to think about breaking down an 
object into smaller and smaller objects, until the smallest object 
is made of up only C++ primitives and std::string. 

Revisiting the previous example:  
Cell Phone

A Cell Phone is made up of the following 5 properties/sub-objects 
and 3 actions:
    Display
    Memory
    CPU
    Radio
    Applications
3 actions:
    make a call
    send a text
    run an application.

These 5 properties can be broken down into their own sub-objects 
and properties. 

If we break down the first property 'Display' into its 5 properties 
we get:
    brightness
    amount of power consumed.
    pixels
    width in cm
    height in cm

the Display's brightness can be represented with a Primitive, 
such as a double. 

The amount of power consumed can also be represented with a 
Primitive, such as a float or integer (i.e. 250mWa)

The 'pixels' property must be represented with an array of Pixel 
instances, as the screen has more than 1 row of pixels.
    Arrays have not been discussed and can't be used in this 
    project.
    Instead, we can use an Integer primitive to store the 
    Number of Pixels:

Display:
    Number of Pixels
    Amount of Power consumed (milliwatt-hours)
    Brightness
    width in cm
    height in cm

As you can see, the 'Display' UDT has been broken down to the 
point of being able to describe it with C++ primitives. 
*/

/*
===================
Part 1d assignment:
===================

1) Fill in #5 - #9 below with plain-english UDTs for the 5 
properties you created for UDT #10. 
    example: 
        If #10's first property was 'Engine', then `Thing 5)` 
        will be `Engine`. 
        You will need to provide 5 properties and 3 member 
        functions of that Engine object in plain English.
        Remember to pick properties that can be represented 
        with 'int float double bool char std::string'.

2) write the name of the primitive type you'll be using after 
each property for UDTs 5 - 9.
    You already did this for UDTs 1-4 in Part 1c.
    Pick properties that can be represented with 
    'int float double bool char std::string'
    example: 
        Display:
            Number of Pixels (int)
            Amount of Power consumed (milliwatt-hours) (float)
            Brightness (double)
            width in cm (int)
            height in cm (int)
*/

/*

Thing 1) Foley Studio
5 properties:
    1) number of foley pits (int)
    2) number of shoes (int)
    3) number of cloths (int)
    4) sound effects recording per day (int)
    5) edit sfx per day (int)
3 things it can do:
    1) record grass sfx
    2) edit sfx and prepare to mix
    3) upload sfx to cloud
 */

/*
Thing 2) Field Recorder
5 properties:
    1) number of inputs (int)
    2) number of outputs (int)
    3) size of Storage (float)
    4) supported formats (float)
    5) additional settings (int)
3 things it can do:
    1) instert KM184s to input 1-2
    2) set 192 khz/32 bit-float
    3)insert headphone
 */

/*
Thing 3) Smartphone
5 properties:
    1) type of CPU (float)
    2) size of Storage (float)
    3) number of Simcard (int)
    4) size of RAM (float)
    5) size of Screen (float)
3 things it can do:
    1) insert Sim-2
    2) call Charles
    3) open maps
 */

/*
Thing 4) Ranch
5 properties:
    1) number of animals (int)
    2) size of ranch (float)
    3) amount of profit per year (double)
    4) number of doors (int)
    5) number of tools (int)
3 things it can do:
    1) sell ranch
    2) open the doors
    3) free the animals
/*

/*
Thing 5) Recording Room
5 properties:
    1) number of instruments (int)
    2) monthly air conditioner bill (double) 
    3) room name (std::string)
    4) size of room (float)
    5) number of cables (int)
3 things it can do:
    1) records some sounds
    2) provides energy consumption
    3) allows communication with the mix room
 */

/*
Thing 6) Mixing Room
5 properties:
    1) room name (std::string)
    2) size of room (float)
    3) size of speakers (float)
    4) room acoustic values (double)
    5) ammount of power consumed (float)
3 things it can do:
    1) allows communication with the recording room
    2) send files to server
    3) connect to DSP racks
 */

/*
Thing 7) Waiting Room
5 properties:
    1) number of managers (int)
    2) monthly bill (double)
    3) room name (std::string)
    4) locked table (bool)
    5) coffee machines (int)
3 things it can do:
    1) prepare to recording
    2) give coffee to customers
    3) set the alarm
 */

/*
Thing 8) Manager
5 properties:
    1) age (int)
    2) height (double)
    3) name (char)
    4) gender (char)
    5) start to work (double)
3 things it can do:
    1) keeps track of expenses
    2) manages the studio
    3) gets a job
 */

/*
Thing 9) Studio Server Hardware
5 properties:
    1) connection speed (float)
    2) number of ethernet input (int)
    3) ammount of power consumed (float)
    4) daily data transfer (float)
    5) brand (std::string)
3 things it can do:
    1) send files
    2) connect to internet
    3) create backup
 */

/*
Thing 10) Recording Studio
5 properties: 
    1) Recording Room (void)
    2) Mixing Room (void)
    3) Waiting Room (void)
    4) Employees (int)
    5) Studio Server Hardware (void)
3 things it can do:
    1) release album
    2) record strings
    3) monthly employee salary
 */

/*
You've just defined 10 UDTs!
4 of them are unrelated (UDTs 1-4).
5 of them form the sub-objects that make up the 10th UDT. 

MOVE them below this block comment and put them in numerical order 
(1 - 10).
    Do not copy. 
    I do not want to see 2 copies of your Plain-English UDTs.  I only want to see the 1 copy below this block comment, in numerical order (1 - 10).

The next thing that will happen is that I will review the 
pseudo-code that you have written.
Send me a DM to review your pull request when the project is ready for review.
*/

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
