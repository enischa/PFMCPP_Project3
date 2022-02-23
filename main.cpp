/*
Project 3 - Part 1e / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
Part1 will be broken up into 5 separate steps
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct below your plain-english UDT. i.e.:

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#if false //ignore these #if #endif lines. they're just here to prevent compiler errors.
struct CarWash
{

};
#endif
/*
    - Do this for all 10 UDTs

2) Below your plain-english UDT, Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    - Do this for all 10 UDTs
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
    - Do this for all 10 UDTs
    - if your functions return something other than 'void', add a comment explaining what is being returned.  see the example code below.
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
    - Do this for all 10 UDTs
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
    if your code produces a [-Wpadded] warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 */

/*
 example:  

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips); //3) returns the number of miles traveled
    };

    //wash and wax car
    void washAndWaxCar(Car carA); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage); //3) returns the total amount charged.
    //detail the car interior
    void detailInterior(Car carB);
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  

    /*
    Pay attention to the member functions that take an instance of 'Car'
    Notice that there is a member variable of the same type.

    It makes sense to pass a Car to the function 'washAndWaxCar' because car washes service MANY cars
    However, they only service ONE car at a time.
    the carBeingServiced's value would change every time you wash and wax the car. 

    I see many students who write code emulating this format, but their usage does not make logical sense.  
    Consider the following snippet:

    struct SoccerTeam
    {
        struct Manager
        {
            ...
        };

        // train their skills
        void trainPlayerSkills(Manager managerA);
    
        Manager teamManager;
    };

    It does not make sense to pass in a new Manager whenever you are going to train your team players.
    Soccer teams have ONE manager.

    a much more relevant usage would be adding a member function that hires a new manager:

    struct SoccerTeam
    {
        struct Manager
        {
            ...
        };

        void hireNewManager(Manager newManager);
    
        Manager teamManager;
    };

    We can safely assume that the 'Manager' instance that is being passed in will be replacing the current 'teamManager' variable without looking at any other code.
    This is because the function name and function argument clearly indicate what they are/what they do.

    Your function names and parameter names should make LOGICAL SENSE.
    Readers of your code should be able to INTUITIVELY understand what your function implementations will do without actually seeing the implementations.

    Keep this in mind when you define your UDTs in this project part.
    */
};


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
