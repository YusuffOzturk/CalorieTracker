//
//  Sports.cpp
//  Calorie Tracker
//
//  Created by Yusuf Öztürk on 27.05.2021.
//

#include <iostream>
#include "Sports.h"
using namespace std;

/////// Basketball
Basketball :: Basketball(){
    _minute = 0;
    _kcal = 0;
}

Basketball :: Basketball(int minute){
    _minute = minute;
    _kcal = minute*KCALPERMINUTE;
}

Basketball :: Basketball(const Basketball &bask){
    _minute = bask._minute;
    _kcal = bask._kcal;
}

int Basketball :: getMinute(){
    return _minute;
}

int Basketball :: getCal(){
    return _kcal;
}

void Basketball :: Add(int minute){
    _minute += _minute;
    _kcal += _minute*KCALPERMINUTE;
}

Basketball & Basketball :: operator=(Basketball bask){
    _minute = bask._minute;
    _kcal = bask._kcal;
    return *this;
}

Basketball & Basketball :: operator+=(int minute){
    _minute += _minute;
    _kcal += _minute*KCALPERMINUTE;
    return *this;
}

ostream& operator<<(ostream& os, const Basketball & bask){
    os<<"Basketball:"<<endl;
    os<<"\tSpent time: "<<bask._minute<<" minute"<<endl;
    os<<"\tCalories burned: "<<bask._kcal<<" kcal"<<endl;

    return os;
}
//---------------------------------------------------------

/////// Football
Football :: Football(){
    _minute = 0;
    _kcal = 0;
}

Football :: Football(int minute){
    _minute = minute;
    _kcal = minute*KCALPERMINUTE;
}

Football :: Football(const Football &fball){
    _minute = fball._minute;
    _kcal = fball._kcal;
}

int Football :: getMinute(){
    return _minute;
}

int Football :: getCal(){
    return _kcal;
}

void Football :: Add(int minute){
    _minute += _minute;
    _kcal += _minute*KCALPERMINUTE;
}

Football & Football :: operator=(Football fball){
    _minute = fball._minute;
    _kcal = fball._kcal;
    return *this;
}

Football & Football :: operator+=(int minute){
    _minute += _minute;
    _kcal += _minute*KCALPERMINUTE;
    return *this;
}

ostream& operator<<(ostream& os, const Football & fball){
    os<<"Football:"<<endl;
    os<<"\tSpent time: "<<fball._minute<<" minute"<<endl;
    os<<"\tCalories burned: "<<fball._kcal<<" kcal"<<endl;

    return os;
}
//---------------------------------------------------------

/////// Tennis
Tennis :: Tennis(){
    _minute = 0;
    _kcal = 0;
}

Tennis :: Tennis(int minute){
    _minute = minute;
    _kcal = minute*KCALPERMINUTE;
}

Tennis :: Tennis(const Tennis &tennis){
    _minute = tennis._minute;
    _kcal = tennis._kcal;
}

int Tennis :: getMinute(){
    return _minute;
}

int Tennis :: getCal(){
    return _kcal;
}

void Tennis :: Add(int minute){
    _minute += _minute;
    _kcal += _minute*KCALPERMINUTE;
}

Tennis & Tennis :: operator=(Tennis tennis){
    _minute = tennis._minute;
    _kcal = tennis._kcal;
    return *this;
}

Tennis & Tennis :: operator+=(int minute){
    _minute += _minute;
    _kcal += _minute*KCALPERMINUTE;
    return *this;
}

ostream& operator<<(ostream& os, const Tennis & tennis){
    os<<"Tennis:"<<endl;
    os<<"\tSpent time: "<<tennis._minute<<" minute"<<endl;
    os<<"\tCalories burned: "<<tennis._kcal<<" kcal"<<endl;

    return os;
}
//---------------------------------------------------------

/////// Swimming
Swimming :: Swimming(){
    _minute = 0;
    _kcal = 0;
}

Swimming :: Swimming(int minute){
    _minute = minute;
    _kcal = minute*KCALPERMINUTE;
}

Swimming :: Swimming(const Swimming &swim){
    _minute = swim._minute;
    _kcal = swim._kcal;
}

int Swimming :: getMinute(){
    return _minute;
}

int Swimming :: getCal(){
    return _kcal;
}

void Swimming :: Add(int minute){
    _minute += _minute;
    _kcal += _minute*KCALPERMINUTE;
}

Swimming & Swimming :: operator=(Swimming swim){
    _minute = swim._minute;
    _kcal = swim._kcal;
    return *this;
}

Swimming & Swimming :: operator+=(int minute){
    _minute += _minute;
    _kcal += _minute*KCALPERMINUTE;
    return *this;
}

ostream& operator<<(ostream& os, const Swimming & swim){
    os<<"Swimming:"<<endl;
    os<<"\tSpent time: "<<swim._minute<<" minute"<<endl;
    os<<"\tCalories burned: "<<swim._kcal<<" kcal"<<endl;

    return os;
}


