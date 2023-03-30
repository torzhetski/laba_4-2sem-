#include <thread>
#include <iostream>
#include "Apteka.h"
#include <semaphore>

using namespace std;
 int main()
{

     setlocale(LC_ALL, "Rus");
     Apteka bayer;
     
     
         thread drugsWithRecipe(&Apteka::PrintDrugsWithRecipe,&bayer);
        
         thread drugsWithoutRecipe(&Apteka::PrintDrugsWithoutRecipe,&bayer);

         drugsWithRecipe.join();
         drugsWithoutRecipe.join();
         bayer.PrintCheck();

}
