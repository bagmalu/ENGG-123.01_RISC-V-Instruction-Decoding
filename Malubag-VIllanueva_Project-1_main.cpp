// Malubag, Villanueva
// 4 BS Computer Engineering

// ENGG 123.01
// Project 1: RISC-V Instruction Decoding

#include <iostream>
#include <algorithm>
#include <bitset>

// #include "Malubag-Villanueva_Project-1_functions.h"

using namespace std;

bool isValidHex(const string &s)
{
  if(s.length() != 8) return false;
  for(int i=0; i<s.length(); i++)
  {
    char c = s[i];
    if(!isxdigit(c)) return false;
  }
  return true;
}

int main()
{
  cout << "\nRISC-V Instruction Decoding"
       << "\n(Type EXIT to terminate the program.)" << endl;
  
  string userInput = "";
  
  while(true)
  {
    cout << "\nInput instructions here:\n> ";
    getline(cin, userInput);
    cout << userInput.length() <<endl;
    transform(userInput.begin(), userInput.end(), userInput.begin(), [](unsigned char c) {return toupper(c); });

    if(userInput == "EXIT")
    {
      cout << "\nProgram has been terminated.\n" << endl;
      return 0;
    }

    if(!isValidHex(userInput))
    {
      cout << "ERROR: Please input an 8-bit hex value." << endl;
    }
    else
    {
      unsigned long instruction = stoul(userInput, nullptr, 16);
      cout << userInput << " | " << bitset<32>(instruction) << endl;

      unsigned long opcode =  instruction & 0x7F;
      unsigned long rd =     (instruction >> 7)  & 0x1F;

      //checks if opcode is part of the options from the specifications
      if(
          (opcode == 0b0110011  ||  // add and sub
           opcode == 0b0010011  ||  // addi
           opcode == 0b0000011  ||  // ld
           opcode == 0b0100011)     // sd
          // && rd != 0
        )
      {
        // cout << "ERROR: The value of rd cannot be modified." << endl;
        continue;
      }

      // // R Format
      // unsigned long funct3 = (instruction >> 12) & 0x07;
      // unsigned long rs1 =    (instruction >> 17) & 0x1F;
      // unsigned long rs2 =    (instruction >> 22) & 0x1F;
      // unsigned long funct7 = (instruction >> 25) & 0x7F;

      // // I Format
      // unsigned long immediate = (instruction >> 20) & 0xFFF;

      // // S Format
      // unsigned long imm_short = (instruction >> 7) & 0x1F;
      // unsigned long imm_long =  (instruction >> 25) & 0x7F;
    }
  }
}