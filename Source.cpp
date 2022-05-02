/*Avazbek Husainov
Homework 15
5/2/2022*/

#include<iostream>
#include<string>

using namespace std;

template<typename C>

C half(C value)
{
    C chan;
    chan = value / 2;

    if (*typeid(value).name() == 'i') //rounding of the val while val is of int type
    {
        if (chan * 2 != value)
        {
            chan++;
        }
    }
    return chan;
}

char character(char start, int offset)
{
	if (start < 'A' or (start > 'Z' and start < 'a') or start>'z')
		throw "invalidCharacterException";

	char point = start + offset;

	if (point < 'A' or (point > 'Z' and point < 'a') or point>'z')
		throw"invalidRangeException";

	if (!((isupper(start) == 0) ^ (islower(point) == 0)))
		throw "upperLowerExcetion";

	return point;
}

int main()
{

    double a = 7.0;
    float b = 5.0f;
    int c = 3;

    cout << half(a)<<endl;
    cout << half(b)<<endl;
    cout << half(c)<<endl;


    try 
    {
        char chara = character('a', 1);
        cout << chara << "\n";
        chara = character('a', -1);
        cout << chara << "\n";
        chara = character('Z', -1);
        cout << chara << "\n";
        chara = character('?', 5);
        cout << chara << "\n";
        chara = character('A', 32);
        cout << chara << "\n";
    }
    catch (const char* massage) 
    {
        cout << massage << "\n";
    }

    cout << endl << endl;
    system("pause");
    return 0;
}