#include<iostream>
using namespace std;

int main(){
    //CNIC Problem
     int family_number= 0, firstDigit= 0, secondDigit= 0, thirdDigit= 0, fourthDigit= 0, fifthdigit= 0; 
     long int cnicNumber;
     char gender;  

     string name_of_student= " ", province, division, district, tehsil, union_council;
     cout<<" Name of student is ";
     cin>>name_of_student; 
     cout<<endl; 
     cout<<" 13 digit CNIC number of "<<name_of_student<<" is "<<endl;
     cin>>cnicNumber;
     
     if(cnicNumber%2==0){  // checking the last digit for gender.
          gender= 'F';    // even last digits are for F gender.
          cout<<" Gender of "<<name_of_student<<" is "<<gender; 
     }
     else if(cnicNumber%2!=0){
          gender= 'M';  //odd last digits are for M gender.
          cout<<" Gender of "<<name_of_student<<" "<<"is "<<gender<<endl;
     }
     firstDigit= cnicNumber/1000000000000; //corresponds to province
      
     secondDigit= cnicNumber/100000000000; //corresponds to division
     secondDigit= secondDigit%10;
     
     thirdDigit= cnicNumber/10000000000; //corresponds to district
     thirdDigit= thirdDigit%100;
     thirdDigit= thirdDigit%10;
         
     fourthDigit= cnicNumber/1000000000; //corresponds to tehsil
     fourthDigit= fourthDigit%1000;
     fourthDigit= fourthDigit%100;
     fourthDigit= fourthDigit%10;
     
     fifthdigit= cnicNumber%100000000; //corresponds to UC
     fifthdigit= fifthdigit%10000;
     fifthdigit= fifthdigit%1000;
     fifthdigit= fifthdigit%100;
 

 switch (firstDigit){ //checking for province.
 case 1:
          province= "KPK";
          cout<<" Province of "<<name_of_student<<" is "<<province<<endl;
          break;
case 3:
          province= "Punjab";
          cout<<" Province of "<<name_of_student<<" is "<<province<<endl;
          break;
case 4:
          province= "Sindh";
          cout<<" Province of "<<name_of_student<<" is "<<province<<endl;
          break;
case 5:
          province= "Balochistan";
          cout<<" Province of "<<name_of_student<<" is "<<province<<endl;
          break;
          
case 6:
          province= "Federal";
          cout<<" Province of "<<name_of_student<<" is "<<province<<endl;
          break;
case 7:
          province= "Gilgit-Baltistan";
          cout<<" Province of "<<name_of_student<<" is "<<province<<endl;
          break;
}
if (province=="Punjab") // checking for divisions WITHIN Punjab
{
switch (secondDigit){ 
case 1:
division= "Faisalabad-1";
          cout<<"Division of "<<name_of_student<<" is "<<division<<endl;
          break;
case 2:
          division= "Lahore-2";
          cout<<"Division of "<<name_of_student<<" is "<<division<<endl;
          break;
 case 3: 
          division= "Sahiwal-3";
          cout<<"Division of "<<name_of_student<<" is "<<division<<endl;
          break;
 case 8:
          division= "Multan-8";
          cout<<"Division of "<<name_of_student<<" is "<<division<<endl;
          break;
 case 7:
          division= "Rawalpindi-7";
          cout<<" Division of "<<name_of_student<<" is "<<division<<endl;
          break;
}
switch (thirdDigit){ //Checking for districts WITHIN Punjab
    case 1: district= "Faisalabad-1";
            cout<<"District of "<<name_of_student<<" is "<<district<<endl;
            break;
    case 2:
   district= "Sahiwal-2";
              cout<<"District of "<<name_of_student<<" is "<<district<<endl;
              break;
    case 3:
          district= "Lahore-3";
          cout<<"District of "<<name_of_student<<" is "<<district<<endl;
          break;
    case 4:
          district= "Rawalpindi-4";
          cout<<"District of "<<name_of_student<<" is "<<district<<endl;
          break;
  case 5:
          district= "Multan-5";
          cout<<"District of "<<name_of_student<<" is "<<district<<endl;
          break;
}

switch(fourthDigit){ //checking for tehsils WITHIN Punjab
    case 0:
          tehsil= "Rawalpindi Tehsil-0";
          cout<<"Tehsil of "<<name_of_student<<" is "<<tehsil<<endl;
          break;
  case 1: tehsil= "Lahore City Tehsil-1";
          cout<<"Tehsil of "<<name_of_student<<" is "<<tehsil<<endl;
          break;
  case 2:
          tehsil= "Multan Tehsil-2";
          cout<<"Tehsil of "<<name_of_student<<" is "<<tehsil<<endl;
          break;
          
  case 4:
          tehsil= "Faisalabad Tehsil-1";
          cout<<"Tehsil of "<<name_of_student<<" is "<<tehsil<<endl;
          break;
          
    case 9:
          tehsil= "Sahiwal-9";
          cout<<"Tehsil of "<<name_of_student<<" is "<<tehsil<<endl;
          break;
}
switch (fifthdigit){ //checking for UC's WITHIN Punjab
       case 1:
          union_council= "Multan-1";
          cout<<"Union council of "<<name_of_student<<" is "<<union_council<<endl;
          break;
          case 2:
          union_council= "Sahiwal-2";
          cout<<" Union council of "<<name_of_student<<" is "<<union_council<<endl;
          break;
          case 4:
          union_council= "Lahore-4";
          cout<<"Union council of "<<name_of_student<<" is "<<union_council<<endl;
          break;
          case 5:
          union_council= "Rawalpindi-5";
          cout<<" Union Council of "<<name_of_student<<" is "<<union_council<<endl;
          break;
          case 6:
          union_council= "Faisalabad-6";
          cout<<"Union council of "<<name_of_student<<" is "<<union_council<<endl;
          break;
          // Check for Punjab ends here.
}
        }
if (province=="KPK") // checking for divisions WITHIN KPK
{
switch (secondDigit){
case 1:
division= "Bannu-1";
          cout<<"Division of "<<name_of_student<<" is "<<division<<endl;
          break;
case 2:
          division= "Dera Ismail Khan-2";
          cout<<"Division of "<<name_of_student<<" is "<<division<<endl;
          break;
 case 3: 
          division= "Hazara-3";
          cout<<"Division of "<<name_of_student<<" is "<<division<<endl;
          break;
 case 4:
          division= "Peshawar-4";
          cout<<"Division of "<<name_of_student<<" is "<<division<<endl;
          break;
 case 5:
          division= "Kohat-5";
          cout<<" Division of "<<name_of_student<<" is "<<division<<endl;
          break;
}
switch (thirdDigit){ //checking for districts WITHIN KPK
    case 1: district= "North Waziristan-1";
            cout<<"District of "<<name_of_student<<" is "<<district<<endl;
            break;
    case 2:
            district= "South Waziristan-2";
            cout<<"District of "<<name_of_student<<" is "<<district<<endl;
            break;
    case 3:
            district= "Mansehra-3";
            cout<<"District of "<<name_of_student<<" is "<<district<<endl;
            break;
    case 4:
            district= "Charsadda-4";
            cout<<"District of "<<name_of_student<<" is "<<district<<endl;
            break;
  case 5:
            district= "Kohat-5";
            cout<<"District of "<<name_of_student<<" is "<<district<<endl;
            break;
}

switch(fourthDigit){ //checking for tehsils WITHIN KPK
    case 0:
           tehsil= "Data Khel-0";
           cout<<"Tehsil of "<<name_of_student<<" is "<<tehsil<<endl;
           break;
  case 1:  tehsil= "Brimil-1";
           cout<<"Tehsil of "<<name_of_student<<" is "<<tehsil<<endl;
           break;
  case 2:
   tehsil= "Balakot-2";
            cout<<"Tehsil of "<<name_of_student<<" is "<<tehsil<<endl;
            break;
          
  case 4:
           tehsil= " Charsadda-3";
           cout<<"Tehsil of "<<name_of_student<<" is "<<tehsil<<endl;
           break;
          
    case 9:
          tehsil= "Kohat-9";
          cout<<"Tehsil of "<<name_of_student<<" is "<<tehsil<<endl;
          break;
}
switch (fifthdigit){ //checking for UC's within KPK
       case 1:
          union_council= "Amandi-1";
          cout<<"Union council of "<<name_of_student<<" is "<<union_council<<endl;
          break;
          case 2:
          union_council= "Maddi-2";
          cout<<" Union council of "<<name_of_student<<" is "<<union_council<<endl;
          break;
       
          case 4:
          union_council= "Battal-4";
          cout<<"Union council of "<<name_of_student<<" is "<<union_council<<endl;
          break;
          case 5:
          union_council= "Dhoda-5";
          cout<<" Union Council of "<<name_of_student<<" is "<<union_council<<endl;
          break;
          case 6:
          union_council= "Panjpao-6";
          cout<<"Union council of "<<name_of_student<<" is "<<union_council<<endl;
          break;
          //check for KPK ends here
}

    }
if (province=="Sindh") //checking for divisions WITHIN Sindh
{
switch (secondDigit){
case 1:
division= "Karachi-1";
           cout<<"Division of "<<name_of_student<<" is "<<division<<endl;
           break;
case 2:
          division= "Hyderabad-2";
          cout<<"Division of "<<name_of_student<<" is "<<division<<endl;
          break;
 case 3: 
          division= "Sukkur-3";
          cout<<"Division of "<<name_of_student<<" is "<<division<<endl;
          break;
 case 4:
          division= "Mirpurkhas-4";
          cout<<"Division of "<<name_of_student<<" is "<<division<<endl;
          break;
 case 5:
          division= "Larkana-5";
          cout<<" Division of "<<name_of_student<<" is "<<division<<endl;
          break;
}
switch (thirdDigit){ //checking for districts WITHIN Sindh
    case 1: district= "Malir-1";
            cout<<"District of "<<name_of_student<<" is "<<district<<endl;
            break;
    case 2:
          district= "Hyderabad-2";
          cout<<"District of "<<name_of_student<<" is "<<district<<endl;
          break;
    case 3:
          district= "Sukkur-3";
          cout<<"District of "<<name_of_student<<" is "<<district<<endl;
          break;
    case 4:
          district= "Mirpurkhas-4";
          cout<<"District of "<<name_of_student<<" is "<<district<<endl;
          break;
  case 5:
          district= "Larkana-5";
          cout<<"District of "<<name_of_student<<" is "<<district<<endl;
          break;
}

switch(fourthDigit){ //checking for tehsils WITHIN Sindh
    case 0:
          tehsil= "Malir Town-0";
          cout<<"Tehsil of "<<name_of_student<<" is "<<tehsil<<endl;
          break;
  case 1:  tehsil= "Ameerpet-1";
           cout<<"Tehsil of "<<name_of_student<<" is "<<tehsil<<endl;
           break;
  case 2:
          tehsil= "Taluka Sukkur-2";
          cout<<"Tehsil of "<<name_of_student<<" is "<<tehsil<<endl;
          break;
          
  case 4:
          tehsil= "Mirpurkhas Tehsil-4";
          cout<<"Tehsil of "<<name_of_student<<" is "<<tehsil<<endl;
          break;
          
    case 5:
          tehsil= "Thul-5";
          cout<<"Tehsil of "<<name_of_student<<" is "<<tehsil<<endl;
          break;
}
switch (fifthdigit){ //checking for UC's WITHIN Sindh
       case 1:
          union_council= "Malir UC-1";
          cout<<"Union council of "<<name_of_student<<" is "<<union_council<<endl;
          break;
          case 2:
          union_council= "Barechani-2";
          cout<<" Union council of "<<name_of_student<<" is "<<union_council<<endl;
          break;
          case 4:
          union_council= "New Goth-4";
          cout<<"Union council of "<<name_of_student<<" is "<<union_council<<endl;
          break;
          case 5:
          union_council= "Ahori-5";
          cout<<" Union Council of "<<name_of_student<<" is "<<union_council<<endl;
          break;
          case 6:
          union_council= "Bossan-6";
          cout<<"Union council of "<<name_of_student<<" is "<<union_council<<endl;
          break;
          //check for Sindh ends here
}
    }
if (province=="Balochistan") //checking for divisions WITHIN Baluchistan
{
switch (secondDigit){
case 1:
division= "Kalat-1";
          cout<<"Division of "<<name_of_student<<" is "<<division<<endl;
          break;
case 2:
          division= "Makran-2";
          cout<<"Division of "<<name_of_student<<" is "<<division<<endl;
          break;
 case 3: 
          division= "Quetta-3";
          cout<<"Division of "<<name_of_student<<" is "<<division<<endl;
          break;
 case 4:
          division= "Sibbi-4";
          cout<<"Division of "<<name_of_student<<" is "<<division<<endl;
          break;
 case 5:
          division= "Zhob-5";
          cout<<" Division of "<<name_of_student<<" is "<<division<<endl;
          break;
}
switch (thirdDigit){ //checking for districts WITHIN Baluchistan
    case 1: district= "Awaran-1";
            cout<<"District of "<<name_of_student<<" is "<<district<<endl;
            break;
    case 2:
          district= "Turbat-2";
          cout<<"District of "<<name_of_student<<" is "<<district<<endl;
          break;
    case 3:
          district= "Quetta-3";
          cout<<"District of "<<name_of_student<<" is "<<district<<endl;
          break;
    case 4:
          district= "Sibbi-4";
          cout<<"District of "<<name_of_student<<" is "<<district<<endl;
          break;
  case 5:
          district= "Zhob-5";
          cout<<"District of "<<name_of_student<<" is "<<district<<endl;
          break;
}

switch(fourthDigit){ //checking for tehsils WITHIN Baluchistan
    case 0:
          tehsil= "Awaran-0";
          cout<<"Tehsil of "<<name_of_student<<" is "<<tehsil<<endl;
          break;
  case 1: tehsil= "Turbat-1";
          cout<<"Tehsil of "<<name_of_student<<" is "<<tehsil<<endl;
          break;
  case 2:
          tehsil= "Chiltan-2";
          cout<<"Tehsil of "<<name_of_student<<" is "<<tehsil<<endl;
          break;
          
  case 4:
          tehsil= "Sibbi-4";
          cout<<"Tehsil of "<<name_of_student<<" is "<<tehsil<<endl;
          break;
          
    case 5:
          tehsil= "Tehsil Zhob-5";
          cout<<"Tehsil of "<<name_of_student<<" is "<<tehsil<<endl;
          break;
}
switch (fifthdigit){ //checking for UC's within Baluchistan
       case 1:
          union_council= "Malar-1";
          cout<<"Union council of "<<name_of_student<<" is "<<union_council<<endl;
          break;
          case 2:
          union_council= "Ginna-2";
          cout<<" Union council of "<<name_of_student<<" is "<<union_council<<endl;
          break;
          case 4:
          union_council= "Hanna-4";
          cout<<"Union council of "<<name_of_student<<" is "<<union_council<<endl;
          break;
          case 5:
          union_council= "Karrak-5";
          cout<<" Union Council of "<<name_of_student<<" is "<<union_council<<endl;
          break;
          case 6:
          union_council= "Omza-6";
          cout<<"Union council of "<<name_of_student<<" is "<<union_council<<endl;
          break;
          //check for Baluchistan ends here
}
    }
if (province=="Federal") //checking for Islamabad or Federal divisions(ICT is a division in itself)
{
switch (secondDigit){
case 1:
division= "Zone-1";
           cout<<"Division of "<<name_of_student<<" is "<<division<<endl;
           break;
case 2:
          division= "Zone-2";
          cout<<"Division of "<<name_of_student<<" is "<<division<<endl;
          break;
 case 3: 
          division= "Zone-3";
          cout<<"Division of "<<name_of_student<<" is "<<division<<endl;
          break;
 case 4:
          division= "Zone-4";
          cout<<"Division of "<<name_of_student<<" is "<<division<<endl;
          break;
 case 5:
          division= "Zone-5";
          cout<<" Division of "<<name_of_student<<" is "<<division<<endl;
          break;
}
switch (thirdDigit){ // checking for districts in federal capital
    case 1: district= "Islamabad-1";
            cout<<"District of "<<name_of_student<<" is "<<district<<endl;
            break;
    case 2:
            district= "Islamabad-2";
            cout<<"District of "<<name_of_student<<" is "<<district<<endl;
            break;
    case 3:
          district= "Islamabad-3";
          cout<<"District of "<<name_of_student<<" is "<<district<<endl;
          break;
    case 4:
          district= "Islamabad-4";
          cout<<"District of "<<name_of_student<<" is "<<district<<endl;
          break;
  case 5:
          district= "Islamabad-5";
          cout<<"District of "<<name_of_student<<" is "<<district<<endl;
          break;
}

switch(fourthDigit){ //checking for tehsils in federal capital
    case 0:
           tehsil= "Islamabad-0";
           cout<<"Tehsil of "<<name_of_student<<" is "<<tehsil<<endl;
           break;
  case 1:  tehsil= "Islamabad-1";
           cout<<"Tehsil of "<<name_of_student<<" is "<<tehsil<<endl;
           break;
  case 2:
           tehsil= "Islamabad-2";
           cout<<"Tehsil of "<<name_of_student<<" is "<<tehsil<<endl;
           break;
          
  case 4:
          tehsil= " Islamabad-4";
          cout<<"Tehsil of "<<name_of_student<<" is "<<tehsil<<endl;
          break;
          
    case 5:
          tehsil= "Islamabad-5";
          cout<<"Tehsil of "<<name_of_student<<" is "<<tehsil<<endl;
          break;
}
switch (fifthdigit){ //checking for UC's in federal capital
       case 1:
          union_council= "Saidpur-1";
          cout<<"Union council of "<<name_of_student<<" is "<<union_council<<endl;
          break;
          case 2:
          union_council= "Rawat-2";
          cout<<" Union council of "<<name_of_student<<" is "<<union_council<<endl;
          break;
          case 4:
          union_council= "Kirpa-4";
          cout<<"Union council of "<<name_of_student<<" is "<<union_council<<endl;
          break;
          case 5:
          union_council= "Sihala-5";
          cout<<" Union Council of "<<name_of_student<<" is "<<union_council<<endl;
          break;
          case 6:
          union_council= "Chak Shahzad-6";
          cout<<"Union council of "<<name_of_student<<" is "<<union_council<<endl;
          break;
          //check for Islamabad ends here
}
    }
if (province=="Gilgit-Baltistan")
{
switch (secondDigit){ //checking for divisions in GP
case 1:               //GP consists of 3 divisions only
          division= "Baltistan-1";
          cout<<"Division of "<<name_of_student<<" is "<<division<<endl;
          break;
case 2:
          division= "Diamer-2";
          cout<<"Division of "<<name_of_student<<" is "<<division<<endl;
          break;
 case 3: 
          division= "Gilgit-3";
          cout<<"Division of "<<name_of_student<<" is "<<division<<endl;
          break;
}
switch (thirdDigit){ //checking for districts in GP
    case 1: district= "Skardu-1";
            cout<<"District of "<<name_of_student<<" is "<<district<<endl;
            break;
    case 2:
            district= "Astore-2";
            cout<<"District of "<<name_of_student<<" is "<<district<<endl;
            break;
    case 3:
            district= "Hunza-3";
            cout<<"District of "<<name_of_student<<" is "<<district<<endl;
            break;
} 
switch(fourthDigit){ //checking for tehsils in GP
    case 0:          //GP has no UC's.
          tehsil= "Skardu Teshil-0";
          cout<<"Tehsil of "<<name_of_student<<" is "<<tehsil<<endl;
          break;
  case 1:
          tehsil= "Astore Tehsil-1";
          cout<<"Tehsil of "<<name_of_student<<" is "<<tehsil<<endl;
          break;
  case 2:
          tehsil= "Gojal Tehsil-2";
          cout<<"Tehsil of "<<name_of_student<<" is "<<tehsil<<endl;
          break;  
          //check for GP ends here
}
    }
     family_number= cnicNumber%100000000; //calculating family_number and displaying it at the end
     family_number= family_number/10;
     cout<<"Family number of "<<name_of_student<<" is "<<family_number<<endl;
     
     return 0;
} //end of program
     