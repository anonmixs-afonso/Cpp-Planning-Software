#include "wtr.h"
#include <iostream>
#include <string>
#include <fstream>

void wtr_set ()
{
  std::string week_task;
  int hour_of_day {6};
  for (int i = 0; i < 7; i++)
  {
    std::string file_path = "/home/anon/Study_Programs/Cpp/day_week_tasks/" + std::to_string(i) + ".txt";
    std::ofstream output_file (file_path);
    std::cout << "*********************************\n";
    std::cout << "Week day: " << i + 1 << "\n";
    std::cout << "*********************************\n";
    for (int i = 0; i < 17; i++) 
    {
      std::cout << "Type the task of " << hour_of_day << ":00h: ";
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
    hour_of_day = 6;
    output_file.close ();
  }
  hour_of_day = 0;
}
