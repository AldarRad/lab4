#include <iostream>
#include <random>
#include<ctime>
#include <vector>
int main()
{
    srand(time(NULL));
    int average = 0,length,sum=0;
    std::cin >> length;
    std::vector <std::vector <int>> mas(length);
    for(int i=0;i<length;i++)    
    {
        mas[i].resize(length);
    }
    for (int i=0;i<length;i++)
    {                
        for(int j=0;j<length;j++) 
        {
            mas[i][j]= rand() % (i + 1);
            sum += mas[i][j];
            std::cout << mas[i][j] << " ";
        }
        std::cout << "\n";   
    }
    std::cout << sum;
    std::cout << "\n";
    std::cout << "\n";
    
    for (int i = 0;i <length;i++)
    {
        for (int j = 0;j <length;j++)
        {            
            mas[i][j] = (sum - mas[i][j])/(length * length - 1);
            std::cout << mas[i][j] << " ";         
        }
        std::cout << "\n";
    }
}
