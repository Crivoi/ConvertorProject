#include <iostream>

using namespace std;

long long grams, kilograms, pounds, milligrams, ounceav, ouncetroy, tons;
long long sqm, sqkm, sqcm, sqmm, sqft, sqin, sqyd, ha, ac;
long long l, cl, ml, cubem, cubecm, cubedm, gal;
long long time, speed, energy, density, pressure, length, fuel, degrees;
int unitChoice, unitToConvert, choice;

int main ()
{
    cout << "Choose one of the following Units: \n";
    cout << "For Weight       type 1. \n";
    cout << "For Area         type 2. \n";
    cout << "For Volume       type 3. \n";
    cout << "For Time         type 4. \n";
    cout << "For Speed        type 5. \n";
    cout << "For Temperature  type 6. \n";
    cout << "For Length       type 7. \n";
    cout << "For Energy       type 8. \n";
    cout << "For Pressure     type 9. \n";
    cout << "For Density      type 10. \n";
    cout << "For Fuel         type 11. \n";
    cout << endl;

do
{
    cin >> unitChoice;
    switch (unitChoice)
    {
    default:
        cout << "Incorrect input. " << endl;
    break;
    case 1:
        cout << "\nWeight: \n";
        cout << "Select Unit To Convert: \n";
        cout << "For Grams              type 1. " << endl;
        cout << "For Kilograms          type 2. " << endl;
        cout << "For Pounds             type 3. " << endl;
        cout << "For Milligrams         type 4. " << endl;
        cout << "For Ounce (AV)         type 5. " << endl;
        cout << "For Ounce (Troy)       type 6. " << endl;
        cout << "For Tons               type 7. " << endl;
        cout << endl;

        do
        {
            cin >> unitToConvert;
           switch (unitToConvert)
           {
           case 1:
               cout << "Grams -> Kilograms:     type 1. " << endl;
               cout << "Grams -> Pounds:        type 2. " << endl;
               cout << "Grams -> Milligrams:    type 3. " << endl;
               cout << "Grams -> Ounce (AV):    type 4. " << endl;
               cout << "Grams -> Ounce (Troy):  type 5. " << endl;
               cout << "Grams -> Tons:          type 6. " << endl;
               cout << endl;
               do
               {
                   cin >> choice;
                   switch (choice)
                   {
                   case 1:
                    cout << "\nEnter number of Grams: ";
                    cin >> grams;
                    cout << "\n" << grams << " grams = " << grams * 0.001 << " kilograms. " << endl;
                    break;
                   case 2:
                    cout << "\nEnter number of Grams: ";
                    cin >> grams;
                    cout << "\n" << grams << " grams = " << grams * 0.0022 << " pounds. " << endl;
                    break;
                   case 3:
                    cout << "\nEnter number of Grams: ";
                    cin >> grams;
                    cout << "\n" << grams << " grams = " << grams * 1000 << " milligrams. " << endl;
                    break;
                   case 4:
                    cout << "\nEnter number of Grams: ";
                    cin >> grams;
                    cout << "\n" << grams << " grams = " << grams * 0.035 << " ounces (AV). " << endl;
                    break;
                   case 5:
                    cout << "\nEnter number of Grams: ";
                    cin >> grams;
                    cout << "\n" << grams << " grams = " << grams * 0.001 << " ounces (Troy). " << endl;
                    break;
                   case 6:
                    cout << "\nEnter number of Grams: ";
                    cin >> grams;
                    cout << "\n" << grams << " grams = " << grams * 0.000001 << " tons. " << endl;
                    break;
                   default:
                    cout << "Incorrect input. " << endl;
                    break;
                   }
               }
               while (choice!=1 && choice!=2 && choice!=3 &&
                      choice!=4 && choice!=5 && choice!=6);
           break;
           case 2:
               cout << "Kilograms -> Grams:         type 1. " << endl;
               cout << "Kilograms -> Pounds:        type 2. " << endl;
               cout << "Kilograms -> Milligrams:    type 3. " << endl;
               cout << "Kilograms -> Ounce (AV):    type 4. " << endl;
               cout << "Kilograms -> Ounce (Troy):  type 5. " << endl;
               cout << "Kilograms -> Tons:          type 6. " << endl;
               cout << endl;
               do
               {
                   cin >> choice;
                   switch (choice)
                   {
                   case 1:
                    cout << "\nEnter number of Kilograms: ";
                    cin >> kilograms;
                    cout << "\n" << kilograms << " kilograms = " << kilograms * 1000 << " grams. " << endl;
                    break;
                   case 2:
                    cout << "\nEnter number of Kilograms: ";
                    cin >> kilograms;
                    cout << "\n" << kilograms << " kilograms = " << kilograms * 2.2 << " pounds. " << endl;
                    break;
                   case 3:
                    cout << "\nEnter number of Kilograms: ";
                    cin >> kilograms;
                    cout << "\n" << kilograms << " kilograms = " << kilograms * 1000000<< " milligrams. " << endl;
                    break;
                   case 4:
                    cout << "\nEnter number of Kilograms: ";
                    cin >> kilograms;
                    cout << "\n" << kilograms << " kilograms = " << kilograms * 35.27 << " ounces (AV). " << endl;
                    break;
                   case 5:
                    cout << "\nEnter number of Kilograms: ";
                    cin >> kilograms;
                    cout << "\n" << kilograms << " kilograms = " << kilograms * 35.15 << " ounces (Troy). " << endl;
                    break;
                   case 6:
                    cout << "\nEnter number of Kilograms: ";
                    cin >> kilograms;
                    cout << "\n" << kilograms << " kilograms = " << kilograms * 0.001 << " tons. " << endl;
                    break;
                    default:
                    cout << "Incorrect input. " << endl;
                    break;
                   }
               }
               while (choice!=1 && choice!=2 && choice!=3 &&
                      choice!=4 && choice!=5 && choice!=6);
           break;
           case 3:
               cout << "Pounds -> Grams:         type 1. " << endl;
               cout << "Pounds -> Kilograms:     type 2. " << endl;
               cout << "Pounds -> Milligrams:    type 3. " << endl;
               cout << "Pounds -> Ounce (AV):    type 4. " << endl;
               cout << "Pounds -> Ounce (Troy):  type 5. " << endl;
               cout << "Pounds -> Tons:          type 6. " << endl;
               cout << endl;
               do
               {
                   cin >> choice;
                   switch (choice)
                   {
                   case 1:
                    cout << "\nEnter number of Pounds: ";
                    cin >> pounds;
                    cout << "\n" << pounds << " pounds = " << pounds * 453.59 << " grams. " << endl;
                    break;
                   case 2:
                    cout << "\nEnter number of Pounds: ";
                    cin >> pounds;
                    cout << "\n" << pounds << " pounds = " << pounds * 0.45359 << " kilograms. " << endl;
                    break;
                   case 3:
                    cout << "\nEnter number of Pounds: ";
                    cin >> pounds;
                    cout << "\n" << pounds << " pounds = " << pounds * 453592 << " milligrams. " << endl;
                    break;
                   case 4:
                    cout << "\nEnter number of Pounds: ";
                    cin >> pounds;
                    cout << "\n" << pounds << " pounds = " << pounds * 16 << " ounces (AV). " << endl;
                    break;
                   case 5:
                    cout << "\nEnter number of Pounds: ";
                    cin >> pounds;
                    cout << "\n" << pounds << " pounds = " << pounds * 14.58 << " ounces (Troy). " << endl;
                    break;
                   case 6:
                    cout << "\nEnter number of Pounds: ";
                    cin >> pounds;
                    cout << "\n" << pounds << " pounds = " << pounds * 0.000453592 << " tons. " << endl;
                    break;
                    default:
                    cout << "Incorrect input. " << endl;
                    break;
                   }
               }
               while (choice!=1 && choice!=2 && choice!=3 &&
                      choice!=4 && choice!=5 && choice!=6);
           break;
           case 4:
               cout << "Milligrams -> Grams:         type 1. " << endl;
               cout << "Milligrams -> Kilograms:     type 2. " << endl;
               cout << "Milligrams -> Pounds:        type 3. " << endl;
               cout << "Milligrams -> Ounce (AV):    type 4. " << endl;
               cout << "Milligrams -> Ounce (Troy):  type 5. " << endl;
               cout << "Milligrams -> Tons:          type 6. " << endl;
               cout << endl;
               do
               {
                 cin >> choice;
                 switch (choice)
                 {
                   case 1:
                    cout << "\nEnter number of Milligrams: ";
                    cin >> milligrams;
                    cout << "\n" << milligrams << " milligrams = " << milligrams * 0.001 << " grams. " << endl;
                    break;
                   case 2:
                    cout << "\nEnter number of Milligrams: ";
                    cin >> milligrams;
                    cout << "\n" << milligrams << " milligrams = " << milligrams * 0.000001 << " kilograms. " << endl;
                    break;
                   case 3:
                    cout << "\nEnter number of Milligrams: ";
                    cin >> milligrams;
                    cout << "\n" << milligrams << " milligrams = " << milligrams * 0.0000022 << " pounds. " << endl;
                    break;
                   case 4:
                    cout << "\nEnter number of Milligrams: ";
                    cin >> milligrams;
                    cout << "\n" << milligrams << " milligrams = " << milligrams * 0.000035 << " ounce (AV). " << endl;
                    break;
                   case 5:
                    cout << "\nEnter number of Milligrams: ";
                    cin >> milligrams;
                    cout << "\n" << milligrams << " milligrams = " << milligrams * 0.000032 << " ounce (Troy). " << endl;
                    break;
                   case 6:
                    cout << "\nEnter number of Milligrams: ";
                    cin >> milligrams;
                    cout << "\n" << milligrams << " milligrams = " << milligrams * 0.000000001 << " tons. " << endl;
                    break;
                    default:
                    cout << "Incorrect input. " << endl;
                    break;
                 }
               }
               while (choice!=1 && choice!=2 && choice!=3 &&
                      choice!=4 && choice!=5 && choice!=6);
           break;
           case 5:
               cout << "Ounce (AV) -> Grams:         type 1. " << endl;
               cout << "Ounce (AV) -> Kilograms:     type 2. " << endl;
               cout << "Ounce (AV) -> Pounds:        type 3. " << endl;
               cout << "Ounce (AV) -> Milligrams:    type 4. " << endl;
               cout << "Ounce (AV) -> Ounce (Troy):  type 5. " << endl;
               cout << "Ounce (AV) -> Tons:          type 6. " << endl;
               cout << endl;
               do
               {
                   cin >> choice;
                   switch (choice)
                   {
                   case 1:
                    cout << "\nEnter number of Ounces (AV): ";
                    cin >> ounceav;
                    cout << "\n" << ounceav << " ounces (AV) = " << ounceav * 28.34 << " grams. " << endl;
                    break;
                   case 2:
                    cout << "\nEnter number of Ounces (AV): ";
                    cin >> ounceav;
                    cout << "\n" << ounceav << " ounces (AV) = " << ounceav * 0.02834 << " kilograms. " << endl;
                    break;
                   case 3:
                    cout << "\nEnter number of Ounces (AV): ";
                    cin >> ounceav;
                    cout << "\n" << ounceav << " ounces (AV) = " << ounceav * 0.062 << " pounds. " << endl;
                    break;
                   case 4:
                    cout << "\nEnter number of Ounces (AV): ";
                    cin >> ounceav;
                    cout << "\n" << ounceav << " ounces (AV) = " << ounceav * 28349.5 << " milligrams. " << endl;
                    break;
                   case 5:
                    cout << "\nEnter number of Ounces (AV): ";
                    cin >> ounceav;
                    cout << "\n" << ounceav << " ounces (AV) = " << ounceav * 0.911 << " ounces (Troy). " << endl;
                    break;
                   case 6:
                    cout << "\nEnter number of Ounces (AV): ";
                    cin >> ounceav;
                    cout << "\n" << ounceav << " ounces (AV) = " << ounceav * 0.0000283495 << " tons. " << endl;
                    break;
                    default:
                    cout << "Incorrect input. " << endl;
                    break;
                   }
               }
               while (choice!=1 && choice!=2 && choice!=3 &&
                      choice!=4 && choice!=5 && choice!=6);
           break;
           case 6:
               cout << "Ounce (Troy) -> Grams:       type 1. " << endl;
               cout << "Ounce (Troy) -> Kilograms:   type 2. " << endl;
               cout << "Ounce (Troy) -> Pounds:      type 3. " << endl;
               cout << "Ounce (Troy) -> Milligrams:  type 4. " << endl;
               cout << "Ounce (Troy) -> Ounce (AV):  type 5. " << endl;
               cout << "Ounce (Troy) -> Tons:        type 6. " << endl;
               cout << endl;
               do
               {
                  cin >> choice;
                  switch (choice)
                  {
                   case 1:
                    cout << "\nEnter number of Ounces (Troy): ";
                    cin >> ouncetroy;
                    cout << "\n" << ouncetroy << " ounces (Troy) = " << ouncetroy * 31.10 << " grams. " << endl;
                    break;
                   case 2:
                    cout << "\nEnter number of Ounces (Troy): ";
                    cin >> ouncetroy;
                    cout << "\n" << ouncetroy << " ounces (Troy) = " << ouncetroy * 0.031 << " kilograms. " << endl;
                    break;
                   case 3:
                    cout << "\nEnter number of Ounces (Troy): ";
                    cin >> ouncetroy;
                    cout << "\n" << ouncetroy << " ounces (Troy) = " << ouncetroy * 0.068 << " pounds. " << endl;
                    break;
                   case 4:
                    cout << "\nEnter number of Ounces (Troy): ";
                    cin >> ouncetroy;
                    cout << "\n" << ouncetroy << " ounces (Troy) = " << ouncetroy * 31103.5 << " milligrams. " << endl;
                    break;
                   case 5:
                    cout << "\nEnter number of Ounces (Troy): ";
                    cin >> ouncetroy;
                    cout << "\n" << ouncetroy << " ounces (Troy) = " << ouncetroy * 1.097 << " ounce (AV). " << endl;
                    break;
                   case 6:
                    cout << "\nEnter number of Ounces (Troy): ";
                    cin >> ouncetroy;
                    cout << "\n" << ouncetroy << " ounces (Troy) = " << ouncetroy * 0.000031 << " tons. " << endl;
                    break;
                    default:
                    cout << "Incorrect input. " << endl;
                    break;
                  }
               }
               while (choice!=1 && choice!=2 && choice!=3 &&
                      choice!=4 && choice!=5 && choice!=6);
           break;
           case 7:
               cout << "Tons -> Grams:         type 1. " << endl;
               cout << "Tons -> Kilograms:     type 2. " << endl;
               cout << "Tons -> Pounds:        type 3. " << endl;
               cout << "Tons -> Milligrams:    type 4. " << endl;
               cout << "Tons -> Ounce (AV):    type 5. " << endl;
               cout << "Tons -> Ounce (Troy):  type 6. " << endl;
               cout << endl;
               do
               {
                  cin >> choice;
                  switch (choice)
                  {
                   case 1:
                    cout << "\nEnter number of tons: ";
                    cin >> tons;
                    cout << "\n" << tons << " tons = " << tons * 1000000 << " grams. " << endl;
                    break;
                   case 2:
                    cout << "\nEnter number of tons: ";
                    cin >> tons;
                    cout << "\n" << tons << " tons = " << tons * 1000 << " kilograms. " << endl;
                    break;
                   case 3:
                    cout << "\nEnter number of tons: ";
                    cin >> tons;
                    cout << "\n" << tons << " tons = " << tons * 2204.62 << " pounds. " << endl;
                    break;
                   case 4:
                    cout << "\nEnter number of tons: ";
                    cin >> tons;
                    cout << "\n" << tons << " tons = " << tons * 1000000000 << " milligrams. " << endl;
                    break;
                   case 5:
                    cout << "\nEnter number of tons: ";
                    cin >> tons;
                    cout << "\n" << tons << " tons = " << tons * 35273.99 << " ounces (AV). " << endl;
                    break;
                   case 6:
                    cout << "\nEnter number of tons: ";
                    cin >> tons;
                    cout << "\n" << tons << " tons = " << tons * 32150.72 << " ounces (Troy). " << endl;
                    break;
                    default:
                    cout << "Incorrect input. " << endl;
                    break;
                  }
               }
               while (choice!=1 && choice!=2 && choice!=3 &&
                      choice!=4 && choice!=5 && choice!=6);
               break;
               default:
                    cout << "Incorrect input. " << endl;
                    break;
            }
        }
    while (unitToConvert!=1 && unitToConvert!=2 && unitToConvert!=3 &&
           unitToConvert!=4 && unitToConvert!=5 && unitToConvert!=6);
    break;
    case 2:
        cout << "\nArea: \n";
        cout << "Select Unit To Convert: \n";
        cout << "For Square Meters            type 1. " << endl;
        cout << "For Square Kilometers        type 2. " << endl;
        cout << "For Square Centimeters       type 3. " << endl;
        cout << "For Square Millimeters       type 4. " << endl;
        cout << "For Square Feet              type 5. " << endl;
        cout << "For Square Inches            type 6. " << endl;
        cout << "For Hectares                 type 7. " << endl;
        cout << "For Acres                    type 8. " << endl;
        cout << "For Square Yards             type 9. " << endl;
        cout << endl;
        do
        {
            cin >> unitToConvert;
            switch (unitToConvert)
            {
            case 1:
                cout << "Square Meters -> Square Kilometers:   type 1. " << endl;
                cout << "Square Meters -> Square Centimeters:  type 2. " << endl;
                cout << "Square Meters -> Square Millimeters:  type 3. " << endl;
                cout << "Square Meters -> Square Feet:         type 4. " << endl;
                cout << "Square Meters -> Square Inches:       type 5. " << endl;
                cout << "Square Meters -> Hectares:            type 6. " << endl;
                cout << "Square Meters -> Acres:               type 7. " << endl;
                cout << "Square Meters -> Square Yards:        type 8. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Square Meters: ";
                        cin >> sqm;
                        cout << "\n" << sqm << " square meters = " << sqm * 0.000001 << " square kilometers. " << endl;
                    break;
                    case 2:
                        cout << "\nEnter number of Square Meters: ";
                        cin >> sqm;
                        cout << "\n" << sqm << " square meters = " << sqm * 10000 << " square centimeters. " << endl;
                    break;
                    case 3:
                        cout << "\nEnter number of Square Meters: ";
                        cin >> sqm;
                        cout << "\n" << sqm << " square meters = " << sqm * 1000000 << " square millimeters. " << endl;
                    break;
                    case 4:
                        cout << "\nEnter number of Square Meters: ";
                        cin >> sqm;
                        cout << "\n" << sqm << " square meters = " << sqm * 10.76 << " square feet. " << endl;
                    break;
                    case 5:
                        cout << "\nEnter number of Square Meters: ";
                        cin >> sqm;
                        cout << "\n" << sqm << " square meters = " << sqm * 1549.90 << " square inches. " << endl;
                    break;
                    case 6:
                        cout << "\nEnter number of Square Meters: ";
                        cin >> sqm;
                        cout << "\n" << sqm << " square meters = " << sqm * 0.0001 << " hectares. " << endl;
                    break;
                    case 7:
                        cout << "\nEnter number of Square Meters: ";
                        cin >> sqm;
                        cout << "\n" << sqm << " square meters = " << sqm * 0.00024 << " acres. " << endl;
                    break;
                    case 8:
                        cout << "\nEnter number of Square Meters: ";
                        cin >> sqm;
                        cout << "\n" << sqm << " square meters = " << sqm * 1.19 << " square yards. " << endl;
                    break;
                    default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5 && choice!=6 &&
                       choice!=7 && choice!=8);
                break;
            case 2:
                cout << "Square Kilometers -> Square Meters:       type 1. " << endl;
                cout << "Square Kilometers -> Square Centimeters:  type 2. " << endl;
                cout << "Square Kilometers -> Square Millimeters:  type 3. " << endl;
                cout << "Square Kilometers -> Square Feet:         type 4. " << endl;
                cout << "Square Kilometers -> Square Inches:       type 5. " << endl;
                cout << "Square Kilometers -> Hectares:            type 6. " << endl;
                cout << "Square Kilometers -> Acres:               type 7. " << endl;
                cout << "Square Kilometers -> Square Yards:        type 8. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Square Kilometers: ";
                        cin >> sqkm;
                        cout << "\n" << sqkm << " square kilometers = " << sqkm * 100000000 << " square meters. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Square Kilometers: ";
                        cin >> sqkm;
                        cout << "\n" << sqkm << " square kilometers = " << sqkm * 1000000000000 << " square centimeters. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Square Kilometers: ";
                        cin >> sqkm;
                        cout << "\n" << sqkm << " square kilometers = " << sqkm * 100000000000000 << " square millimeters. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of Square Kilometers: ";
                        cin >> sqkm;
                        cout << "\n" << sqkm << " square kilometers = " << sqkm * 1076426264.80 << " square feet. " << endl;
                        break;
                    case 5:
                        cout << "\nEnter number of Square Kilometers: ";
                        cin >> sqkm;
                        cout << "\n" << sqkm << " square kilometers = " << sqkm * 154990700557.96 << " square inches. " << endl;
                        break;
                    case 6:
                        cout << "\nEnter number of Square Kilometers: ";
                        cin >> sqkm;
                        cout << "\n" << sqkm << " square kilometers = " << sqkm * 10000 << " hectares. " << endl;
                        break;
                    case 7:
                        cout << "\nEnter number of Square Kilometers: ";
                        cin >> sqkm;
                        cout << "\n" << sqkm << " square kilometers = " << sqkm * 24710.53 << " acres. " << endl;
                        break;
                    case 8:
                        cout << "\nEnter number of Square Kilometers: ";
                        cin >> sqkm;
                        cout << "\n" << sqkm << " square kilometers = " << sqkm * 119598939.40 << " square yards. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5 && choice!=6 &&
                       choice!=7 && choice!=8);
                break;
            case 3:
                cout << "Square Centimeters -> Square Meters:       type 1. " << endl;
                cout << "Square Centimeters -> Square Kilometers:   type 2. " << endl;
                cout << "Square Centimeters -> Square Millimeters:  type 3. " << endl;
                cout << "Square Centimeters -> Square Feet:         type 4. " << endl;
                cout << "Square Centimeters -> Square Inches:       type 5. " << endl;
                cout << "Square Centimeters -> Hectares:            type 6. " << endl;
                cout << "Square Centimeters -> Acres:               type 7. " << endl;
                cout << "Square Centimeters -> Square Yards:        type 8. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Square Centimeters: ";
                        cin >> sqcm;
                        cout << "\n" << sqcm << " square centimeters = " << sqcm * 0.0001 << " square meters. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Square Centimeters: ";
                        cin >> sqcm;
                        cout << "\n" << sqcm << " square centimeters = " << sqcm * 1e-10 << " square kilometers. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Square Centimeters: ";
                        cin >> sqcm;
                        cout << "\n" << sqcm << " square centimeters = " << sqcm * 100 << " square millimeters. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of Square Centimeters: ";
                        cin >> sqcm;
                        cout << "\n" << sqcm << " square centimeters = " << sqcm * 0.001076 << " square feet. " << endl;
                        break;
                    case 5:
                        cout << "\nEnter number of Square Centimeters: ";
                        cin >> sqcm;
                        cout << "\n" << sqcm << " square centimeters = " << sqcm * 0.15499 << " square inches. " << endl;
                        break;
                    case 6:
                        cout << "\nEnter number of Square Centimeters: ";
                        cin >> sqcm;
                        cout << "\n" << sqcm << " square centimeters = " << sqcm * 1e-8 << " hectares. " << endl;
                        break;
                    case 7:
                        cout << "\nEnter number of Square Centimeters: ";
                        cin >> sqcm;
                        cout << "\n" << sqcm << " square centimeters = " << sqcm * 2.4710 << " acres. " << endl;
                        break;
                    case 8:
                        cout << "\nEnter number of Square Centimeters: ";
                        cin >> sqcm;
                        cout << "\n" << sqcm << " square centimeters = " << sqcm * 0.0001195 << " square yards. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5 && choice!=6 &&
                       choice!=7 && choice!=8);
                break;
            case 4:
                cout << "Square Millimeters -> Square Meters:       type 1. " << endl;
                cout << "Square Millimeters -> Square Kilometers:   type 2. " << endl;
                cout << "Square Millimeters -> Square Centimeters:  type 3. " << endl;
                cout << "Square Millimeters -> Square Feet:         type 4. " << endl;
                cout << "Square Millimeters -> Square Inches:       type 5. " << endl;
                cout << "Square Millimeters -> Hectares:            type 6. " << endl;
                cout << "Square Millimeters -> Acres:               type 7. " << endl;
                cout << "Square Millimeters -> Square Yards:        type 8. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Square Millimeters: ";
                        cin >> sqmm;
                        cout << "\n" << sqmm << " square millimeters = " << sqmm * 0.000001 << " square meters. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Square Millimeters: ";
                        cin >> sqmm;
                        cout << "\n" << sqmm << " square millimeters = " << sqmm * 1e-12 << " square kilometers. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Square Millimeters: ";
                        cin >> sqmm;
                        cout << "\n" << sqmm << " square millimeters = " << sqmm * 0.01 << " square centimeters. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of Square Millimeters: ";
                        cin >> sqmm;
                        cout << "\n" << sqmm << " square millimeters = " << sqmm * 0.00001076 << " square feet. " << endl;
                        break;
                    case 5:
                        cout << "\nEnter number of Square Millimeters: ";
                        cin >> sqmm;
                        cout << "\n" << sqmm << " square millimeters = " << sqmm * 0.0015499 << " square inches. " << endl;
                        break;
                    case 6:
                        cout << "\nEnter number of Square Millimeters: ";
                        cin >> sqmm;
                        cout << "\n" << sqmm << " square millimeters = " << sqmm * 1e-10 << " hectares. " << endl;
                        break;
                    case 7:
                        cout << "\nEnter number of Square Millimeters: ";
                        cin >> sqmm;
                        cout << "\n" << sqmm << " square millimeters = " << sqmm * 2.4710 << " acres. " << endl;
                        break;
                    case 8:
                        cout << "\nEnter number of Square Millimeters: ";
                        cin >> sqmm;
                        cout << "\n" << sqmm << " square millimeters = " << sqmm * 0.000001195 << " square yards. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5 && choice!=6 &&
                       choice!=7 && choice!=8);
                break;
            case 5:
                cout << "Square Feet -> Square Meters:       type 1. " << endl;
                cout << "Square Feet -> Square Kilometers:   type 2. " << endl;
                cout << "Square Feet -> Square Centimeters:  type 3. " << endl;
                cout << "Square Feet -> Square Millimeters:  type 4. " << endl;
                cout << "Square Feet -> Square Inches:       type 5. " << endl;
                cout << "Square Feet -> Hectares:            type 6. " << endl;
                cout << "Square Feet -> Acres:               type 7. " << endl;
                cout << "Square Feet -> Square Yards:        type 8. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Square Feet: ";
                        cin >> sqft;
                        cout << "\n" << sqft << " square feet = " << sqft * 0.0929 << " square meters. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Square Feet: ";
                        cin >> sqft;
                        cout << "\n" << sqft << " square feet = " << sqft * 9.2903e-8 << " square kilometers. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Square Feet: ";
                        cin >> sqft;
                        cout << "\n" << sqft << " square feet = " << sqft * 929.03 << " square centimeters. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of Square Feet: ";
                        cin >> sqft;
                        cout << "\n" << sqft << " square feet = " << sqft * 92900 << " square millimeters. " << endl;
                        break;
                    case 5:
                        cout << "\nEnter number of Square Feet: ";
                        cin >> sqft;
                        cout << "\n" << sqft << " square feet = " << sqft * 143.98 << " square inches. " << endl;
                        break;
                    case 6:
                        cout << "\nEnter number of Square Feet: ";
                        cin >> sqft;
                        cout << "\n" << sqft << " square feet = " << sqft * 0.00000928 << " hectares. " << endl;
                        break;
                    case 7:
                        cout << "\nEnter number of Square Feet: ";
                        cin >> sqft;
                        cout << "\n" << sqft << " square feet = " << sqft * 0.00002295 << " acres. " << endl;
                        break;
                    case 8:
                        cout << "\nEnter number of Square Feet: ";
                        cin >> sqft;
                        cout << "\n" << sqft << " square feet = " << sqft * 0.1111 << " square yards. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5 && choice!=6 &&
                       choice!=7 && choice!=8);
                break;
            case 6:
                cout << "Square Inches -> Square Meters:       type 1. " << endl;
                cout << "Square Inches -> Square Kilometers:   type 2. " << endl;
                cout << "Square Inches -> Square Centimeters:  type 3. " << endl;
                cout << "Square Inches -> Square Millimeters:  type 4. " << endl;
                cout << "Square Inches -> Square Feet:         type 5. " << endl;
                cout << "Square Inches -> Hectares:            type 6. " << endl;
                cout << "Square Inches -> Acres:               type 7. " << endl;
                cout << "Square Inches -> Square Yards:        type 8. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Square Inches: ";
                        cin >> sqin;
                        cout << "\n" << sqin << " square inches = " << sqin * 0.0006452 << " square meters. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Square Inches: ";
                        cin >> sqin;
                        cout << "\n" << sqin << " square inches = " << sqin * 6.452e-10 << " square kilometers. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Square Inches: ";
                        cin >> sqin;
                        cout << "\n" << sqin << " square inches = " << sqin * 6.452 << " square centimeters. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of Square Inches: ";
                        cin >> sqin;
                        cout << "\n" << sqin << " square inches = " << sqin * 645.2 << " square millimeters. " << endl;
                        break;
                    case 5:
                        cout << "\nEnter number of Square Inches: ";
                        cin >> sqin;
                        cout << "\n" << sqin << " square inches = " << sqin * 0.006945 << " square feet. " << endl;
                        break;
                    case 6:
                        cout << "\nEnter number of Square Inches: ";
                        cin >> sqin;
                        cout << "\n" << sqin << " square inches = " << sqin * 6.452e-8 << " hectares. " << endl;
                        break;
                    case 7:
                        cout << "\nEnter number of Square Inches: ";
                        cin >> sqin;
                        cout << "\n" << sqin << " square inches = " << sqin * 1.5943 << " acres. " << endl;
                        break;
                    case 8:
                        cout << "\nEnter number of Square Inches: ";
                        cin >> sqin;
                        cout << "\n" << sqin << " square inches = " << sqin * 0.0007716 << " square yards. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5 && choice!=6 &&
                       choice!=7 && choice!=8);
                break;
            case 7:
                cout << "Hectares -> Square Meters:       type 1. " << endl;
                cout << "Hectares -> Square Kilometers:   type 2. " << endl;
                cout << "Hectares -> Square Centimeters:  type 3. " << endl;
                cout << "Hectares -> Square Millimeters:  type 4. " << endl;
                cout << "Hectares -> Square Feet:         type 5. " << endl;
                cout << "Hectares -> Square Inches:       type 6. " << endl;
                cout << "Hectares -> Acres:               type 7. " << endl;
                cout << "Hectares -> Square Yards:        type 8. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Hectares: ";
                        cin >> ha;
                        cout << "\n" << ha << " hectares = " << ha * 10000 << " square meters. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Hectares: ";
                        cin >> ha;
                        cout << "\n" << ha << " hectares = " << ha * 0.01 << " square kilometers. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Hectares: ";
                        cin >> ha;
                        cout << "\n" << ha << " hectares = " << ha * 100000000 << " square centimeters. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of Hectares: ";
                        cin >> ha;
                        cout << "\n" << ha << " hectares = " << ha * 10000000000 << " square millimeters. " << endl;
                        break;
                    case 5:
                        cout << "\nEnter number of Hectares: ";
                        cin >> ha;
                        cout << "\n" << ha << " hectares = " << ha * 107642.626 << " square feet. " << endl;
                        break;
                    case 6:
                        cout << "\nEnter number of Hectares: ";
                        cin >> ha;
                        cout << "\n" << ha << " hectares = " << ha * 15499070.055 << " square inches. " << endl;
                        break;
                    case 7:
                        cout << "\nEnter number of Hectares: ";
                        cin >> ha;
                        cout << "\n" << ha << " hectares = " << ha * 2.47105 << " acres. " << endl;
                        break;
                    case 8:
                        cout << "\nEnter number of Hectares: ";
                        cin >> ha;
                        cout << "\n" << ha << " hectares = " << ha * 11959.8939 << " square yards. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5 && choice!=6 &&
                       choice!=7 && choice!=8);
                break;
            case 8:
                cout << "Acres -> Square Meters:       type 1. " << endl;
                cout << "Acres -> Square Kilometers:   type 2. " << endl;
                cout << "Acres -> Square Centimeters:  type 3. " << endl;
                cout << "Acres -> Square Millimeters:  type 4. " << endl;
                cout << "Acres -> Square Feet:         type 5. " << endl;
                cout << "Acres -> Square Inches:       type 6. " << endl;
                cout << "Acres -> Hectares:            type 7. " << endl;
                cout << "Acres -> Square Yards:        type 8. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Acres: ";
                        cin >> ac;
                        cout << "\n" << ac << " acres = " << ac * 4046.856 << " square meters. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Acres: ";
                        cin >> ac;
                        cout << "\n" << ac << " acres = " << ac * 0.0040468 << " square kilometers. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Acres: ";
                        cin >> ac;
                        cout << "\n" << ac << " acres = " << ac * 40468561.19 << " square centimeters. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of Acres: ";
                        cin >> ac;
                        cout << "\n" << ac << " acres = " << ac * 4046856119 << " square millimeters. " << endl;
                        break;
                    case 5:
                        cout << "\nEnter number of Acres: ";
                        cin >> ac;
                        cout << "\n" << ac << " acres = " << ac * 43561.422 << " square feet. " << endl;
                        break;
                    case 6:
                        cout << "\nEnter number of Acres: ";
                        cin >> ac;
                        cout << "\n" << ac << " acres = " << ac * 6272250.64 << " square inches. " << endl;
                        break;
                    case 7:
                        cout << "\nEnter number of Acres: ";
                        cin >> ac;
                        cout << "\n" << ac << " acres = " << ac * 0.40468 << " hectares. " << endl;
                        break;
                    case 8:
                        cout << "\nEnter number of Acres: ";
                        cin >> ac;
                        cout << "\n" << ac << " acres = " << ac * 4839.996 << " square yards. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5 && choice!=6 &&
                       choice!=7 && choice!=8);
                break;
            case 9:
                cout << "Square Yards -> Square Meters:       type 1. " << endl;
                cout << "Square Yards -> Square Kilometers:   type 2. " << endl;
                cout << "Square Yards -> Square Centimeters:  type 3. " << endl;
                cout << "Square Yards -> Square Millimeters:  type 4. " << endl;
                cout << "Square Yards -> Square Feet:         type 5. " << endl;
                cout << "Square Yards -> Square Inches:       type 6. " << endl;
                cout << "Square Yards -> Hectares:            type 7. " << endl;
                cout << "Square Yards -> Acres:               type 8. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Square Yards: ";
                        cin >> sqyd;
                        cout << "\n" << sqyd << " square yards = " << sqyd * 0.836127 << " square meters. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Square Yards: ";
                        cin >> sqyd;
                        cout << "\n" << sqyd << " square yards = " << sqyd * 8.36127 << " square kilometers. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Square Yards: ";
                        cin >> sqyd;
                        cout << "\n" << sqyd << " square yards = " << sqyd * 8361.27 << " square centimeters. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of Square Yards: ";
                        cin >> sqyd;
                        cout << "\n" << sqyd << " square yards = " << sqyd * 836127.81 << " square millimeters. " << endl;
                        break;
                    case 5:
                        cout << "\nEnter number of Square Yards: ";
                        cin >> sqyd;
                        cout << "\n" << sqyd << " square yards = " << sqyd * 9.000299 << " square feet. " << endl;
                        break;
                    case 6:
                        cout << "\nEnter number of Square Yards: ";
                        cin >> sqyd;
                        cout << "\n" << sqyd << " square yards = " << sqyd * 1295.92 << " square inches. " << endl;
                        break;
                    case 7:
                        cout << "\nEnter number of Square Yards: ";
                        cin >> sqyd;
                        cout << "\n" << sqyd << " square yards = " << sqyd * 0.0000836 << " hectares. " << endl;
                        break;
                    case 8:
                        cout << "\nEnter number of Square Yards: ";
                        cin >> sqyd;
                        cout << "\n" << sqyd << " square yards = " << sqyd * 0.0002066 << " acres. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5 && choice!=6 &&
                       choice!=7 && choice!=8);
                break;
                default:
                    cout << "Incorrect input. " << endl;
                    break;
            }
        }
        while (unitToConvert!=1 && unitToConvert!=2 && unitToConvert!=3 &&
               unitToConvert!=4 && unitToConvert!=5 && unitToConvert!=6 &&
               unitToConvert!=7 && unitToConvert!=8 && unitToConvert!=9);
        break;
    case 3:
        cout << "\nVolume: \n";
        cout << "Select Unit To Convert: \n";
        cout << "For Liters                  type 1. " << endl;
        cout << "For Milliliters             type 2. " << endl;
        cout << "For Centiliters             type 3. " << endl;
        cout << "For Cubic Meters            type 4. " << endl;
        cout << "For Cubic Decimeters        type 5. " << endl;
        cout << "For Cubic Centimeters       type 6. " << endl;
        cout << "For Gallons                 type 7. " << endl;
        cout << endl;
        do
        {
            cin >> unitToConvert;
            switch (unitToConvert)
            {
            case 1:
                cout << "Liters -> Milliliters        type 1. " << endl;
                cout << "Liters -> Centiliters        type 2. " << endl;
                cout << "Liters -> Cubic Meters       type 3. " << endl;
                cout << "Liters -> Cubic Decimeters   type 4. " << endl;
                cout << "Liters -> Cubic Centimeters  type 5. " << endl;
                cout << "Liters -> Gallons            type 6. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Liters: ";
                        cin >> l;
                        cout << "\n" << l << " liters = " << l * 1000 << " milliliters. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Liters: ";
                        cin >> l;
                        cout << "\n" << l << " liters = " << l * 100 << " centiliters. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Liters: ";
                        cin >> l;
                        cout << "\n" << l << " liters = " << l * 0.001 << " cubic meters. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of Liters: ";
                        cin >> l;
                        cout << "\n" << l << " liters = " << l * 1 << " cubic decimeters. " << endl;
                        break;
                    case 5:
                        cout << "\nEnter number of Liters: ";
                        cin >> l;
                        cout << "\n" << l << " liters = " << l * 1000 << " cubic centimeters. " << endl;
                        break;
                    case 6:
                        cout << "\nEnter number of Liters: ";
                        cin >> l;
                        cout << "\n" << l << " liters = " << l * 0.2199 << " gallons. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5 && choice!=6);
                break;
            case 2:
                cout << "Milliliters -> Liters             type 1. " << endl;
                cout << "Milliliters -> Centiliters        type 2. " << endl;
                cout << "Milliliters -> Cubic Meters       type 3. " << endl;
                cout << "Milliliters -> Cubic Decimeters   type 4. " << endl;
                cout << "Milliliters -> Cubic Centimeters  type 5. " << endl;
                cout << "Milliliters -> Gallons            type 6. " << endl;
                cout << endl;
                do
                {
                   cin >> choice;
                   switch (choice)
                   {
                   case 1:
                        cout << "\nEnter number of Milliliters: ";
                        cin >> ml;
                        cout << "\n" << ml << " milliliters = " << ml * 0.001  << " liters. " << endl;
                    break;
                   case 2:
                        cout << "\nEnter number of Milliliters: ";
                        cin >> ml;
                        cout << "\n" << ml << " milliliters = " << ml * 0.1  << " centiliters. " << endl;
                    break;
                   case 3:
                        cout << "\nEnter number of Milliliters: ";
                        cin >> ml;
                        cout << "\n" << ml << "  milliliters = " << ml * 0.000001  << " cubic meters. " << endl;
                    break;
                   case 4:
                        cout << "\nEnter number of Milliliters: ";
                        cin >> ml;
                        cout << "\n" << ml << "  milliliters = " << ml * 0.001  << " cubic decimeters. " << endl;
                    break;
                   case 5:
                        cout << "\nEnter number of Milliliters: ";
                        cin >> ml;
                        cout << "\n" << ml << "  milliliters = " << ml * 1  << " cubic centimeters. " << endl;
                    break;
                   case 6:
                        cout << "\nEnter number of Milliliters: ";
                        cin >> ml;
                        cout << "\n" << ml << "  milliliters = " << ml * 0.0002199  << " gallons. " << endl;
                    break;
                    default:
                    cout << "Incorrect input. " << endl;
                    break;
                   }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5 && choice!=6);
                break;
            case 3:
                cout << "Centiliters -> Liters             type 1. " << endl;
                cout << "Centiliters -> Milliliters        type 2. " << endl;
                cout << "Centiliters -> Cubic Meters       type 3. " << endl;
                cout << "Centiliters -> Cubic Decimeters   type 4. " << endl;
                cout << "Centiliters -> Cubic Centimeters  type 5. " << endl;
                cout << "Centiliters -> Gallons            type 6. " << endl;
                cout << endl;
                do
                {
                   cin >> choice;
                   switch (choice)
                   {
                   case 1:
                        cout << "\nEnter number of Centiliters: ";
                        cin >> cl;
                        cout << "\n" << cl << " centiliters = " << cl * 0.01 << " liters. " << endl;
                    break;
                   case 2:
                       cout << "\nEnter number of Centiliters: ";
                        cin >> cl;
                        cout << "\n" << cl << " centiliters = " << cl * 10 << " milliliters. " << endl;
                    break;
                   case 3:
                       cout << "\nEnter number of Centiliters: ";
                        cin >> cl;
                        cout << "\n" << cl << " centiliters = " << cl * 0.00001 << " cubic meters. " << endl;
                    break;
                   case 4:
                       cout << "\nEnter number of Centiliters: ";
                        cin >> cl;
                        cout << "\n" << cl << " centiliters = " << cl * 0.01 << " cubic decimeters. " << endl;
                    break;
                   case 5:
                       cout << "\nEnter number of Centiliters: ";
                        cin >> cl;
                        cout << "\n" << cl << " centiliters = " << cl * 10 << " cubic centimeters. " << endl;
                    break;
                   case 6:
                       cout << "\nEnter number of Centiliters: ";
                        cin >> cl;
                        cout << "\n" << cl << " centiliters = " << cl * 0.002199 << " gallons. " << endl;
                    break;
                    default:
                    cout << "Incorrect input. " << endl;
                    break;
                   }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5 && choice!=6);
                break;
            case 4:
                cout << "Cubic Meters -> Liters             type 1. " << endl;
                cout << "Cubic Meters -> Milliliters        type 2. " << endl;
                cout << "Cubic Meters -> Centiliters        type 3. " << endl;
                cout << "Cubic Meters -> Cubic Decimeters   type 4. " << endl;
                cout << "Cubic Meters -> Cubic Centimeters  type 5. " << endl;
                cout << "Cubic Meters -> Gallons            type 6. " << endl;
                cout << endl;
                do
                {
                   cin >> choice;
                   switch (choice)
                   {
                   case 1:
                       cout << "\nEnter number of Cubic Meters: ";
                        cin >> cubem;
                        cout << "\n" << cubem << " cubic meters = " << cubem * 1000 << " liters. " << endl;
                    break;
                   case 2:
                       cout << "\nEnter number of Cubic Meters: ";
                        cin >> cubem;
                        cout << "\n" << cubem << " cubic meters = " << cubem * 1000000 << " milliliters. " << endl;
                    break;
                   case 3:
                       cout << "\nEnter number of Cubic Meters: ";
                        cin >> cubem;
                        cout << "\n" << cubem << " cubic meters = " << cubem * 100000 << " centiliters. " << endl;
                    break;
                   case 4:
                       cout << "\nEnter number of Cubic Meters: ";
                        cin >> cubem;
                        cout << "\n" << cubem << " cubic meters = " << cubem * 1000 << " cubic decimeters. " << endl;
                    break;
                   case 5:
                       cout << "\nEnter number of Cubic Meters: ";
                        cin >> cubem;
                        cout << "\n" << cubem << " cubic meters = " << cubem * 1000000 << " cubic centimeters. " << endl;
                    break;
                   case 6:
                       cout << "\nEnter number of Cubic Meters: ";
                        cin >> cubem;
                        cout << "\n" << cubem << " cubic meters = " << cubem * 219.97 << " gallons. " << endl;
                    break;
                    default:
                    cout << "Incorrect input. " << endl;
                    break;
                   }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5 && choice!=6);
                break;
            case 5:
                cout << "Cubic Decimeters -> Liters             type 1. " << endl;
                cout << "Cubic Decimeters -> Milliliters        type 2. " << endl;
                cout << "Cubic Decimeters -> Centiliters        type 3. " << endl;
                cout << "Cubic Decimeters -> Cubic Meters       type 4. " << endl;
                cout << "Cubic Decimeters -> Cubic Centimeters  type 5. " << endl;
                cout << "Cubic Decimeters -> Gallons            type 6. " << endl;
                cout << endl;
                do
                {
                   cin >> choice;
                   switch (choice)
                   {
                   case 1:
                       cout << "\nEnter number of Cubic Decimeters: ";
                        cin >> cubedm;
                        cout << "\n" << cubedm << " cubic decimeters = " << cubedm * 1 << " liters. " << endl;
                    break;
                   case 2:
                       cout << "\nEnter number of Cubic Decimeters: ";
                        cin >> cubedm;
                        cout << "\n" << cubedm << " cubic decimeters = " << cubedm * 1000 << " milliliters. " << endl;
                    break;
                   case 3:
                       cout << "\nEnter number of Cubic Decimeters: ";
                        cin >> cubedm;
                        cout << "\n" << cubedm << " cubic decimeters = " << cubedm * 100 << " centiliters. " << endl;
                    break;
                   case 4:
                       cout << "\nEnter number of Cubic Decimeters: ";
                        cin >> cubedm;
                        cout << "\n" << cubedm << " cubic decimeters = " << cubedm * 0.001 << " cubic meters. " << endl;
                    break;
                   case 5:
                       cout << "\nEnter number of Cubic Decimeters: ";
                        cin >> cubedm;
                        cout << "\n" << cubedm << " cubic decimeters = " << cubedm * 1000 << " cubic centimeters. " << endl;
                    break;
                   case 6:
                       cout << "\nEnter number of Cubic Decimeters: ";
                        cin >> cubedm;
                        cout << "\n" << cubedm << " cubic decimeters = " << cubedm * 0.2199 << " gallons. " << endl;
                    break;
                    default:
                    cout << "Incorrect input. " << endl;
                    break;
                   }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5 && choice!=6);
                break;
            case 6:
                cout << "Cubic Centimeters -> Liters            type 1. " << endl;
                cout << "Cubic Centimeters -> Milliliters       type 2. " << endl;
                cout << "Cubic Centimeters -> Centiliters       type 3. " << endl;
                cout << "Cubic Centimeters -> Cubic Meters      type 4. " << endl;
                cout << "Cubic Centimeters -> Cubic Decimeters  type 5. " << endl;
                cout << "Cubic Centimeters -> Gallons           type 6. " << endl;
                cout << endl;
                do
                {
                   cin >> choice;
                   switch (choice)
                   {
                   case 1:
                       cout << "\nEnter number of Cubic Centimeters: ";
                        cin >> cubecm;
                        cout << "\n" << cubecm << " cubic centimeters = " << cubecm * 0.001 << " liters. " << endl;
                    break;
                   case 2:
                       cout << "\nEnter number of Cubic Centimeters: ";
                        cin >> cubecm;
                        cout << "\n" << cubecm << " cubic centimeters = " << cubecm * 1 << " milliliters. " << endl;
                    break;
                   case 3:
                       cout << "\nEnter number of Cubic Centimeters: ";
                        cin >> cubecm;
                        cout << "\n" << cubecm << " cubic centimeters = " << cubecm * 0.1 << " centiliters. " << endl;
                    break;
                   case 4:
                       cout << "\nEnter number of Cubic Centimeters: ";
                        cin >> cubecm;
                        cout << "\n" << cubecm << " cubic centimeters = " << cubecm * 0.000001 << " cubic meters. " << endl;
                    break;
                   case 5:
                       cout << "\nEnter number of Cubic Centimeters: ";
                        cin >> cubecm;
                        cout << "\n" << cubecm << " cubic centimeters = " << cubecm * 0.001 << " cubic decimeters. " << endl;
                    break;
                   case 6:
                       cout << "\nEnter number of Cubic Centimeters: ";
                        cin >> cubecm;
                        cout << "\n" << cubecm << " cubic centimeters = " << cubecm * 0.0002199 << " gallons. " << endl;
                    break;
                    default:
                    cout << "Incorrect input. " << endl;
                    break;
                   }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5 && choice!=6);
                break;
            case 7:
                cout << "Gallons -> Liters             type 1. " << endl;
                cout << "Gallons -> Milliliters        type 2. " << endl;
                cout << "Gallons -> Centiliters        type 3. " << endl;
                cout << "Gallons -> Cubic Meters       type 4. " << endl;
                cout << "Gallons -> Cubic Decimeters   type 5. " << endl;
                cout << "Gallons -> Cubic Centimeters  type 6. " << endl;
                cout << endl;
                do
                {
                   cin >> choice;
                   switch (choice)
                   {
                   case 1:
                       cout << "\nEnter number of Gallons: ";
                        cin >> gal;
                        cout << "\n" << gal << " gallons = " << gal * 4.5459 << " liters. " << endl;
                    break;
                   case 2:
                       cout << "\nEnter number of Gallons: ";
                        cin >> gal;
                        cout << "\n" << gal << " gallons = " << gal * 4546 << " milliliters. " << endl;
                    break;
                   case 3:
                       cout << "\nEnter number of Gallons: ";
                        cin >> gal;
                        cout << "\n" << gal << " gallons = " << gal * 454.59 << " centiliters. " << endl;
                    break;
                   case 4:
                       cout << "\nEnter number of Gallons: ";
                        cin >> gal;
                        cout << "\n" << gal << " gallons = " << gal * 0.004546 << " cubic meters. " << endl;
                    break;
                   case 5:
                       cout << "\nEnter number of Gallons: ";
                        cin >> gal;
                        cout << "\n" << gal << " gallons = " << gal * 4.5459 << " cubic decimeters. " << endl;
                    break;
                   case 6:
                       cout << "\nEnter number of Gallons: ";
                        cin >> gal;
                        cout << "\n" << gal << " gallons = " << gal * 4546 << " cubic centimeters. " << endl;
                    break;
                    default:
                    cout << "Incorrect input. " << endl;
                    break;
                   }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5 && choice!=6);
                break;
                default:
                    cout << "Incorrect input. " << endl;
                    break;
            }
        }
        while (unitToConvert!=1 && unitToConvert!=2 && unitToConvert!=3 &&
               unitToConvert!=4 && unitToConvert!=5 && unitToConvert!=6 &&
               unitToConvert!=7);
        break;
    case 4:
        cout << "\nTime: \n";
        cout << "Select Unit To Convert: \n";
        cout << "For Seconds  type 1. " << endl;
        cout << "For Minutes  type 2. " << endl;
        cout << "For Hours    type 3. " << endl;
        cout << "For Days     type 4. " << endl;
        cout << "For Months   type 5. " << endl;
        cout << "For Years    type 6. " << endl;
        cout << endl;
        do
        {
            cin >> unitToConvert;
            switch (unitToConvert)
            {
            case 1:
                cout << "Seconds -> Minutes  type 1. " << endl;
                cout << "Seconds -> Hours    type 2. " << endl;
                cout << "Seconds -> Days     type 3. " << endl;
                cout << "Seconds -> Months   type 4. " << endl;
                cout << "Seconds -> Years    type 5. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Seconds: ";
                        cin >> time;
                        cout << "\n" << time << " seconds = " << time * 0.016667 << " minutes. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Seconds: ";
                        cin >> time;
                        cout << "\n" << time << " seconds = " << time * 0.000278 << " hours. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Seconds: ";
                        cin >> time;
                        cout << "\n" << time << " seconds = " << time * 0.000012 << " days. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of Seconds: ";
                        cin >> time;
                        cout << "\n" << time << " seconds = " << time * 3.87e-7 << " months. " << endl;
                        break;
                    case 5:
                        cout << "\nEnter number of Seconds: ";
                        cin >> time;
                        cout << "\n" << time << " seconds = " << time * 3.37e-8 << " years. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5);
                break;
            case 2:
                cout << "Minutes -> Seconds  type 1. " << endl;
                cout << "Minutes -> Hours    type 2. " << endl;
                cout << "Minutes -> Days     type 3. " << endl;
                cout << "Minutes -> Months   type 4. " << endl;
                cout << "Minutes -> Years    type 5. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Minutes: ";
                        cin >> time;
                        cout << "\n" << time << " minutes = " << time * 60 << " seconds. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Minutes: ";
                        cin >> time;
                        cout << "\n" << time << " minutes = " << time * 0.016667 << " hours. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Minutes: ";
                        cin >> time;
                        cout << "\n" << time << " minutes = " << time * 0.000694 << " days. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of Minutes: ";
                        cin >> time;
                        cout << "\n" << time << " minutes = " << time * 0.000023 << " months. " << endl;
                        break;
                    case 5:
                        cout << "\nEnter number of Minutes: ";
                        cin >> time;
                        cout << "\n" << time << " minutes = " << time * 0.000002 << " years. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5);
                break;
            case 3:
                cout << "Hours -> Seconds  type 1. " << endl;
                cout << "Hours -> Minutes  type 2. " << endl;
                cout << "Hours -> Days     type 3. " << endl;
                cout << "Hours -> Months   type 4. " << endl;
                cout << "Hours -> Years    type 5. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of hours: ";
                        cin >> time;
                        cout << "\n" << time << " hours = " << time * 3600 << " seconds. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of hours: ";
                        cin >> time;
                        cout << "\n" << time << " hours = " << time * 60 << " minutes. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of hours: ";
                        cin >> time;
                        cout << "\n" << time << " hours = " << time * 0.041667 << " days. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of hours: ";
                        cin >> time;
                        cout << "\n" << time << " hours = " << time * 0.00137 << " months. " << endl;
                        break;
                    case 5:
                        cout << "\nEnter number of hours: ";
                        cin >> time;
                        cout << "\n" << time << " hours = " << time * 0.000114 << " years. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5);
                break;
            case 4:
                cout << "Days -> Seconds  type 1. " << endl;
                cout << "Days -> Minutes  type 2. " << endl;
                cout << "Days -> Hours    type 3. " << endl;
                cout << "Days -> Months   type 4. " << endl;
                cout << "Days -> Years    type 5. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Days: ";
                        cin >> time;
                        cout << "\n" << time << " days = " << time * 86400 << " seconds. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Days: ";
                        cin >> time;
                        cout << "\n" << time << " days = " << time * 1440 << " minutes. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Days: ";
                        cin >> time;
                        cout << "\n" << time << " days = " << time * 24 << " hours. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of Days: ";
                        cin >> time;
                        cout << "\n" << time << " days = " << time * 0.032877 << " months. " << endl;
                        break;
                    case 5:
                        cout << "\nEnter number of Days: ";
                        cin >> time;
                        cout << "\n" << time << " days = " << time * 0.00274 << " years. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5);
                break;
            case 5:
                cout << "Months -> Seconds  type 1. " << endl;
                cout << "Months -> Minutes  type 2. " << endl;
                cout << "Months -> Hours    type 3. " << endl;
                cout << "Months -> Days     type 4. " << endl;
                cout << "Months -> Years    type 5. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Months: ";
                        cin >> time;
                        cout << "\n" << time << " months = " << time * 2628000 << " seconds. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Months: ";
                        cin >> time;
                        cout << "\n" << time << " months = " << time * 43800 << " minutes. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Months: ";
                        cin >> time;
                        cout << "\n" << time << " months = " << time * 730 << " hours. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of Months: ";
                        cin >> time;
                        cout << "\n" << time << " months = " << time * 30 << " days. " << endl;
                        break;
                    case 5:
                        cout << "\nEnter number of Months: ";
                        cin >> time;
                        cout << "\n" << time << " months = " << time * 0.083333 << " years. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5);
                break;
            case 6:
                cout << "Years -> Seconds  type 1. " << endl;
                cout << "Years -> Minutes  type 2. " << endl;
                cout << "Years -> Hours    type 3. " << endl;
                cout << "Years -> Days     type 4. " << endl;
                cout << "Years -> Months   type 5. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Years: ";
                        cin >> time;
                        cout << "\n" << time << " years = " << time * 31536000 << " seconds. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Years: ";
                        cin >> time;
                        cout << "\n" << time << " years = " << time * 525600 << " minutes. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Years: ";
                        cin >> time;
                        cout << "\n" << time << " years = " << time * 8760 << " hours. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of Years: ";
                        cin >> time;
                        cout << "\n" << time << " years = " << time * 365 << " days. " << endl;
                        break;
                    case 5:
                        cout << "\nEnter number of Years: ";
                        cin >> time;
                        cout << "\n" << time << " years = " << time * 12 << " months. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5);
                break;
                default:
                    cout << "Incorrect input. " << endl;
                    break;
            }
        }
        while (unitToConvert!=1 && unitToConvert!=2 && unitToConvert!=3 &&
               unitToConvert!=4 && unitToConvert!=5 && unitToConvert!=6);
        break;
    case 5:
        cout << "\nSpeed: \n";
        cout << "Select Unit To Convert: \n";
        cout << "For Meters/Second            type 1. " << endl;
        cout << "For Kilometers/Hour          type 2. " << endl;
        cout << "For Centimeters/Minute       type 3. " << endl;
        cout << "For Miles/Hour               type 4. " << endl;
        cout << "For Feet/Second              type 5. " << endl;
        cout << "For Knots                    type 6. " << endl;
        cout << endl;
        do
        {
            cin >> unitToConvert;
            switch (unitToConvert)
            {
            case 1:
                cout << "m/s -> Km/h    type 1. " << endl;
                cout << "m/s -> Cm/min  type 2. " << endl;
                cout << "m/s -> mph     type 3. " << endl;
                cout << "m/s -> ft/s    type 4. " << endl;
                cout << "m/s -> Kn      type 5. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of m/s: ";
                        cin >> speed;
                        cout << "\n" << speed << " m/s = " << speed * 3.6 << " km/h. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of m/s: ";
                        cin >> speed;
                        cout << "\n" << speed << " m/s = " << speed * 6000 << " cm/min. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of m/s: ";
                        cin >> speed;
                        cout << "\n" << speed << " m/s = " << speed * 2.236936 << " mph. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of m/s: ";
                        cin >> speed;
                        cout << "\n" << speed << " m/s = " << speed * 3.28084 << " ft/s. " << endl;
                        break;
                    case 5:
                        cout << "\nEnter number of m/s: ";
                        cin >> speed;
                        cout << "\n" << speed << " m/s = " << speed * 1.943844 << " kn. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5);
                break;
            case 2:
                cout << "Km/h -> m/s     type 1. " << endl;
                cout << "Km/h -> Cm/min  type 2. " << endl;
                cout << "Km/h -> mph     type 3. " << endl;
                cout << "Km/h -> ft/s    type 4. " << endl;
                cout << "Km/h -> Kn      type 5. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of km/h: ";
                        cin >> speed;
                        cout << "\n" << speed << " km/h = " << speed * 0.277778 << " m/s. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of km/h: ";
                        cin >> speed;
                        cout << "\n" << speed << " km/h = " << speed * 1666.666667 << " cm/min. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of km/h: ";
                        cin >> speed;
                        cout << "\n" << speed << " km/h = " << speed * 0.621371 << " mph. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of km/h: ";
                        cin >> speed;
                        cout << "\n" << speed << " km/h = " << speed * 0.911344 << " ft/s. " << endl;
                        break;
                    case 5:
                        cout << "\nEnter number of km/h: ";
                        cin >> speed;
                        cout << "\n" << speed << " km/h = " << speed * 0.539957 << " kn. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5);
                break;
            case 3:
                cout << "Cm/min -> m/s   type 1. " << endl;
                cout << "Cm/min -> Km/h  type 2. " << endl;
                cout << "Cm/min -> mph   type 3. " << endl;
                cout << "Cm/min -> ft/s  type 4. " << endl;
                cout << "Cm/min -> Kn    type 5. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of cm/min: ";
                        cin >> speed;
                        cout << "\n" << speed << " cm/min = " << speed * 0.000167 << " m/s. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of cm/min: ";
                        cin >> speed;
                        cout << "\n" << speed << " cm/min = " << speed * 0.0006 << " km/h. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of cm/min: ";
                        cin >> speed;
                        cout << "\n" << speed << " cm/min = " << speed * 0.000373 << " mph. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of cm/min: ";
                        cin >> speed;
                        cout << "\n" << speed << " cm/min = " << speed * 0.000547 << " ft/s. " << endl;
                        break;
                    case 5:
                        cout << "\nEnter number of cm/min: ";
                        cin >> speed;
                        cout << "\n" << speed << " cm/min = " << speed * 0.000324 << " kn. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5);
                break;
            case 4:
                cout << "mph -> m/s     type 1. " << endl;
                cout << "mph -> Km/h    type 2. " << endl;
                cout << "mph -> Cm/min  type 3. " << endl;
                cout << "mph -> ft/s    type 4. " << endl;
                cout << "mph -> Kn      type 5. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of mph: ";
                        cin >> speed;
                        cout << "\n" << speed << " mph = " << speed * 0.44704 << " m/s. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of mph: ";
                        cin >> speed;
                        cout << "\n" << speed << " mph = " << speed * 1.609344 << " km/h. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of mph: ";
                        cin >> speed;
                        cout << "\n" << speed << " mph = " << speed * 2682.24 << " cm/min. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of mph: ";
                        cin >> speed;
                        cout << "\n" << speed << " mph = " << speed * 1.466667 << " ft/s. " << endl;
                        break;
                    case 5:
                        cout << "\nEnter number of mph: ";
                        cin >> speed;
                        cout << "\n" << speed << " mph = " << speed * 0.868976 << " kn. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5);
                break;
            case 5:
                cout << "ft/s -> m/s     type 1. " << endl;
                cout << "ft/s -> Km/h    type 2. " << endl;
                cout << "ft/s -> Cm/min  type 3. " << endl;
                cout << "ft/s -> mph     type 4. " << endl;
                cout << "ft/s -> Kn      type 5. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of ft/s: ";
                        cin >> speed;
                        cout << "\n" << speed << " ft/s = " << speed * 0.3048 << " m/s. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of ft/s: ";
                        cin >> speed;
                        cout << "\n" << speed << " ft/s = " << speed * 1.09728 << " km/h. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of ft/s: ";
                        cin >> speed;
                        cout << "\n" << speed << " ft/s = " << speed * 1828.8 << " cm/min. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of ft/s: ";
                        cin >> speed;
                        cout << "\n" << speed << " ft/s = " << speed * 0.681818 << " mph. " << endl;
                        break;
                    case 5:
                        cout << "\nEnter number of ft/s: ";
                        cin >> speed;
                        cout << "\n" << speed << " ft/s = " << speed * 0.592484 << " kn. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5);
                break;
            case 6:
                cout << "Kn -> m/s     type 1. " << endl;
                cout << "Kn -> Km/h    type 2. " << endl;
                cout << "Kn -> Cm/min  type 3. " << endl;
                cout << "Kn -> mph     type 4. " << endl;
                cout << "Kn -> ft/s    type 5. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of kn: ";
                        cin >> speed;
                        cout << "\n" << speed << " kn = " << speed * 0.514444 << " m/s. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of kn: ";
                        cin >> speed;
                        cout << "\n" << speed << " kn = " << speed * 1.852 << " km/h. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of kn: ";
                        cin >> speed;
                        cout << "\n" << speed << " kn = " << speed * 3086.666667 << " cm/min. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of kn: ";
                        cin >> speed;
                        cout << "\n" << speed << " kn = " << speed * 1.150779 << " mph. " << endl;
                        break;
                    case 5:
                        cout << "\nEnter number of kn: ";
                        cin >> speed;
                        cout << "\n" << speed << " kn = " << speed * 1.68781 << " ft/s. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5);
                break;
                default:
                    cout << "Incorrect input. " << endl;
                    break;
            }
        }
        while (unitToConvert!=1 && unitToConvert!=2 && unitToConvert!=3 &&
               unitToConvert!=4 && unitToConvert!=5 && unitToConvert!=6);
        break;
    case 6:
        cout << "\nTemperature: \n";
        cout << "Select Unit To Convert: \n";
        cout << "For Celsius          type 1. " << endl;
        cout << "For Fahrenheit       type 2. " << endl;
        cout << "For Kelvin           type 3. " << endl;
        cout << "For Rankine          type 4. " << endl;
        cout << endl;
        do
        {
            cin >> unitToConvert;
            switch (unitToConvert)
            {
            case 1:
                cout << "Celsius -> Fahrenheit  type 1. " << endl;
                cout << "Celsius -> Kelvin      type 2. " << endl;
                cout << "Celsius -> Rankine     type 3. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Degrees Celsius: ";
                        cin >> degrees;
                        cout << "\n" << degrees << " Celsius = " << degrees * 33.8 << " Fahrenheit. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Degrees Celsius: ";
                        cin >> degrees;
                        cout << "\n" << degrees << " Celsius = " << degrees * 274.15 << " Kelvin. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Degrees Celsius: ";
                        cin >> degrees;
                        cout << "\n" << degrees << " Celsius = " << degrees * 493.47 << " Rankine. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3);
                break;
            case 2:
                cout << "Fahrenheit -> Celsius  type 1. " << endl;
                cout << "Fahrenheit -> Kelvin   type 2. " << endl;
                cout << "Fahrenheit -> Rankine  type 3. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Degrees Fahrenheit: ";
                        cin >> degrees;
                        cout << "\n" << degrees << " Fahrenheit = " << degrees * -17.22 << " Celsius. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Degrees Fahrenheit: ";
                        cin >> degrees;
                        cout << "\n" << degrees << " Fahrenheit = " << degrees * 255.927 << " Kelvin. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Degrees Fahrenheit: ";
                        cin >> degrees;
                        cout << "\n" << degrees << " Fahrenheit = " << degrees * 460.67 << " Rankine. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3);
                break;
            case 3:
                cout << "Kelvin -> Celsius     type 1. " << endl;
                cout << "Kelvin -> Fahrenheit  type 2. " << endl;
                cout << "Kelvin -> Rankine     type 3. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Degrees Kelvin: ";
                        cin >> degrees;
                        cout << "\n" << degrees << " Kelvin = " << degrees * -272.15 << " Celsius. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Degrees Kelvin: ";
                        cin >> degrees;
                        cout << "\n" << degrees << " Kelvin = " << degrees * -457.87 << " Fahrenheit. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Degrees Kelvin: ";
                        cin >> degrees;
                        cout << "\n" << degrees << " Kelvin = " << degrees * 1.8 << " Rankine. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3);
                break;
            case 4:
                cout << "Rankine -> Celsius     type 1. " << endl;
                cout << "Rankine -> Fahrenheit  type 2. " << endl;
                cout << "Rankine -> Kelvin      type 3. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Degrees Rankine: ";
                        cin >> degrees;
                        cout << "\n" << degrees << " Rankine = " << degrees * -272.59 << " Celsius. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Degrees Rankine: ";
                        cin >> degrees;
                        cout << "\n" << degrees << " Rankine = " << degrees * -458.66 << " Fahrenheit. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Degrees Rankine: ";
                        cin >> degrees;
                        cout << "\n" << degrees << " Rankine = " << degrees * 0.55 << " Kelvin. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3);
                break;
                default:
                    cout << "Incorrect input. " << endl;
                    break;
            }
        }
        while (unitToConvert!=1 && unitToConvert!=2 && unitToConvert!=3 &&
               unitToConvert!=4);
        break;
    case 7:
        cout << "\nLength: \n";
        cout << "Select Unit To Convert: \n";
        cout << "For Meters           type 1. " << endl;
        cout << "For Kilometers       type 2. " << endl;
        cout << "For Centimeters      type 3. " << endl;
        cout << "For Inches           type 4. " << endl;
        cout << "For Feet             type 5. " << endl;
        cout << "For Yards            type 6. " << endl;
        do
        {
            cin >> unitToConvert;
            switch (unitToConvert)
            {
            case 1:
                cout << "Meters -> Kilometers   type 1. " << endl;
                cout << "Meters -> Centimeters  type 2. " << endl;
                cout << "Meters -> Inches       type 3. " << endl;
                cout << "Meters -> Feet         type 4. " << endl;
                cout << "Meters -> Yards        type 5. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Meters: ";
                        cin >> length;
                        cout << "\n" << length << " meters = " << length * 0.001 << " kilometers. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Meters: ";
                        cin >> length;
                        cout << "\n" << length << " meters = " << length * 100 << " centimeters. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Meters: ";
                        cin >> length;
                        cout << "\n" << length << " meters = " << length * 39.37 << " inches. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of Meters: ";
                        cin >> length;
                        cout << "\n" << length << " meters = " << length * 3.28 << " feet. " << endl;
                        break;
                    case 5:
                        cout << "\nEnter number of Meters: ";
                        cin >> length;
                        cout << "\n" << length << " meters = " << length * 1.093 << " yards. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5);
                break;
            case 2:
                cout << "Kilometers -> Meters       type 1. " << endl;
                cout << "Kilometers -> Centimeters  type 2. " << endl;
                cout << "Kilometers -> Inches       type 3. " << endl;
                cout << "Kilometers -> Feet         type 4. " << endl;
                cout << "Kilometers -> Yards        type 5. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Kilometers: ";
                        cin >> length;
                        cout << "\n" << length << " kilometers = " << length * 1000 << " meters. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Kilometers: ";
                        cin >> length;
                        cout << "\n" << length << " kilometers = " << length * 100000 << " centimeters. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Kilometers: ";
                        cin >> length;
                        cout << "\n" << length << " kilometers = " << length * 39370.07 << " inches. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of Kilometers: ";
                        cin >> length;
                        cout << "\n" << length << " kilometers = " << length * 3280.83 << " feet. " << endl;
                        break;
                    case 5:
                        cout << "\nEnter number of Kilometers: ";
                        cin >> length;
                        cout << "\n" << length << " kilometers = " << length * 1093.61 << " yards. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5);
                break;
            case 3:
                cout << "Centimeters -> Meters      type 1. " << endl;
                cout << "Centimeters -> Kilometers  type 2. " << endl;
                cout << "Centimeters -> Inches      type 3. " << endl;
                cout << "Centimeters -> Feet        type 4. " << endl;
                cout << "Centimeters -> Yards       type 5. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Centimeters: ";
                        cin >> length;
                        cout << "\n" << length << " centimeters = " << length * 0.001 << " meters. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Centimeters: ";
                        cin >> length;
                        cout << "\n" << length << " centimeters = " << length * 0.00001 << " kilometers. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Centimeters: ";
                        cin >> length;
                        cout << "\n" << length << " centimeters = " << length * 0.3937 << " inches. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of Centimeters: ";
                        cin >> length;
                        cout << "\n" << length << " centimeters = " << length * 0.0328 << " feet. " << endl;
                        break;
                    case 5:
                        cout << "\nEnter number of Centimeters: ";
                        cin >> length;
                        cout << "\n" << length << " centimeters = " << length * 0.01093 << " yards. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5);
                break;
            case 4:
                cout << "Inches -> Meters       type 1. " << endl;
                cout << "Inches -> Kilometers   type 2. " << endl;
                cout << "Inches -> Centimeters  type 3. " << endl;
                cout << "Inches -> Feet         type 4. " << endl;
                cout << "Inches -> Yards        type 5. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Inches: ";
                        cin >> length;
                        cout << "\n" << length << " inches = " << length * 0.0254 << " meters. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Inches: ";
                        cin >> length;
                        cout << "\n" << length << " inches = " << length * 0.0000254 << " kilometers. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Inches: ";
                        cin >> length;
                        cout << "\n" << length << " inches = " << length * 2.54 << " centimeters. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of Inches: ";
                        cin >> length;
                        cout << "\n" << length << " inches = " << length * 0.084 << " feet. " << endl;
                        break;
                    case 5:
                        cout << "\nEnter number of Inches: ";
                        cin >> length;
                        cout << "\n" << length << " inches = " << length * 0.0277 << " yards. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5);
                break;
            case 5:
                cout << "Feet -> Meters       type 1. " << endl;
                cout << "Feet -> Kilometers   type 2. " << endl;
                cout << "Feet -> Centimeters  type 3. " << endl;
                cout << "Feet -> Inches       type 4. " << endl;
                cout << "Feet -> Yards        type 5. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Feet: ";
                        cin >> length;
                        cout << "\n" << length << " feet = " << length * 0.3048 << " meters. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Feet: ";
                        cin >> length;
                        cout << "\n" << length << " feet = " << length * 0.0003048 << " kilometers. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Feet: ";
                        cin >> length;
                        cout << "\n" << length << " feet = " << length * 30.48 << " centimeters. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of Feet: ";
                        cin >> length;
                        cout << "\n" << length << " feet = " << length * 12 << " inches. " << endl;
                        break;
                    case 5:
                        cout << "\nEnter number of Feet: ";
                        cin >> length;
                        cout << "\n" << length << " feet = " << length * 0.33 << " yards. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5);
                break;
            case 6:
                cout << "Yards -> Meters       type 1. " << endl;
                cout << "Yards -> Kilometers   type 2. " << endl;
                cout << "Yards -> Centimeters  type 3. " << endl;
                cout << "Yards -> Inches       type 4. " << endl;
                cout << "Yards -> Feet         type 5. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Yards: ";
                        cin >> length;
                        cout << "\n" << length << " yards = " << length * 0.9144 << " meters. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Yards: ";
                        cin >> length;
                        cout << "\n" << length << " yards = " << length * 0.0009144 << " kilometers. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Yards: ";
                        cin >> length;
                        cout << "\n" << length << " yards = " << length * 91.44 << " centimeters. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of Yards: ";
                        cin >> length;
                        cout << "\n" << length << " yards = " << length * 36 << " inches. " << endl;
                        break;
                    case 5:
                        cout << "\nEnter number of Yards: ";
                        cin >> length;
                        cout << "\n" << length << " yards = " << length * 3 << " feet. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5);
                break;
                default:
                    cout << "Incorrect input. " << endl;
                    break;
            }
        }
        while (unitToConvert!=1 && unitToConvert!=2 && unitToConvert!=3 &&
               unitToConvert!=4 && unitToConvert!=5 && unitToConvert!=6);
        break;
    case 8:
        cout << "\nEnergy: \n";
        cout << "Select Unit To Convert: \n";
        cout << "For Joules                  type 1. " << endl;
        cout << "For Kilojoules              type 2. " << endl;
        cout << "For Calories                type 3. " << endl;
        cout << "For Kilo calories           type 4. " << endl;
        cout << "For Foot*Pound Force        type 5. " << endl;
        do
        {
            cin >> unitToConvert;
            switch (unitToConvert)
            {
            case 1:
                cout << "Joules -> Kilojoules        type 1. " << endl;
                cout << "Joules -> Calories          type 2. " << endl;
                cout << "Joules -> Kilocalories     type 3. " << endl;
                cout << "Joules -> Foot*Pound Force  type 4. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Joules: ";
                        cin >> energy;
                        cout << "\n" << energy << " joules = " << energy * 0.001 << " kilojoules. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Joules: ";
                        cin >> energy;
                        cout << "\n" << energy << " joules = " << energy * 0.23845 << " calories. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Joules: ";
                        cin >> energy;
                        cout << "\n" << energy << " joules = " << energy * 0.000238 << " kilocalories. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of Joules: ";
                        cin >> energy;
                        cout << "\n" << energy << " joules = " << energy * 0.737562 << " Foot*Pound Force. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4);
                break;
            case 2:
                cout << "Kilojoules -> Joules            type 1. " << endl;
                cout << "Kilojoules -> Calories          type 2. " << endl;
                cout << "Kilojoules -> Kilocalories     type 3. " << endl;
                cout << "Kilojoules -> Foot*Pound Force  type 4. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Kilojoules: ";
                        cin >> energy;
                        cout << "\n" << energy << " kilojoules = " << energy * 1000 << " Joules. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Kilojoules: ";
                        cin >> energy;
                        cout << "\n" << energy << " kilojoules = " << energy * 238.845897 << " calories. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Kilojoules: ";
                        cin >> energy;
                        cout << "\n" << energy << " kilojoules = " << energy * 0.238846 << " kilocalories. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of Kilojoules: ";
                        cin >> energy;
                        cout << "\n" << energy << " kilojoules = " << energy * 737.562149 << " Foot*Pound Force. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4);
                break;
            case 3:
                cout << "Calories -> Joules            type 1. " << endl;
                cout << "Calories -> Kilojoules        type 2. " << endl;
                cout << "Calories -> Kilocalories     type 3. " << endl;
                cout << "Calories -> Foot*Pound Force  type 4. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Calories: ";
                        cin >> energy;
                        cout << "\n" << energy << " calories = " << energy * 4.1868 << " Joules. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Calories: ";
                        cin >> energy;
                        cout << "\n" << energy << " calories = " << energy * 0.004187 << " kilojoules. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Calories: ";
                        cin >> energy;
                        cout << "\n" << energy << " calories = " << energy * 0.001 << " kilocalories. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of Calories: ";
                        cin >> energy;
                        cout << "\n" << energy << " calories = " << energy * 3.088025 << " Foor*Pound Force. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4);
                break;
            case 4:
                cout << "Kilocalories -> Joules            type 1. " << endl;
                cout << "Kilocalories -> Kilojoules        type 2. " << endl;
                cout << "Kilocalories -> Calories          type 3. " << endl;
                cout << "Kilocalories -> Foor*Pound Force  type 4. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Kilocalories: ";
                        cin >> energy;
                        cout << "\n" << energy << " kilocalories = " << energy * 4186.8 << " Joules. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Kilocalories: ";
                        cin >> energy;
                        cout << "\n" << energy << " kilocalories = " << energy * 4.1868 << " kilojoules. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Kilocalories: ";
                        cin >> energy;
                        cout << "\n" << energy << " kilocalories = " << energy * 1000 << " calories. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of Kilocalories: ";
                        cin >> energy;
                        cout << "\n" << energy << " kilocalories = " << energy * 3088.025207 << " Foot*Pound Force. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4);
                break;
            case 5:
                cout << "Foot*Pound Force -> Joules         type 1. " << endl;
                cout << "Foot*Pound Force -> Kilojoules     type 2. " << endl;
                cout << "Foot*Pound Force -> Calories       type 3. " << endl;
                cout << "Foot*Pound Force -> Kilocalories  type 4. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Foot*Pound Force: ";
                        cin >> energy;
                        cout << "\n" << energy << " Foot*Pound Force = " << energy * 1.355818 << " Joules. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Foot*Pound Force: ";
                        cin >> energy;
                        cout << "\n" << energy << " Foot*Pound Force = " << energy * 0.001356 << " kilojoules. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Foot*Pound Force: ";
                        cin >> energy;
                        cout << "\n" << energy << " Foot*Pound Force = " << energy * 0.323832 << " calories. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of Foot*Pound Force: ";
                        cin >> energy;
                        cout << "\n" << energy << " Foot*Pound Force = " << energy * 0.000324 << " kilocalories. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4);
                break;
                default:
                    cout << "Incorrect input. " << endl;
                    break;
            }
        }
        while (unitToConvert!=1 && unitToConvert!=2 && unitToConvert!=3 &&
               unitToConvert!=4 && unitToConvert!=5);
        break;
    case 9:
        cout << "\nPressure: \n";
        cout << "Select Unit To Convert: \n";
        cout << "For Pascal                       type 1. " << endl;
        cout << "For Atmospheres                  type 2. " << endl;
        cout << "For Torr                         type 3. " << endl;
        cout << "For Bar                          type 4. " << endl;
        cout << "For Millimeters of Mercury       type 5. " << endl;
        do
        {
            cin >> unitToConvert;
            switch (unitToConvert)
            {
            case 1:
                cout << "Pascal -> Atmospheres             type 1. " << endl;
                cout << "Pascal -> Torr                    type 2. " << endl;
                cout << "Pascal -> Bar                     type 3. " << endl;
                cout << "Pascal -> Millimeters of Mercury  type 4. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Pascal: ";
                        cin >> pressure;
                        cout << "\n" << pressure << " pascal = " << pressure * 0.00001 << " atmospheres. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Pascal: ";
                        cin >> pressure;
                        cout << "\n" << pressure << " pascal = " << pressure * 0.007501 << " torr. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Pascal: ";
                        cin >> pressure;
                        cout << "\n" << pressure << " pascal = " << pressure * 0.00001 << " bar. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of Pascal: ";
                        cin >> pressure;
                        cout << "\n" << pressure << " pascal = " << pressure * 0.007501 << " millimeters of mercury. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4);
                break;
            case 2:
                cout << "Atmospheres -> Pascal                  type 1. " << endl;
                cout << "Atmospheres -> Torr                    type 2. " << endl;
                cout << "Atmospheres -> Bar                     type 3. " << endl;
                cout << "Atmospheres -> Millimeters of Mercury  type 4. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Atmospheres: ";
                        cin >> pressure;
                        cout << "\n" << pressure << " atmospheres = " << pressure * 101325 << " pascal. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Atmospheres: ";
                        cin >> pressure;
                        cout << "\n" << pressure << " atmospheres = " << pressure * 760.0021 << " torr. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Atmospheres: ";
                        cin >> pressure;
                        cout << "\n" << pressure << " atmospheres = " << pressure * 1.01325 << " bar. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of Atmospheres: ";
                        cin >> pressure;
                        cout << "\n" << pressure << " atmospheres = " << pressure * 760.0021 << " millimeters of mercury. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4);
                break;
            case 3:
                cout << "Torr -> Pascal                  type 1. " << endl;
                cout << "Torr -> Atmospheres             type 2. " << endl;
                cout << "Torr -> Bar                     type 3. " << endl;
                cout << "Torr -> Millimeters of Mercury  type 4. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Torr: ";
                        cin >> pressure;
                        cout << "\n" << pressure << " torr = " << pressure * 133.322 << " pascal. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Torr: ";
                        cin >> pressure;
                        cout << "\n" << pressure << " torr = " << pressure * 0.001316 << " atmospheres. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Torr: ";
                        cin >> pressure;
                        cout << "\n" << pressure << " torr = " << pressure * 0.001333 << " bar. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of Torr: ";
                        cin >> pressure;
                        cout << "\n" << pressure << " torr = " << pressure * 1 << " millimeters of mercury. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4);
                break;
            case 4:
                cout << "Bar -> Pascal                  type 1. " << endl;
                cout << "Bar -> Atmospheres             type 2. " << endl;
                cout << "Bar -> Torr                    type 3. " << endl;
                cout << "Bar -> Millimeters of Mercury  type 4. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Bars: ";
                        cin >> pressure;
                        cout << "\n" << pressure << " bar = " << pressure * 100000 << " pascal. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Bars: ";
                        cin >> pressure;
                        cout << "\n" << pressure << " bar = " << pressure * 0.986923 << " atmospheres. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Bars: ";
                        cin >> pressure;
                        cout << "\n" << pressure << " bar = " << pressure * 750.063755 << " torr. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of Bars: ";
                        cin >> pressure;
                        cout << "\n" << pressure << " bar = " << pressure * 750.063755 << " millimeters of mercury. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4);
                break;
            case 5:
                cout << "Millimeters of Mercury -> Pascal       type 1. " << endl;
                cout << "Millimeters of Mercury -> Atmospheres  type 2. " << endl;
                cout << "Millimeters of Mercury -> Torr         type 3. " << endl;
                cout << "Millimeters of Mercury -> Bar          type 4. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Millimeters of Mercury: ";
                        cin >> pressure;
                        cout << "\n" << pressure << " millimeters of mercury = " << pressure * 133.322 << " pascal. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Millimeters of Mercury: ";
                        cin >> pressure;
                        cout << "\n" << pressure << " millimeters of mercury = " << pressure * 0.001316 << " atmospheres. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Millimeters of Mercury: ";
                        cin >> pressure;
                        cout << "\n" << pressure << " millimeters of mercury = " << pressure * 1 << " torr. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of Millimeters of Mercury: ";
                        cin >> pressure;
                        cout << "\n" << pressure << " millimeters of mercury = " << pressure * 0.001333 << " bar. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4);
                break;
                default:
                    cout << "Incorrect input. " << endl;
                    break;
            }
        }
        while (unitToConvert!=1 && unitToConvert!=2 && unitToConvert!=3 &&
               unitToConvert!=4 && unitToConvert!=5);
        break;
    case 10:
        cout << "\nDensity: \n";
        cout << "Select Unit To Convert: \n";
        cout << "For Kilograms/Cubic Meter        type 1. " << endl;
        cout << "For Kilograms/Liter              type 2. " << endl;
        cout << "For Grams/Cubic Centimeter       type 3. " << endl;
        cout << "For Pounds/Cubic Foot            type 4. " << endl;
        cout << "For Ounces (AV)/Gallon           type 5. " << endl;
        do
        {
            cin >> unitToConvert;
            switch (unitToConvert)
            {
            case 1:
                cout << "Kilograms/Cubic Meter -> Kilograms/Liters        type 1. " << endl;
                cout << "Kilograms/Cubic Meter -> Grams/Cubic Centimeter  type 2. " << endl;
                cout << "Kilograms/Cubic Meter -> Pounds/Cubic Foot       type 3. " << endl;
                cout << "Kilograms/Cubic Meter -> Ounces/Gallon           type 4. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Kilograms/Cubic Meter: ";
                        cin >> density;
                        cout << "\n" << density << " kilograms/cubic meter = " << density * 0.001 << " kilograms/liter. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Kilograms/Cubic Meter: ";
                        cin >> density;
                        cout << "\n" << density << " kilograms/cubic meter = " << density * 0.001 << " grams/cubic centimeter. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Kilograms/Cubic Meter: ";
                        cin >> density;
                        cout << "\n" << density << " kilograms/cubic meter = " << density * 0.062428 << " pounds/cubic foot. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of Kilograms/Cubic Meters: ";
                        cin >> density;
                        cout << "\n" << density << " kilograms/cubic meter = " << density * 0.160359 << " ounces/gallon. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4);
                break;
            case 2:
                cout << "Kilograms/Liter -> Kilograms/Cubic Meter   type 1. " << endl;
                cout << "Kilograms/Liter -> Grams/Cubic Centimeter  type 2. " << endl;
                cout << "Kilograms/Liter -> Pounds/Cubic Foot       type 3. " << endl;
                cout << "Kilograms/Liter -> Ounces/Gallon           type 4. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Kilograms/Cubic Liter: ";
                        cin >> density;
                        cout << "\n" << density << " kilograms/liter = " << density * 1000 << " kilograms/cubic meter. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Kilograms/Cubic Liter: ";
                        cin >> density;
                        cout << "\n" << density << " kilograms/liter = " << density * 1 << " grams/cubic centimeter. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Kilograms/Cubic Liter: ";
                        cin >> density;
                        cout << "\n" << density << " kilograms/liter = " << density * 62.427962 << " pounds/cubic foot. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of Kilograms/Cubic Liter: ";
                        cin >> density;
                        cout << "\n" << density << " kilograms/liter = " << density * 160.358613 << " ounces/gallon. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4);
                break;
            case 3:
                cout << "Grams/Cubic Centimeter -> Kilograms/Cubic Meter  type 1. " << endl;
                cout << "Grams/Cubic Centimeter -> Kilograms/Liter        type 2. " << endl;
                cout << "Grams/Cubic Centimeter -> Pounds/Cubic Foot      type 3. " << endl;
                cout << "Grams/Cubic Centimeter -> Ounces/Gallon          type 4. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Grams/Cubic Centimeter: ";
                        cin >> density;
                        cout << "\n" << density << " grams/cubic centimeter = " << density * 1000 << " kilograms/cubic meter. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Grams/Cubic Centimeter: ";
                        cin >> density;
                        cout << "\n" << density << " grams/cubic centimeter = " << density * 1 << " kilograms/liter. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Grams/Cubic Centimeter: ";
                        cin >> density;
                        cout << "\n" << density << " grams/cubic centimeter = " << density * 62.427962 << " pounds/cubic foot. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of Grams/Cubic Centimeter: ";
                        cin >> density;
                        cout << "\n" << density << " grams/cubic centimeter = " << density * 160.358613 << " ounces/gallon. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4);
                break;
            case 4:
                cout << "Pounds/Cubic Foot -> Kilograms/Cubic Meter   type 1. " << endl;
                cout << "Pounds/Cubic Foot -> Kilograms/Liter         type 2. " << endl;
                cout << "Pounds/Cubic Foot -> Grams/Cubic Centimeter  type 3. " << endl;
                cout << "Pounds/Cubic Foot -> Ounces/Gallon           type 4. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Pounds/Cubic Foot: ";
                        cin >> density;
                        cout << "\n" << density << " pounds/cubic foot = " << density * 16.018463 << " kilograms/cubic meter. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Pounds/Cubic Foot: ";
                        cin >> density;
                        cout << "\n" << density << " pounds/cubic foot = " << density * 0.016018 << " kilograms/liter. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Pounds/Cubic Foot: ";
                        cin >> density;
                        cout << "\n" << density << " pounds/cubic foot = " << density * 0.016018 << " grams/cubic centimeter. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of Pounds/Cubic Foot: ";
                        cin >> density;
                        cout << "\n" << density << " pounds/cubic foot = " << density * 2.568699 << " ounces/gallon. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4);
                break;
            case 5:
                cout << "Ounces/Gallon -> Kilograms/Cubic Meter   type 1. " << endl;
                cout << "Ounces/Gallon -> Kilograms/Liter         type 2. " << endl;
                cout << "Ounces/Gallon -> Grams/Cubic Centimeter  type 3. " << endl;
                cout << "Ounces/Gallon -> Pounds/Foot             type 4. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Ounces/Gallon: ";
                        cin >> density;
                        cout << "\n" << density << " ounces/gallon = " << density * 6.236023 << " kilograms/cubic meter. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Ounces/Gallon: ";
                        cin >> density;
                        cout << "\n" << density << " ounces/gallon = " << density * 0.006236 << " kilograms/liter. " << endl;
                        break;
                    case 3:
                        cout << "\nEnter number of Ounces/Gallon: ";
                        cin >> density;
                        cout << "\n" << density << " ounces/gallon = " << density * 0.006236 << " grams/cubic centimeter. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of Ounces/Gallon: ";
                        cin >> density;
                        cout << "\n" << density << " ounces/gallon = " << density * 0.389302 << " pounds/cubic foot. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4);
                break;
                default:
                    cout << "Incorrect input. " << endl;
                    break;
            }
        }
        while (unitToConvert!=1 && unitToConvert!=2 && unitToConvert!=3 &&
               unitToConvert!=4 && unitToConvert!=5);
        break;
    case 11:
        cout << "\nFuel Consume: \n";
        cout << "Select Unit To Convert: \n";
        cout << "For Kilometers/Liter       type 1. " << endl;
        cout << "For Liters/100Km           type 2. " << endl;
        cout << "For Miles/Gallon           type 3. " << endl;
        do
        {
            cin >> unitToConvert;
            switch (unitToConvert)
            {
            case 1:
                cout << "Kilometers/Liter -> Liters/100Km  type 1. " << endl;
                cout << "Kilometers/Liter -> Miles/Gallon  type 2. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Kilometers/Liter: ";
                        cin >> fuel;
                        cout << "\n" << fuel << " kilometers/liter = " << fuel * 100 << " liters/100km. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Kilometers/Liter: ";
                        cin >> fuel;
                        cout << "\n" << fuel << " kilometers/liter = " << fuel * 2.352145833 << " miles/gallon. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2);
                break;
            case 2:
                cout << "Liters/100 km -> Kilometers/Liter  type 1. " << endl;
                cout << "Liters/100 km -> Miles/Gallon      type 2. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Liters/100 km: ";
                        cin >> fuel;
                        cout << "\n" << fuel << " liters/100km = " << fuel * 100 << " kilometers/liter. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Liters/100 km: ";
                        cin >> fuel;
                        cout << "\n" << fuel << " liters/100km = " << fuel * 235.2145 << " miles/gallon. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2);
                break;
            case 3:
                cout << "Miles/Gallon -> Kilometers/Liter  type 1. " << endl;
                cout << "Miles/Gallon -> Liters/100km      type 2. " << endl;
                cout << endl;
                do
                {
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "\nEnter number of Miles/Gallon: ";
                        cin >> fuel;
                        cout << "\n" << fuel << " miles/gallon = " << fuel * 0.42514 << " kilometers/liter. " << endl;
                        break;
                    case 2:
                        cout << "\nEnter number of Miles/Gallon: ";
                        cin >> fuel;
                        cout << "\n" << fuel << " miles/gallon = " << fuel * 235.2145 << " liters/100km. " << endl;
                        break;
                        default:
                    cout << "Incorrect input. " << endl;
                    break;
                    }
                }
                while (choice!=1 && choice!=2);
                break;
                default:
                    cout << "Incorrect input. " << endl;
                    break;
            }
        }
        while (unitToConvert!=1 && unitToConvert!=2 && unitToConvert!=3);

    }
}
while (unitChoice!=1  && unitChoice!=2  && unitChoice!=3 &&
       unitChoice!=4  && unitChoice!=5  && unitChoice!=6 &&
       unitChoice!=7  && unitChoice!=8  && unitChoice!=9 &&
       unitChoice!=10 && unitChoice!=11);
}



