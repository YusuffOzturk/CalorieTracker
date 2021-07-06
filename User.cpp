//
//  User.cpp
//  Calorie Tracker
//
//  Created by Yusuf Öztürk on 27.05.2021.
//

#include <iostream>
#include "User.h"
using namespace std;

int Meals :: getTotalCal(){
    return (breakfast.getCal() + lunch.getCal() + dinner.getCal());
}

int Meals :: getTotalCount(){
     return (breakfast.getCount() + lunch.getCount() + dinner.getCount());
}

ostream& operator<<(std::ostream& os, const Meals & meals){
    os<<meals.breakfast;
    os<<meals.lunch;
    os<<meals.dinner;
    return os;
}

int Sport :: getTotalCal(){
    return (basketball.getCal() + football.getCal() + tennis.getCal() + swimming.getCal());
}
int Sport :: getTotalMinute(){
    return (basketball.getMinute() + football.getMinute() + tennis.getMinute() + swimming.getMinute());
}

ostream& operator<<(std::ostream& os, const Sport & sp){
    os<<sp.basketball;
    os<<sp.football;
    os<<sp.tennis;
    os<<sp.swimming;
    return os;
}

    std::string _name;
    std::string _surname;
    int _id;
    int _age;
    float _weight;

User :: User(){
    _name = "";
    _surname = "";
    _id = 0;
    _age = 0;
    _weight = 0.0;
}

User :: User(string name, string surname, int id, int age, int weight){
    _name = name;
    _surname = surname;
    _id = id;
    _age = age;
    _weight = weight;
}

User :: User(const User &usr){
    _name = usr._name;
    _surname = usr._surname;
    _id = usr._id;
    _age = usr._age;
    _weight = usr._weight;
}

User& User :: operator=(User usr){
    _name = usr._name;
    _surname = usr._surname;
    _id = usr._id;
    _age = usr._age;
    _weight = usr._weight;

    return *this;
}

string User :: getName(){
    return _name;
}

string User :: getSurname(){
    return _surname;
}

int User :: getID(){
    return _id;
}

int User :: getAge(){
    return _age;
}

float User :: getWeight(){
    return _weight;
}

ostream& operator<<(std::ostream& os, const User & usr){
    os<<"User:"<<endl;
    os<<"\tName: "<<usr._name<<endl;
    os<<"\tSurname: "<<usr._surname<<endl;
    os<<"\tID: "<<usr._id<<endl;
    os<<"\tAge: "<<usr._age<<endl;
    os<<"\tWeight: "<<usr._weight<<" kg"<<endl;
    return os;
}
