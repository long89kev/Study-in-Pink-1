/*
* Ho Chi Minh City University of Technology
* Faculty of Computer Science and Engineering
* Initial code for Assignment 1
* Programming Fundamentals Spring 2023
* Author: Vu Van Tien
* Date: 02.02.2023
*/

//The library here is concretely set, students are not allowed to include any other libraries.

#include "study_in_pink1.h"
#include <vector>

using namespace std;

void sa_tc_01() {
    cout << "----- Sample Testcase 01 -----" << endl;
    string input_file("sa_tc_01_input");

    int HP1, HP2, EXP1, EXP2, M1, M2, E1, E2, E3;
    if (!readFile(input_file, HP1, HP2, EXP1, EXP2, M1, M2, E1, E2, E3)) {
        return;
    }

    // cout << "HP1: " << HP1 << ", HP2: " << HP2 << ", EXP1: " << EXP1 << ", EXP2: " << EXP2 << ", M1: " << M1 << ", M2: " << M2 << ", E1: " << E1 << ", E2: " << E2 << ", E3: " << E3 << endl;

    // //Task 1
    // int result1 = firstMeet(EXP1, EXP2, E1);
    // cout << "EXP1: " << EXP1 << ", EXP2: " << EXP2 << ", result1: " << result1 << endl;

    // //Task 2
    // int result2 = traceLuggage(HP1, EXP1, M1, E2);
    // cout << "HP1: " << HP1 << ", EXP1: " << EXP1 << ", M1: " << M1 <<", result2: " << result2 << endl;

    // //Task 3
    // int result3 = chaseTaxi(HP1, EXP1, HP2, EXP2, E3);
    // cout << "HP1: " << HP1 << ", EXP1: " << EXP1 << ", HP2: " << HP2 << ", EXP2: " << EXP2 << ", result3: " << result3 << endl;

    

    // //Task 4
    // string email, s;
    // ifstream file(input_file);
    // if (file.is_open()) {
    //     getline(file, s);
    //     getline(file, email);
    //     file.close();
    // }
    // int result4 = checkPassword(s.c_str(), email.c_str());
    // cout << "email: " << email << endl;
    // cout << "s: " << s << endl;
    // cout << "result4: " << result4 << endl;

    //Task 5
    // ifstream file(input_file);
    // int num_pwds = 11;
    // vector<string> arr_pwds = {"123cbhLm@#", "70@#aj6qE", "70@#aj6qE", "89@#okcneuRY45", "cbw#mc@$7819kcj", "70@#aj6qE", "cbw#mc@$7819kcj", "cbw#mc@$7819kcj", "124cbhKq2#", "70@#aj6qE", "cbw#mc@$7819kcj"};
    // file >> num_pwds;
    // for(int i = 0; i < num_pwds; i++) {
    //     string s;
    //     file >> s;
    //     arr_pwds.push_back(s);
    // }
    // const char* arr_pwds_cstr[num_pwds];
    // int i = 0;
    // for(auto &s: arr_pwds) {
    //     const char* str = s.c_str();
    //     arr_pwds_cstr[i++] = str;
    // }
    // int result5 = findCorrectPassword(arr_pwds_cstr, num_pwds);
    // cout << "result5: " << result5 << endl;
}

int main(int argc, const char * argv[]) {
    sa_tc_01();

    return 0;
}
