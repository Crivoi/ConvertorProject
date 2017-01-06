#include <iostream>

using namespace std;

long long grams, kilograms, pounds, milligrams, ounceav, ouncetroy, tons;
long long sqm, sqkm, sqcm, sqmm, sqft, sqin, sqyd, ha, ac;
long long l, cl, ml, cubem, cubecm, cubedm, gal;
long long degrees;
int unitChoice, unitToConvert, choice;

int main ()
{
    cout << "Choose one of the following Units: \n";
    cout << "For Weight      type 1. \n";
    cout << "For Area        type 2. \n";
    cout << "For Volume      type 3. \n";
    cout << "For Time        type 4. \n";
    cout << "For Speed       type 5. \n";
    cout << "For Temperature type 6. \n";
    cout << "For Length      type 7. \n";
    cout << "For Energy      type 8. \n";
    cout << "For Pressure    type 9. \n";
    cout << "For Density     type 10. \n";
    cout << "For Fuel        type 11. \n";
    cout << "For Currency    type 12. \n";
    cout << endl;

do
{
    cin >> unitChoice;
    switch (unitChoice)
    {
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
                  }
               }
               while (choice!=1 && choice!=2 && choice!=3 &&
                      choice!=4 && choice!=5 && choice!=6);
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
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5 && choice!=6 &&
                       choice!=7 && choice!=8);
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
        cout << "For Liters                 type 1. " << endl;
        cout << "For Milliliters            type 2. " << endl;
        cout << "For Centiliters            type 3. " << endl;
        cout << "For Cube Meters            type 4. " << endl;
        cout << "For Cube Decimeters        type 5. " << endl;
        cout << "For Cube Centimeters       type 6. " << endl;
        cout << "For Gallons                type 7. " << endl;
        cout << endl;
        do
        {
            cin >> unitToConvert;
            switch (unitToConvert)
            {
            case 1:
                cout << "Liters -> Milliliters       type 1. " << endl;
                cout << "Liters -> Centiliters       type 2. " << endl;
                cout << "Liters -> Cube Meters       type 3. " << endl;
                cout << "Liters -> Cube Decimeters   type 4. " << endl;
                cout << "Liters -> Cube Centimeters  type 5. " << endl;
                cout << "Liters -> Gallons           type 6. " << endl;
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
                        cout << "\n" << l << " liters = " << l * 0.001 << " cube meters. " << endl;
                        break;
                    case 4:
                        cout << "\nEnter number of Liters: ";
                        cin >> l;
                        cout << "\n" << l << " liters = " << l * 1 << " cube decimeters. " << endl;
                        break;
                    case 5:
                        cout << "\nEnter number of Liters: ";
                        cin >> l;
                        cout << "\n" << l << " liters = " << l * 1000 << " cube centimeters. " << endl;
                        break;
                    case 6:
                        cout << "\nEnter number of Liters: ";
                        cin >> l;
                        cout << "\n" << l << " liters = " << l * 0.2199 << " gallons. " << endl;
                        break;
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5 && choice!=6);
                break;
            case 2:
                cout << "Milliliters -> Liters            type 1. " << endl;
                cout << "Milliliters -> Centiliters       type 2. " << endl;
                cout << "Milliliters -> Cube Meters       type 3. " << endl;
                cout << "Milliliters -> Cube Decimeters   type 4. " << endl;
                cout << "Milliliters -> Cube Centimeters  type 5. " << endl;
                cout << "Milliliters -> Gallons           type 6. " << endl;
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
                        cout << "\n" << ml << "  milliliters = " << ml * 0.000001  << " cube meters. " << endl;
                    break;
                   case 4:
                        cout << "\nEnter number of Milliliters: ";
                        cin >> ml;
                        cout << "\n" << ml << "  milliliters = " << ml * 0.001  << " cube decimeters. " << endl;
                    break;
                   case 5:
                        cout << "\nEnter number of Milliliters: ";
                        cin >> ml;
                        cout << "\n" << ml << "  milliliters = " << ml * 1  << " cube centimeters. " << endl;
                    break;
                   case 6:
                        cout << "\nEnter number of Milliliters: ";
                        cin >> ml;
                        cout << "\n" << ml << "  milliliters = " << ml * 0.0002199  << " gallons. " << endl;
                    break;
                   }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5 && choice!=6);
                break;
            case 3:
                cout << "Centiliters -> Liters            type 1. " << endl;
                cout << "Centiliters -> Milliliters       type 2. " << endl;
                cout << "Centiliters -> Cube Meters       type 3. " << endl;
                cout << "Centiliters -> Cube Decimeters   type 4. " << endl;
                cout << "Centiliters -> Cube Centimeters  type 5. " << endl;
                cout << "Centiliters -> Gallons           type 6. " << endl;
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
                        cout << "\n" << cl << " centiliters = " << cl * 0.00001 << " cube meters. " << endl;
                    break;
                   case 4:
                       cout << "\nEnter number of Centiliters: ";
                        cin >> cl;
                        cout << "\n" << cl << " centiliters = " << cl * 0.01 << " cube decimeters. " << endl;
                    break;
                   case 5:
                       cout << "\nEnter number of Centiliters: ";
                        cin >> cl;
                        cout << "\n" << cl << " centiliters = " << cl * 10 << " cube centimeters. " << endl;
                    break;
                   case 6:
                       cout << "\nEnter number of Centiliters: ";
                        cin >> cl;
                        cout << "\n" << cl << " centiliters = " << cl * 0.002199 << " gallons. " << endl;
                    break;
                   }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5 && choice!=6);
                break;
            case 4:
                cout << "Cube Meters -> Liters            type 1. " << endl;
                cout << "Cube Meters -> Milliliters       type 2. " << endl;
                cout << "Cube Meters -> Centiliters       type 3. " << endl;
                cout << "Cube Meters -> Cube Decimeters   type 4. " << endl;
                cout << "Cube Meters -> Cube Centimeters  type 5. " << endl;
                cout << "Cube Meters -> Gallons           type 6. " << endl;
                cout << endl;
                do
                {
                   cin >> choice;
                   switch (choice)
                   {
                   case 1:
                       cout << "\nEnter number of Cube Meters: ";
                        cin >> cubem;
                        cout << "\n" << cubem << " cube meters = " << cubem * 1000 << " liters. " << endl;
                    break;
                   case 2:
                       cout << "\nEnter number of Cube Meters: ";
                        cin >> cubem;
                        cout << "\n" << cubem << " cube meters = " << cubem * 1000000 << " milliliters. " << endl;
                    break;
                   case 3:
                       cout << "\nEnter number of Cube Meters: ";
                        cin >> cubem;
                        cout << "\n" << cubem << " cube meters = " << cubem * 100000 << " centiliters. " << endl;
                    break;
                   case 4:
                       cout << "\nEnter number of Cube Meters: ";
                        cin >> cubem;
                        cout << "\n" << cubem << " cube meters = " << cubem * 1000 << " cube decimeters. " << endl;
                    break;
                   case 5:
                       cout << "\nEnter number of Cube Meters: ";
                        cin >> cubem;
                        cout << "\n" << cubem << " cube meters = " << cubem * 1000000 << " cube centimeters. " << endl;
                    break;
                   case 6:
                       cout << "\nEnter number of Cube Meters: ";
                        cin >> cubem;
                        cout << "\n" << cubem << " cube meters = " << cubem * 219.97 << " gallons. " << endl;
                    break;
                   }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5 && choice!=6);
                break;
            case 5:
                cout << "Cube Decimeters -> Liters            type 1. " << endl;
                cout << "Cube Decimeters -> Milliliters       type 2. " << endl;
                cout << "Cube Decimeters -> Centiliters       type 3. " << endl;
                cout << "Cube Decimeters -> Cube Meters       type 4. " << endl;
                cout << "Cube Decimeters -> Cube Centimeters  type 5. " << endl;
                cout << "Cube Decimeters -> Gallons           type 6. " << endl;
                cout << endl;
                do
                {
                   cin >> choice;
                   switch (choice)
                   {
                   case 1:
                       cout << "\nEnter number of Cube Decimeters: ";
                        cin >> cubedm;
                        cout << "\n" << cubedm << " cube decimeters = " << cubedm * 1 << " liters. " << endl;
                    break;
                   case 2:
                       cout << "\nEnter number of Cube Decimeters: ";
                        cin >> cubedm;
                        cout << "\n" << cubedm << " cube decimeters = " << cubedm * 1000 << " milliliters. " << endl;
                    break;
                   case 3:
                       cout << "\nEnter number of Cube Decimeters: ";
                        cin >> cubedm;
                        cout << "\n" << cubedm << " cube decimeters = " << cubedm * 100 << " centiliters. " << endl;
                    break;
                   case 4:
                       cout << "\nEnter number of Cube Decimeters: ";
                        cin >> cubedm;
                        cout << "\n" << cubedm << " cube decimeters = " << cubedm * 0.001 << " cube meters. " << endl;
                    break;
                   case 5:
                       cout << "\nEnter number of Cube Decimeters: ";
                        cin >> cubedm;
                        cout << "\n" << cubedm << " cube decimeters = " << cubedm * 1000 << " cube centimeters. " << endl;
                    break;
                   case 6:
                       cout << "\nEnter number of Cube Decimeters: ";
                        cin >> cubedm;
                        cout << "\n" << cubedm << " cube decimeters = " << cubedm * 0.2199 << " gallons. " << endl;
                    break;
                   }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5 && choice!=6);
                break;
            case 6:
                cout << "Cube Centimeters -> Liters           type 1. " << endl;
                cout << "Cube Centimeters -> Milliliters      type 2. " << endl;
                cout << "Cube Centimeters -> Centiliters      type 3. " << endl;
                cout << "Cube Centimeters -> Cube Meters      type 4. " << endl;
                cout << "Cube Centimeters -> Cube Decimeters  type 5. " << endl;
                cout << "Cube Centimeters -> Gallons          type 6. " << endl;
                cout << endl;
                do
                {
                   cin >> choice;
                   switch (choice)
                   {
                   case 1:
                       cout << "\nEnter number of Cube Centimeters: ";
                        cin >> cubecm;
                        cout << "\n" << cubecm << " cube centimeters = " << cubecm * 0.001 << " liters. " << endl;
                    break;
                   case 2:
                       cout << "\nEnter number of Cube Centimeters: ";
                        cin >> cubecm;
                        cout << "\n" << cubecm << " cube centimeters = " << cubecm * 1 << " milliliters. " << endl;
                    break;
                   case 3:
                       cout << "\nEnter number of Cube Centimeters: ";
                        cin >> cubecm;
                        cout << "\n" << cubecm << " cube centimeters = " << cubecm * 0.1 << " centiliters. " << endl;
                    break;
                   case 4:
                       cout << "\nEnter number of Cube Centimeters: ";
                        cin >> cubecm;
                        cout << "\n" << cubecm << " cube centimeters = " << cubecm * 0.000001 << " cube meters. " << endl;
                    break;
                   case 5:
                       cout << "\nEnter number of Cube Centimeters: ";
                        cin >> cubecm;
                        cout << "\n" << cubecm << " cube centimeters = " << cubecm * 0.001 << " cube decimeters. " << endl;
                    break;
                   case 6:
                       cout << "\nEnter number of Cube Centimeters: ";
                        cin >> cubecm;
                        cout << "\n" << cubecm << " cube centimeters = " << cubecm * 0.0002199 << " gallons. " << endl;
                    break;
                   }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5 && choice!=6);
                break;
            case 7:
                cout << "Gallons -> Liters            type 1. " << endl;
                cout << "Gallons -> Milliliters       type 2. " << endl;
                cout << "Gallons -> Centiliters       type 3. " << endl;
                cout << "Gallons -> Cube Meters       type 4. " << endl;
                cout << "Gallons -> Cube Decimeters   type 5. " << endl;
                cout << "Gallons -> Cube Centimeters  type 6. " << endl;
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
                        cout << "\n" << gal << " gallons = " << gal * 0.004546 << " cube meters. " << endl;
                    break;
                   case 5:
                       cout << "\nEnter number of Gallons: ";
                        cin >> gal;
                        cout << "\n" << gal << " gallons = " << gal * 4.5459 << " cube decimeters. " << endl;
                    break;
                   case 6:
                       cout << "\nEnter number of Gallons: ";
                        cin >> gal;
                        cout << "\n" << gal << " gallons = " << gal * 4546 << " cube centimeters. " << endl;
                    break;
                   }
                }
                while (choice!=1 && choice!=2 && choice!=3 &&
                       choice!=4 && choice!=5 && choice!=6);
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
                    }
                }
                while (choice!=1 && choice!=2 && choice!=3);
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
        break;
    case 8:
        cout << "\nEnergy: \n";
        cout << "Select Unit To Convert: \n";
        cout << "For Joules                  type 1. " << endl;
        cout << "For Kilojoules              type 2. " << endl;
        cout << "For Calories                type 3. " << endl;
        cout << "For Kilo calories           type 4. " << endl;
        cout << "For Foot*Pound Force        type 5. " << endl;
        break;
    case 9:
        cout << "\nPressure: \n";
        cout << "Select Unit To Convert: \n";
        cout << "For Pascal                       type 1. " << endl;
        cout << "For Atmospheres                  type 2. " << endl;
        cout << "For Torr                         type 3. " << endl;
        cout << "For Bar                          type 4. " << endl;
        cout << "For Millimeters of Mercury       type 5. " << endl;
        break;
    case 10:
        cout << "\nDensity: \n";
        cout << "Select Unit To Convert: \n";
        cout << "For Kilograms/Cubic Meter         type 1. " << endl;
        cout << "For Kilograms/Liters              type 2. " << endl;
        cout << "For Grams/Cubic Centimeters       type 3. " << endl;
        cout << "For Pounds/Cubic Feet             type 4. " << endl;
        cout << "For Ounces (AV)/Gallons           type 5. " << endl;
        break;
    case 11:
        cout << "\nFuel Consume: \n";
        cout << "Select Unit To Convert: \n";
        break;
    case 12:
        cout << "\nCurrency: \n";
        break;
}
}
while (unitChoice!=1  && unitChoice!=2  && unitChoice!=3 &&
       unitChoice!=4  && unitChoice!=5  && unitChoice!=6 &&
       unitChoice!=7  && unitChoice!=8  && unitChoice!=9 &&
       unitChoice!=10 && unitChoice!=11 && unitChoice!=12);
}



