#include <iostream>
#include <string>
using namespace std;

// Global variables
string course;
string student;
float tenthp;
int module;
string mobile;
int modulechoice;
string coursechoice;

// Function to calculate fee discount
float calculateDiscount(float fee, float percentage) {
    if (percentage <= 45)
        return 0;
    else if (percentage <= 80)
        return 19000;
    else
        return 21000;
}

// Module 1 function
void module1() {
    cout << "\nMODULE 1 COURSES:\nA. Basic Computers\nB. DCA\nC. ADCA";
    cout << "\nEnter your choice (a/b/c): ";
    cin >> course;

    if (course == "a" || course == "A") {
        cout << "\n✅ You chose Basic Computers\nThis course helps children learn the basics of computers.";
        cout << "\n💰 Fee: ₹12000";
    } 
    else if (course == "b" || course == "B") {
        cout << "\n✅ You chose DCA\nThis course helps children learn the basics of computers.";
        cout << "\n💰 Fee: ₹14000";
    } 
    else if (course == "c" || course == "C") {
        cout << "\n✅ You chose ADCA\nThis course helps children learn the basics of computers.";
        float fee = 36000;
        cout << "\n💰 Base Fee: ₹" << fee;

        string tenth;
        cout << "\nHas the student passed 10th? (Y/N): ";
        cin >> tenth;

        if (tenth == "y" || tenth == "Y") {
            cout << "Enter percentage scored in 10th: ";
            cin >> tenthp;

            float discount = calculateDiscount(fee, tenthp);
            float finalFee = fee - discount;
            if (discount > 0)
                cout << "\n🎉 Congratulations! You received a discount of ₹" << discount << "\nRevised Fee: ₹" << finalFee;
            else
                cout << "\n❌ No discount applicable.";
        } 
        else {
            cout << "\n❌ No discount applicable. Final Fee: ₹" << fee;
        }
    } 
    else {
        cout << "\n❌ Invalid choice!";
    }
}

// Module 2 function
void module2() {
    cout << "\nMODULE 2 COURSES:\nA. Advanced Excel\nB. Digital Marketing";
    cout << "\nEnter your choice (a/b): ";
    cin >> course;

    if (course == "a" || course == "A") {
        cout << "\n✅ You chose Advanced Excel\nThis course helps children learn spreadsheet proficiency.";
        cout << "\n💰 Fee: ₹15000";
    } 
    else if (course == "b" || course == "B") {
        cout << "\n✅ You chose Digital Marketing\nThis course helps children learn marketing in the digital age.";
        cout << "\n💰 Fee: ₹19000";
    } 
    else {
        cout << "\n❌ Invalid choice!";
    }
}

// Module 3 function
void module3() {
    cout << "\nMODULE 3 COURSES:\nA. ADTI\nB. DIT\nC. Web Development";
    cout << "\nEnter your choice (a/b/c): ";
    cin >> course;

    if (course == "a" || course == "A") {
        cout << "\n✅ You chose ADTI\nThis course helps children learn the basics of computers.";
        cout << "\n💰 Fee: ₹20000";
    } 
    else if (course == "b" || course == "B") {
        cout << "\n✅ You chose DIT\nThis course helps children learn the basics of computers.";
        cout << "\n💰 Fee: ₹25000";
    } 
    else if (course == "c" || course == "C") {
        cout << "\n✅ You chose Web Development\nThis course helps children learn how to build websites.";
        cout << "\n💰 Fee: ₹30000";
    } 
    else {
        cout << "\n❌ Invalid choice!";
    }
}

// Registration function
void registration() {
    cout << "\n📝 REGISTRATION FORM";
    cout << "\nEnter Student's Full Name: ";
    cin.ignore(); // to clear previous newline character
    getline(cin, student);

    cout << "Enter Mobile Number: ";
    cin >> mobile;

    cout << "Enter the Module Number you chose (1/2/3): ";
    cin >> modulechoice;

    cout << "Enter the Course Name you chose: ";
    cin.ignore();
    getline(cin, coursechoice);

    cout << "\n✅ Registration Successful!";
    cout << "\nStudent: " << student;
    cout << "\nModule: " << modulechoice;
    cout << "\nCourse: " << coursechoice;
    cout << "\n📞 Mobile: " << mobile;
}

// Main function
int main() {
    cout << "\n📘 Welcome to ICCVS";
    cout << "\n👨‍🏫 Owner: Sunny Gupta | 📞 9816542678";
    cout << "\n🌟 The Future Lies In Our Hands";
    cout << "\n-------------------------------------";
    cout << "\nModules Available:";
    cout << "\n1. Module 1";
    cout << "\n2. Module 2";
    cout << "\n3. Module 3";

    string ans = "y";
    while (ans == "y" || ans == "Y") {
        cout << "\n\nEnter Module Number (1/2/3): ";
        cin >> module;

        switch (module) {
            case 1: module1(); break;
            case 2: module2(); break;
            case 3: module3(); break;
            default: cout << "\n❌ Invalid Module Number!";
        }

        cout << "\n📅 Course Duration: 5–6 Months";
        cout << "\nDo you want to view another module? (y/n): ";
        cin >> ans;
    }

    registration();
    return 0;
}