#include "wtr.h"
#include <iostream>
#include <string>
#include <fstream>

void wtr_set ()
{
  std::string week_task;
  int hour_of_day {6};
  std::ofstream output_file ("/home/anon/Study_Programs/Cpp/day_week_tasks/week_task.txt");
  while(hour_of_day < 23)
  {
    std::cout << "Type the task of " << hour_of_day << ": ";
    std::getline (std::cin, week_task);
    
   if (output_file.is_open())
    {
      std::cerr << "Task Recorded.\n";
    }
    
    else
    {
      std::cerr << "Error: Task Not Recorded.\n";
    }
    
    if (hour_of_day <= 9)
    {
      output_file << "0" << hour_of_day << ":00h : " << week_task << "\n";
    }
    
    else
    {
      
      output_file << hour_of_day << ":00h : " << week_task << "\n";
    }
    
    hour_of_day++;
  }

    output_file.close ();
}
