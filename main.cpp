// Richardson Gage Milton
// Unit 5 assignment
// Dr.t Programming 2
// started 2019-11-12

#include "Input_Validation_Extended.h"
#include "include.h"


class CollegeCourse
{
  private: 
double costPerCreditHour; 
double bookCostPerClass; 
double roomBoardCostPerMonth;
double foodCostPerMonth;
double TravelCostPerMonth;

public: 
void showCollegeCourse()
{
  cout <<  costPerCreditHour << bookCostPerClass  << roomBoardCostPerMonth << foodCostPerMonth  << TravelCostPerMonth << endl; 
}


CollegeCourse(double cpch, double bcpc, double rbcpm, double fcpm, double tcpm): costPerCreditHour(cpch), bookCostPerClass(bcpc), roomBoardCostPerMonth(rbcpm), foodCostPerMonth(fcpm),TravelCostPerMonth(tcpm){ }

void setcostPerCreditHour(double cpch) {costPerCreditHour = cpch;}
	double getcostPerCreditHour() const {return costPerCreditHour;}

void setbookCostPerClass(double bcpc) {bookCostPerClass = bcpc;}
	double getbookCostPerClass() const {return bookCostPerClass;}







}; 




int main() 
{
  CollegeCourse cc( 1, 2, 3, 4,5);
  cc.showCollegeCourse();
 
  cout << "It works" << endl; 


  double input;
  cout << "Please set a new cost per credit hour " << endl; 
  cin >> input;
   cc.setcostPerCreditHour(input);
  cout << cc.getcostPerCreditHour() << endl; 
  cout << "Your new Cost per credit hour " << endl; 
  cc.showCollegeCourse();
}