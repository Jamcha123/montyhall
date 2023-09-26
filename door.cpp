#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iterator>
#include <array>

int main()
{
    std::array<std::string, 3> arr1 = {"nothing", "A new car"};
    int choice;
    srand(time(0));
    float host;

    std::cout << "their are three doors and one door has a brand new car behind it" << std::endl;
    std::cout << "pick between 1 - 3" << std::endl;
    std::cin >> choice;
    try{
        switch(choice){
            case 1:
                choice = 1;
                break;
            case 2:
                choice = 2;
                break;
            case 3:
                choice = 3;
                break;
            default:
                throw(choice);
        }
    }
    catch(int e){
        std::cout << "error " << e << std::endl;
    }
    system("cls");
    std::cout << "host will now open a door" << std::endl;
    while(host == choice){
        host = 0;
        host = rand()%3 + 1;
        if(host != choice){
            continue;
        }
    }
    std::cout << "host has open door " << host << std::endl;
    char chose;
    std::cout << "stick with the current door(y/n)";
    std::cin >> chose;
    int prob;
    if(chose == 'y'){
            prob = rand()%3 + 1;
            switch(prob){
                case 1:
                    std::cout << arr1[0] << std::endl;
                    break;
                case 2:
                    std::cout << arr1[0] << std::endl;
                    break;
                case 3:
                    std::cout << arr1[1] << std::endl;
                    break;
            }
    }else if(chose == 'n'){
        prob = rand()%3 + 1;
        switch(prob){
            case 1:
                std::cout << arr1[0] << std::endl;
                break;
            case 2:
                std::cout << arr1[1] << std::endl;
                break;
            case 3:
                std::cout << arr1[1] << std::endl;
                break;
        }
    }
}
