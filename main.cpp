 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   don't forget to remove the blank lines left behind after you remove your comments
   - you should be left with only your UDTs.
*/
// example:
// if you had something like this at the end of Part1e:
/*
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
namespace Part1eVersion 
{
struct CarWash        
{
    //number of vacuum cleaners                     
    int numVacuumCleaners = 3; 
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(float costPerGallon, double fuelAmountInGallons = 2.0, bool requiresDiesel = false);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); 
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}

//this is what I want to see after the code is cleaned up: 
namespace Part2Version
{
struct CarWash        
{
    int numVacuumCleaners = 3; 
    int numEcoFriendlyCleaningSupplies = 20;     
    float waterUsedPerWeek = 200.f;            
    float profitPerWeek = 495.95f;               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    void washAndWaxCar( Car car ); 
    float chargeCustomer(float discountPercentage);
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}
  /*
    The above snippet is just an example showing you how to clean up your code.  
    Do not put your cleaned up code into a namespace like I have done here.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you have warnings about 'unused parameter', you aren't using one of your function parameters in your implementation.
    use the parameter in your implementation.
    If you have warnings about 'overshadow', a local variable in the function has the same name as a class member.
    change the name of your local variable so it is different from the class member's name.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
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
struct FoleyStudio
{
    FoleyStudio();
    unsigned int numberOfPits;
    unsigned int numberOfShoes;
    unsigned int numberOfCloths;
    unsigned int sfxPerDay;
    unsigned int sfxEditPerDay;

    struct Sneaker
    {
        Sneaker();
        std::string style = "Classic, Sporty, Minimalist";
        std::string brand = "Adidas";
        std::string model = "Superstar";
        double shoeSize = 42.5;
        std::string material = "Leather, Rubber Sole";

        void getWearSneaker(int legs = 2, std::string gender = "Female");
        void setupMic(float micVolume = 32.f, std::string micSettings = "Low-cut");
        void performFeetSfx(double tempo = 100.20);
    };

    void recordGrassSfx(int sfxRecording);
    void prepareToMixing(int sfxQuantity, float sfxSpecs);
    void uploadSfxToCloud(int totalSfx = 2342);

    Sneaker performedSfx;
};
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
struct FieldRecorder
{
    unsigned int inputs;
    unsigned int outputs;
    float sizeOfStorage;
    double supportedFormats;
    unsigned int settings;

    struct NeumannKm184
    {
        NeumannKm184();
        bool isThisPair = true;
        int modelYear = 2018;
        float lowFreq = 20.f;
        double pricing = 829.20;
        bool isThisNew = false;

        void openBox();
        void selectCable(int numberOfCable = 2, std::string cableBrand = "Neutrik");
        void insertCable(std::string cableType = "XLR");
    };

    void selectRecordingFormat(float sampleRate = 192.f, int bitRate = 32);
    void startRecording();
    void ejectMics(NeumannKm184 mono1, NeumannKm184 mono2);

    NeumannKm184 ejected;
};

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
struct SmartPhone
{
    float typeOfCpu;
    float sizeOfStorage;
    int numbOfSim;
    float Ram;
    float screen;

    struct SimCard
    {
        SimCard();

        std::string operatorBrand = "Vodafone";
        double height = 3.37;
        double width = 2.12;
        double depth = 0.029;
        int productYear = 2015;

        void getAndBuy(double pricing = 77.1);
        void unpack();
        void insertSimSlot(int simCard);
    };

    void insertPhone(bool insertSimSlot = true, bool openPhone = true);
    void callCharles(bool openCallScreen, int phoneNumber, bool clickCallButton);
    void openMaps(std::string mapName = "Yandex Maps", bool enter = true);

    SimCard connected;
};
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
*/
struct Ranch
{
    int numberOfAnimals;
    float sizeOfRanch;
    double amountOfProfitYear;
    int numberOfDoors;
    int numberOfTools;

    struct RanchMainA
    {
        RanchMainA();

        std::string name = "Zeleia";
        double height = 223.12;
        double width = 422.64;
        std::string directorName = "Asli Yalcin";
        double todayValue = 354.644;

        void findCustomer(int totalTarget = 6);
        void clearRanch(int numberOfParts = 4, bool getCleanPart3 = true);
        void defineValue(double initialPrice = 271.640);
    };

    void sellRanch(std::string customerName = "Leyla", int age = 63);
    void openTheDoors(int numbersOfDoors = 2);
    void freeTheAnimals(int animalNumbers = 66);
};

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
struct RecRoom
{
    int instruments;
    double airConditionerBill;
    std::string roomName;
    float sizeOfRoom;
    int numbOfCable;

    struct DrumSet
    {
        DrumSet();

        std::string brand = "DW";
        std::string model = "Frequient Flyer";
        int kickSize = 20;
        int snareSize = 14;
        int floorTomSize = 14;

        void kickTheKick(int bpm);
        void closeTheHihat(int bpm);
        void kickTheSnare(int bpm);
    };

    void recordDrum(float sampleRate = 44.1f, int bitRate = 16);
    void openTheLight();
    void communicateToMixRoom(DrumSet drumBeats);

    DrumSet played;
};
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
struct MixRoom
{
    MixRoom();

    std::string roomName;
    void sizeOfRoom(float height, float width);
    float sizeOfSpeaker;
    double roomAcousticValue;
    float amountOfPowerConsumed;

    struct Speakers
    {
        Speakers();

        std::string brand = "Dynaudio";
        std::string model = "LYD5";
        double speakerWright = 5.7;
        double crossoverFreq = 5.2;
        int maxSpl = 106;

        void insertPower();
        void settingSensivity(int dbSettings1 = 6, int dbSettings2 = -6);
        void insertSoundCard(int inputNumber = 3);
    };

    void allowsCommunication(Speakers listenSpikers);
    void sendFiles(std::string fileType = ".wav", int numberOfFiles = 42);
    void connectToDsp(int numberOfDsp = 6);

    Speakers Listened;
};
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
struct WaitingRoom
{
    int numbOfManagers;
    double monthlyBill;
    std::string roomName;
    bool lockedTable;
    int coffeeMachines;

    struct Manager2
    {
        std::string managerName = "Saliha";
        int monthlyFee = 4250;
        bool isThisIntern = true;
        int old = 23;
        int dayOfWork = 5;

        void insertTheCardAtm(int bankPassword = 2323);
        void checkBankAccount(double accountLimit = 2333.20, double availableLimit = 1899.20);
        void withdrawMoney(std::string accountName = "Personal", int accountNumber = 2);
    };

    void prepareToRec(int numberOfCabinet = 3, double startTime = 22.15);
    void giveCoffee(std::string coffeType = "Arabica");
    void setTheAlarm(bool enterPin = true, bool lockTheDoor = true);

    Manager2 jobDone;
};
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
struct Manager
{
    int age;
    double height;
    std::string name;
    std::string gender;
    double startToWrok;

    struct ManagerAbility
    {
        double degrees = 3.67;
        bool recordingknowHow = true;
        std::string school = "Bahcesehir University";
        std::string schoolDepartment = "Communication";
        int dateOfGraduation = 2017;

        void wakeUp(double wakeUpTime = 07.10);
        void enterTheAlarmPin(double alarmPin = 3321);
        void payTheMagazines(int magazinePrice = 13);
    };
    void keepTrackOfExpenses(double electricityBill = 322.3, double waterBill = 63.2);
    void openTheDoors(bool mixingRoomDoor = true, bool recordingRoomDoor = false);
    void callTheCustomer(std::string customerName = "Haktan", int customerNumber = 534855775);

    ManagerAbility talentDemonstrated;
};
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
struct ServerHardware
{
    float connectionSpeed;
    int numberOfEthernetIn;
    float amountOfPowerCons;
    float dailyDataTransfer;
    std::string brand;

    struct Hardware
    {
        std::string brand = "DELL";
        std::string model = "DL360";
        int modelYear = 2014;
        double ramType = 256.33;
        std::string ssdType = "SSD";

        void connectToPower(std::string conectionType = "EU Type");
        void openTheHardware();
        void enterTheOS(std::string nickname = "vsl", int osPassword = 283742);
    };
    void sendFiles(std::string fileType = ".wav", float fileSize = 462.f);
    void connectTheWifi(std::string wifiName = "sikildim", int wifiPassword = 35359200);
    void createBackUp(ServerHardware hardware2);

    Hardware dataTransferDone;
};
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
struct RecordingStudio
{
    RecRoom recordingRoom;
    MixRoom mixingRoom;
    WaitingRoom waitingRoom;
    Manager employees;
    ServerHardware studioServerHardware;

    void releaseNewAlbum(Manager manager1, int targetReleaseAlbum = 22, std::string targetGenre = "Ambient, Drone");
    void recordStrings(RecRoom recording);
    void paySalary(Manager payAllOf, double totalSalary = 3233.20);

    //3 member functions go here...
};

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
