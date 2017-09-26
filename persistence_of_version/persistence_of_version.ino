int led_A=2; //Dedfine A pin of erection digital tube
int led_B=3; //Dedfine B pin of erection digital tube
int led_C=4; //Dedfine C pin of erection digital tube
int led_D=5; //Dedfine D pin of erection digital tube
int led_E=6; //Dedfine E pin of erection digital tube
int led_F=7; //Dedfine F pin of erection digital tube
int led_G=8; //Dedfine G pin of erection digital tube
int led_DP=9; //Dedfine H pin of erection digital tube
int lowestpin=led_A;
int highestpin=led_DP;
void setup() { // put your setup code here, to run once:
int thisPin;
for(thisPin=lowestpin;thisPin<=highestpin;thisPin++){ 
pinMode(thisPin,OUTPUT);
digitalWrite(thisPin,HIGH);}
}


void loop() { //Define an array for the led pin number
int ledNumber[]={led_A,led_B,led_C,led_D,led_E,led_F,led_G,led_DP};


// Define the cod of the nmuber from 0 to dp
int ledShow[][18]={ {1,1,1,1,1,1,0,0},// 0
{0,0,0,0,1,1,0,0},// 1
{1,1,0,1,1,0,1,0},// 2
{1,1,1,1,0,0,1,0},// 3 
{0,1,1,0,0,1,1,0},// 4
{1,0,1,1,0,1,1,0},// 5
{1,0,1,1,1,1,1,0},// 6
{1,1,1,0,0,0,0,0},// 7
{1,1,1,1,1,1,1,0},// 8
{1,1,1,1,0,1,1,0},// 9 
{1,1,1,0,1,1,1,0},// A
{0,0,1,1,1,1,1,0},// B
{1,0,0,1,1,1,0,0},// C
{0,1,1,1,1,0,1,0},// D
{1,0,0,1,1,1,1,0},// E
{1,0,0,0,1,1,1,0},// F
{0,0,0,0,0,0,0,1} // dp
};


// Initialize variable for the array's subscript
int ledShowRow=0;
int ledShowColume=0;
int ledNumberColume=0;


//Display the number from 0 to dp
for(ledShowColume;16>=ledShowColume;ledShowColume++){
for(ledShowRow;8>=ledShowRow;ledShowRow++){
if(0==ledShow[ledShowColume][ledShowRow]){
digitalWrite(ledNumber[ledNumberColume],HIGH);ledNumberColume++;}
else{
digitalWrite(ledNumber[ledNumberColume],LOW); ledNumberColume++;}
}
// Delay 2S 
delay(2000);
//Reset the flag
ledShowRow=0;
ledNumberColume=0;}
}
