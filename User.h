//
//  User.h
//  Calorie Tracker
//
//  Created by Yusuf Öztürk on 27.05.2021.
//

#ifndef User_h
#define User_h
#include <string>
#include "Meals.h"
#include "Sports.h"

class Meals : public Breakfast, public Lunch, public Dinner{
public:
    Breakfast breakfast;
    Lunch lunch;
    Dinner dinner;
    int getTotalCal();
    int getTotalCount();

    friend std::ostream& operator<<(std::ostream& os, const Meals & meals);
} ;

class Sport : public Basketball, public Football, public Tennis, public Swimming{
public:
    Basketball basketball;
    Football football;
    Tennis tennis;
    Swimming swimming;
    int getTotalCal();
    int getTotalMinute();

    friend std::ostream& operator<<(std::ostream& os, const Sport & sp);
};

class Days : public Meals, public Sport{
public:
    Meals meals;
    Sport sports;
};

class Weeks : public Days{
public:
    Days day[7];
};


class User : public Weeks{
private:
    std::string _name;
    std::string _surname;
    int _id;
    int _age;
    float _weight;

public:
    Weeks week[52];
    User();
    User(std::string name, std::string surname, int id,int age, int weight);
    User(const User &usr);
    User& operator=(User usr);
    User& operator+=(int cal);
    std::string getName();
    std::string getSurname();
    int getID();
    int getAge();
    float getWeight();

    friend std::ostream& operator<<(std::ostream& os, const User & usr);


};





#endif /* User_h */
