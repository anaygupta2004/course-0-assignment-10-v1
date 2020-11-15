#include <iostream>
#include <string>
using namespace std;

struct Point {
  int x;
  int y;
};

struct Rectangle {
  int x1;
  int y1;
  int x2;
  int y2;
  int x3;
  int y3;
  int x4;
  int y4;
};

struct DriversLicense {
  string name; 
  string date_of_birth;
  string license_number; 
};

struct CalendarAppointment {
  int year; 
  string month;
  int day; 
  string time;
};

Point PointStruct () {
  Point val;
  cout << "x-value: ";
  cin >> val.x;
  cout << "y-value: ";
  cin >> val.y;
  return val;
}

Rectangle RectangleStruct () {
  Rectangle val;
  cout << "Rectangle Coordinate #1 x-value: ";
  cin >> val.x1;
  cout << "Rectangle Coordinate #1 y-value: ";
  cin >> val.y1;
  cout << "Rectangle Coordinate #2 x-value: ";
  cin >> val.x2;
  cout << "Rectangle Coordinate #2 y-value: ";
  cin >> val.y2;
  cout << "Rectangle Coordinate #3 x-value: ";
  cin >> val.x3;
  cout << "Rectangle Coordinate #3 y-value: ";
  cin >> val.y3;
  cout << "Rectangle Coordinate #4 x-value: ";
  cin >> val.x4;
  cout << "Rectangle Coordinate #4 y-value: ";
  cin >> val.y4;
  return val;
}

CalendarAppointment CalendarAppointmentStruct () {
  CalendarAppointment val;
  cout << "What is the year you would like to meet on: ";
  cin >> val.year;
  cout << "What is the month you would like to meet on: ";
  cin >> val.month;
  cout << "What is the day you would like to meet on: ";
  cin >> val.day;
  cout << "What is the time in (_:__) you would like to meet on: ";
  cin >> val.time;
  return val;
}

DriversLicense DriversLicenseStruct () {
  DriversLicense val;
  cout << "What is the full name of the license holder: ";
  getline(cin, val.name);
  cout << "What is the date of birth of the license holder: ";
  cin >> val.date_of_birth;
  cout << "What is the license number: ";
  cin >> val.license_number;
  return val;
}

void PointStructPrint (Point val) {
  cout << "Final Coordinate: (" << val.x << ", " << val.y << ")" << endl;
}

void PointRectanglePrint (Rectangle my_rectangle) {
  cout << "Rectangle Coordinate #1: (" << my_rectangle.x1 << ", " << my_rectangle.y1 << ")" << endl;
  cout << "Rectangle Coordinate #2: (" << my_rectangle.x2 << ", " << my_rectangle.y2 << ")" << endl;
  cout << "Rectangle Coordinate #3: (" << my_rectangle.x3 << ", " << my_rectangle.y3 << ")" << endl;
  cout << "Rectangle Coordinate #4: (" << my_rectangle.x4 << ", " << my_rectangle.y4 << ")" << endl;
}

void DriversLicensePrint (DriversLicense my_drivers_license) {
  cout << "Name: " << my_drivers_license.name << endl;
  cout << "DOB: " << my_drivers_license.date_of_birth << endl;
  cout << "License Number: " << my_drivers_license.license_number << endl;
}

void CalendarAppointmentPrint (CalendarAppointment my_calendar_appointment) {
  cout << "You have scheduled an appointment on the " << my_calendar_appointment.month << my_calendar_appointment.day << " at " << my_calendar_appointment.time << " on this year, " << my_calendar_appointment.year << endl;
}

int main() {
  Point my_point = PointStruct();
  Rectangle my_rectangle = RectangleStruct();
  DriversLicense my_drivers_license = DriversLicenseStruct();
  CalendarAppointment my_calendar_appointment = CalendarAppointmentStruct();
  PointStructPrint(my_point);
  PointRectanglePrint(my_rectangle);
  DriversLicensePrint(my_drivers_license);
  CalendarAppointmentPrint(my_calendar_appointment);
  return 0;
}
