// Malubag, Villanueva
// 4 BS Computer Engineering

// ENGG 123.01
// Project 1: RISC-V Instruction Decoding

#include <iostream>
#include <fstream>
// #include <vector>
// #include <sstream>
// #include <cmath>

// #include "Malubag-Villanueva_Project-1_functions.h"

using namespace std;

int main(int argc, char *argv[])
{
  cout << "\nRISC-V Instruction Decoding" << endl;
      //  << "\nType \"help\" for more information." << endl;
  
  string userInput = "";
  
  while(userInput != "exit")
  {
    cout << "Input instructions here:\n> ";
    getline(cin, userInput);

    if(userInput == "exit")
    {
      cout << "\nProgram has been terminated." << endl;
      return 0;
    }

    ifstream inputFile(userInput);
  }
}

/*
notes:
registers: 5 bit (0 to 31)
- 00000 = rs0 = hardwired to 0, otherwise error
*/

// int main(int argc, char *argv[])
// {
  // if((argc < 6) || (argc > 7))
  // {
  //   cout << "\nInput format should be: " << argv[0] << " <signal-file>" <<
  //   "<sampling-rate> <start-freq> <end-freq>" <<
  //        "<num of steps> <output-file>" << endl;

  //   cout << "\nProgram has been terminated" << endl;
  // }
  // else
  // {
    // //input file
    // string signal_file = argv[1];

    // //initialize values based on command prompt
    // stringstream s;

    // //output file
    // string output = (argc == 7) ? argv[6] : "dftlog.txt";
    // cout << "\nOutput will be uploaded to: " << output << endl;

    // int l_points = 0; //duration

    // double * data = importData(signal_file, l_points);\

    // double * real_part = new double[nSteps];
    // double * imag_part = new double[nSteps];
    // double * magnitude = new double[nSteps];
    // double * phase = new double[nSteps];


    // computeDFT(data, l_points,
    //            sampling_rate, start_freq, end_freq, nSteps,
    //            real_part, imag_part,
    //            magnitude, phase);


    // // Calculate frequency step size
    // double changeinfreq = (end_freq - start_freq) / (nSteps);

    // //exporting to output file
    // outputResult(output.c_str(), real_part, imag_part, magnitude,
    //              phase, nSteps, start_freq, changeinfreq);
    // cout << "\nOutput successfully written to: " << output << endl;

  // }
//   return 0;
// }
