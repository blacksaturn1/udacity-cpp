#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using std::cout;
using std::ifstream;
using std::string;
using std::vector;
using std::istringstream;

// TODO: Add the ParseLine function here.
/*
Write a vector<int> ParseLine function which accepts a string as an argument. 
Use std::istringstream to parse the line by comma chars, 
and store the ints in a vector<int>. 
ParseLine should return the vector after parsing.

Note: you will need to #include <sstream> 
to use istringstream. Additionally, you may want 
to add using std::istringstream; to your program. Finally, remember that each line of the board will look something like: 1,0,0,0,0,, so you may want to stream an int and a char with each pass through a while loop.


*/

vector<int> ParseLine(string input){
    std::istringstream stringStream(input);
    vector<int> result;
    char c;
    int n;
    while(stringStream>>n>>c && c==','){
      result.push_back(n);
    }
    return result;

}


// TODO: Change the return type of ReadBoardFile.
vector<vector <int>> ReadBoardFile(string path) {
  ifstream myfile (path);
  // TODO: Declare an empty board variable here with
  // type vector<vector<int>>.
  vector<vector <int>> v;
  if (myfile) {
    string line;
    while (getline(myfile, line)) {
      // TODO: Replace the "cout" code with a call to ParseLine for each line and push the results of ParseLine to the back of the board.
      //cout << line << "\n";
      v.push_back( ParseLine(line) );
    }

  }
  // TODO: Return the board variable.
  return v;
}


// void ReadBoardFile(string path) {
//   ifstream myfile (path);
//   if (myfile) {
//     string line;
//     while (getline(myfile, line)) {
//       cout << line << "\n";
//     }
//   }
// }

void PrintBoard(const vector<vector<int>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      cout << board[i][j];
    }
    cout << "\n";
  }
}

#include "test_parseline.cpp" // For testing.

int main() {
  ReadBoardFile("1.board");
  TestParseLine(); // For testing.
  // Leave commented out.
  // PrintBoard(board);
}