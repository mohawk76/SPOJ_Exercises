#include <iostream>
#include <cctype>
#include <string>

int main()
{
    std::string Dkod;
    std::string Mkod;
    while(std::getline(std::cin, Mkod))
    {
        Dkod+=Mkod;
        Dkod+="\n";
        if(Mkod=="</html>")
            break;
    }
    for(int i=0;i<Dkod.length();i++)
    {
        if(Dkod[i]=='<')
        {
            while(Dkod[i]!='>')
            {
                Dkod[i]=toupper(Dkod[i]);
                i++;
            }
        }
    }
    std::cout << Dkod << std::endl;

    return 0;
}
