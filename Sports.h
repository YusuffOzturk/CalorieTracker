//
//  Sports.h
//  Calorie Tracker
//
//  Created by Yusuf Öztürk on 27.05.2021.
//

#ifndef Sports_h
#define Sports_h
#include <iostream>
class Basketball{
private:
    int _minute;
    int _kcal;
    int KCALPERMINUTE = 6;

public:
    Basketball();
    Basketball(int minute);
    Basketball(const Basketball &bask);
    int getMinute();
    int getCal();
    void Add(int minute);

    Basketball& operator=(Basketball bask);
    Basketball& operator+=(int minute);

    friend std::ostream& operator<<(std::ostream& os, const Basketball & bask);
};


class Football{
private:
    int _minute;
    int _kcal;
    int KCALPERMINUTE = 5;

public:
    Football();
    Football(int minute);
    Football(const Football &fball);
    int getMinute();
    int getCal();
    void Add(int minute);

    Football& operator=(Football fball);
    Football& operator+=(int minute);

    friend std::ostream& operator<<(std::ostream& os, const Football & fball);
};


class Tennis{
private:
    int _minute;
    int _kcal;
    int KCALPERMINUTE = 5;

public:
    Tennis();
    Tennis(int minute);
    Tennis(const Tennis &tennis);
    int getMinute();
    int getCal();
    void Add(int minute);

    Tennis& operator=(Tennis tennis);
    Tennis& operator+=(int minute);

    friend std::ostream& operator<<(std::ostream& os, const Tennis & tennis);
};


class Swimming{
private:
    int _minute;
    int _kcal;
    int KCALPERMINUTE = 7;

public:
    Swimming();
    Swimming(int minute);
    Swimming(const Swimming &swim);
    int getMinute();
    int getCal();
    void Add(int minute);

    Swimming& operator=(Swimming swim);
    Swimming& operator+=(int minute);

    friend std::ostream& operator<<(std::ostream& os, const Swimming & swim);
};


#endif /* Sports_h */
