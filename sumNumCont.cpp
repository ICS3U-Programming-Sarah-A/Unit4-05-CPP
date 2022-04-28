// Copyright (c) 2022 Sarah All rights reserved.
//
// Created by: Sarah
// Date: Apr, 21, 2022
// This program asks the user to enter a number to determine how many numbers
// the user would like to add. It then add those numbers together until it
// reaches to what user entered. Then calculates the sum with the numbers &
// displays it while using loops & continue statements.
#include <iostream>

int main() {
  // initialize the loop counter and sum
  int counter = 0;
  int sum = 0;
  // declare variables & strings
  int userNumInt;
  int userNum2Int;
  std::string userNumString;
  std::string userNum2String;

  while (true) {
    // get user number as a string
    std::cout << "How many numbers would you like to add?: ";
    std::cin >> userNumString;
    std::cout << std::endl;

    try {
        // converts from string to integer
        userNumInt = std::stoi(userNumString);

        if (userNumInt >= 0) {
            // sets a range, as well as, calculates the sum of the entered
            // number.
            while (counter < userNumInt) {
                std::cout << "Enter a whole number: ";
                std::cin >> userNum2String;

                try {
                  // converts entered number from string to integer
                  userNum2Int = std::stoi(userNum2String);
                  if (userNum2Int >= 0) {
                    std::cout << userNum2Int << " added to the sum.\n";
                    std::cout << std::endl;
                    sum = sum + userNum2Int;
                    counter = counter + 1;
                  }
                  if (userNum2Int < 0) {
                      std::cout << userNum2Int;
                      std::cout << " is negative, so it cannot be added\n";
                      std::cout << std::endl;
                      continue;
                  }
                // handles error case
                } catch (std::invalid_argument) {
                  // The user did not enter a number.
                  std::cout << userNum2String << " is not a number.\n";
                  std::cout << std::endl;
                  continue;
                  }
              }
              if (counter == userNumInt) {
                // display the sum and calculation to the user
                std::cout << "The sum is = " << sum << ".";
                break;
              }
          } else {
              std::cout << "Please enter a whole number.\n";
              std::cout << std::endl;
          }
      // determines if the the answer is a number
    } catch (std::invalid_argument) {
      // The user did not enter a number.
      std::cout << userNumString << " is not a number.\n";
      std::cout << std::endl;
      }
  }
}
