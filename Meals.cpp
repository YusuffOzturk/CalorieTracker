//
//  Meals.cpp
//  Calorie Tracker
//
//  Created by Yusuf Öztürk on 27.05.2021.
//

#include <iostream>
#include "Meals.h"

using namespace std;


/////// Breakfast
Breakfast :: Breakfast(){
    _kcal = 0;
    _small = 0;
    _medium = 0;
    _large = 0;
    _count = 0;

}

Breakfast :: Breakfast(int portion){

    _kcal = 0;
    _small = 0;
    _medium = 0;
    _large = 0;
    _count = 1;

    switch(portion){

    case small:
        _small = 1;
        _kcal = 200;
        break;

    case medium:
        _medium = 1;
        _kcal = 400;
        break;

    case large:
        _large = 1;
        _kcal = 600;
        break;

    default:
        cout<<"Wrong type selection!!!"<<endl;
        exit(1);
    }
}

Breakfast :: Breakfast(const Breakfast &bfs){
    _kcal = bfs._kcal;
    _small = bfs._small;
    _medium = bfs._medium;
    _large = bfs._large;
    _count = bfs._count;
}

int Breakfast :: getCount(){
    return _count;
}

int Breakfast :: getCal(){
    return _kcal;
}

void Breakfast :: Add(int type){
    _count += 1;
    switch(type){
    case 1:
        _small += 1;
        _kcal += 200;
        break;
    case 2:
        _medium += 1;
        _kcal += 400;
        break;
    case 3:
        _large += 1;
        _kcal += 600;
        break;
    }
}


ostream& operator<<(ostream& os, const Breakfast & bfs){
    os<<"Breakfast:"<<endl;
    os<<"\tSmall portion number: "<<bfs._small<<endl;
    os<<"\tMiddle portion number: "<<bfs._medium<<endl;
    os<<"\tLarge portion number: "<<bfs._large<<endl;
    os<<"\tTotal breakfast count: "<<bfs._count<<endl;
    os<<"\tTotal calori taken: "<<bfs._kcal<<" kcal"<<endl;

    return os;
}
//---------------------------------------------------------

/////// Lunch
Lunch :: Lunch(){
    _kcal = 0;
    _small = 0;
    _medium = 0;
    _large = 0;
    _count = 0;

}

Lunch :: Lunch(int portion){

    _kcal = 0;
    _small = 0;
    _medium = 0;
    _large = 0;
    _count = 1;

    switch(portion){

    case small:
        _small = 1;
        _kcal = 400;
        break;

    case medium:
        _medium = 1;
        _kcal = 600;
        break;

    case large:
        _large = 1;
        _kcal = 800;
        break;

    default:
        cout<<"Wrong type selection!!!"<<endl;
        exit(1);
    }
}

Lunch :: Lunch(const Lunch &lunch){

    _kcal = lunch._kcal;
    _small = lunch._small;
    _medium = lunch._medium;
    _large = lunch._large;
    _count = lunch._count;
}

int Lunch :: getCount(){
    return _count;
}

int Lunch :: getCal(){
    return _kcal;
}

void Lunch :: Add(int type){
    _count += 1;
    switch(type){
    case 1:
        _small += 1;
        _kcal += 400;
        break;
    case 2:
        _medium += 1;
        _kcal += 600;
        break;
    case 3:
        _large += 1;
        _kcal += 800;
        break;
    }
}


Lunch & Lunch :: operator=(Lunch lunch){
    _kcal = lunch._kcal;
    _small = lunch._small;
    _medium = lunch._medium;
    _large = lunch._large;
    _count = lunch._count;

    return *this;
}

Lunch & Lunch :: operator+=(int portion){

    _count++;

    switch(portion){

    case small:
        _small++;
        _kcal += 400;
        break;

    case medium:
        _medium++;
        _kcal += 600;
        break;
    case large:
        _large++;
        _kcal += 800;
        break;
    default:
        cout<<"Wrong type selection!!!"<<endl;
        exit(1);
    }
    return *this;
}

ostream& operator<<(ostream& os, const Lunch & lunch){
    os<<"Lunch:"<<endl;
    os<<"\tSmall portion number: "<<lunch._small<<endl;
    os<<"\tMiddle portion number: "<<lunch._medium<<endl;
    os<<"\tLarge portion number: "<<lunch._large<<endl;
    os<<"\tTotal lunch count: "<<lunch._count<<endl;
    os<<"\tTotal calori taken: "<<lunch._kcal<<" kcal"<<endl;

    return os;
}
//---------------------------------------------------------


/////// Dinner
Dinner :: Dinner(){
    _kcal = 0;
    _small = 0;
    _medium = 0;
    _large = 0;
    _count = 0;

}

Dinner :: Dinner(int portion){

    _kcal = 0;
    _small = 0;
    _medium = 0;
    _large = 0;
    _count = 1;

    switch(portion){

    case small:
        _small = 1;
        _kcal = 400;
        break;

    case medium:
        _medium = 1;
        _kcal = 600;
        break;

    case large:
        _large = 1;
        _kcal = 800;
        break;

    default:
        cout<<"Wrong type selection!!!"<<endl;
        exit(1);
    }
}

Dinner :: Dinner(const Dinner &dinner){
    _kcal = dinner._kcal;
    _small = dinner._small;
    _medium = dinner._medium;
    _large = dinner._large;
    _count = dinner._count;
}

int Dinner :: getCount(){
    return _count;
}

int Dinner :: getCal(){
    return _kcal;
}

void Dinner :: Add(int type){
    _count += 1;
    switch(type){
    case 1:
        _small += 1;
        _kcal += 400;
        break;
    case 2:
        _medium += 1;
        _kcal += 600;
        break;
    case 3:
        _large += 1;
        _kcal += 800;
        break;
    }
}


Dinner & Dinner :: operator=(Dinner dinner){
    _kcal = dinner._kcal;
    _small = dinner._small;
    _medium = dinner._medium;
    _large = dinner._large;
    _count = dinner._count;

    return *this;
}

Dinner & Dinner :: operator+=(int portion){

    _count++;

    switch(portion){

    case small:
        _small++;
        _kcal += 400;
        break;

    case medium:
        _medium++;
        _kcal += 600;
        break;
    case large:
        _large++;
        _kcal += 800;
        break;
    default:
        cout<<"Wrong type selection!!!"<<endl;
        exit(1);
    }
    return *this;
}

ostream& operator<<(ostream& os, const Dinner & dinner){
    os<<"Dinner:"<<endl;
    os<<"\tSmall portion number: "<<dinner._small<<endl;
    os<<"\tMiddle portion number: "<<dinner._medium<<endl;
    os<<"\tLarge portion number: "<<dinner._large<<endl;
    os<<"\tTotal dinner count: "<<dinner._count<<endl;
    os<<"\tTotal calori taken: "<<dinner._kcal<<" kcal"<<endl;

    return os;
}

