// Code Provided By Tahir Siddique From Vehari For Inshal Ch
// Statement : 
    // Imagine you are on a trip around Europe and have collected currencies from
    // the different countries that you have travelled.
    // You are to write a simple money counting program. Your program will be able
    // to deal in the following three currencies
    // a) Pakistani Rupee
    // b) Turkish Lira
    // c) Pound Sterling


#include <iostream>
#include <ctime>
using namespace std;
class Currency
{
private:
    string type;
    float val;

public:
    Currency(string typ = "", float v = 0)
    {
        type = typ;
        val = v;
    } // constructor
    void print()
    {
        cout << val << " " << type << endl;
    }
    Currency operator+(Currency const &);
    void operator - ();
    void operator[](string);
    friend class Conversion_Rate;
};
class Conversion_Rate
{
public:
    float convert(Currency const &obj, string type)
    {
        if (obj.type == "pkr")
        {
            if (type == "t1")
                return 0.052 * obj.val;
            else if (type == "gbp")
                return 0.0048 * obj.val;
            return obj.val;
        }
        else if (obj.type == "t1")
        {
            if (type == "pkr")
                return 19.22 * obj.val;
            else if (type == "gbp")
                return 0.093 * obj.val;
            return obj.val;
        }
        else if (obj.type == "gbp")
        {
            if (type == "pkr")
                return 207.7 * obj.val;
            else if (type == "tl")
                return 10.8 * obj.val;
            return obj.val;
        }
        return 0.0;
    }
};
Currency Currency::operator+(Currency const &obj)
{
    Conversion_Rate object;
    Currency res;
    res.type = type;
    res.val = val + object.convert(obj, type);
    return res;
}
void Currency::operator-()
{
    Conversion_Rate object;
    cout << val << " " << type << " = " << object.convert(*this, "pkr") << " pkr" << endl;
    cout << val << " " << type << " = " << object.convert(*this, "tl") << "t1" << endl;
    cout << val << " " << type << " = " << object.convert(*this, "gbp") << "gbp" << endl;
}
void Currency::operator[](string t)
{
    Conversion_Rate object;
    cout << object.convert(*this, t) << endl;
    time_t now = time(0);
    cout << "Date: " << ctime(&now);
    Currency obj(type, 1);
    cout << "Exchange rate: 1 " << type << " = " << object.convert(obj, t) << " " << t << endl;
}
int main()
{
    Currency C1("pkr", 12), C2("t1", 11), C3("gbp", 10);
    Currency C4 = C1 + C2 + C3;
    C4.print();
    -C1;
    C2["pkr"];
}