//
//  Meals.h
//  Calorie Tracker
//
//  Created by Yusuf Öztürk on 27.05.2021.
//

#ifndef Meals_h
#define Meals_h
#include <iostream>
enum {small = 1, medium, large};

class Breakfast{
private:
    int _kcal;
    int _small;
    int _medium;
    int _large;
    int _count;

public:
    Breakfast();
    Breakfast(int portion);
    Breakfast(const Breakfast &bfs);
    int getCount();
    int getCal();
    void Add(int type);

   
    friend std::ostream& operator<<(std::ostream& os, const Breakfast & bfs);

};

class Lunch{
private:
    int _kcal;
    int _small;
    int _medium;
    int _large;
    int _count;

public:
    Lunch();
    Lunch(int type);
    Lunch(const Lunch &lunch);
    int getCount();
    int getCal();
    void Add(int type);

    Lunch& operator=(Lunch lunch);
    Lunch& operator+=(int type);

    friend std::ostream& operator<<(std::ostream& os, const Lunch & lunch);

};

class Dinner{
private:
    int _kcal;
    int _small;
    int _medium;
    int _large;
    int _count;

public:
    Dinner();
    Dinner(int type);
    Dinner(const Dinner &dinner);
    int getCount();
    int getCal();
    void Add(int type);

    Dinner& operator=(Dinner dinner);
    Dinner& operator+=(int type);

    friend std::ostream& operator<<(std::ostream& os, const Dinner & dinner);

};





#endif /* Meals_h */
