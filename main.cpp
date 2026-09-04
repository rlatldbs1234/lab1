#include <iostream>

int main()
{
    int score{};
    char grade{};
    std::cout << "Enter score: ";
    std::cin >> score;

    switch (score / 10){
        case 10:
        case 9: grade = 'A'; break;
        case 8: grade = 'B'; break;
        case 7: grade = 'C'; break;
        case 6: grade = 'D'; break;
        default: grade = 'F';
    }std::cout << score < ", " << grade << std::end1;
    
    // int num0fStudents{31};
    // // if (num0fStudents == 30) std::cout << "default\n";
    // // else std::cout<<"changed\n";
    // (num0fStudents == 30) ? (std::cout << "default\n") : (std::cout<<"changed\n");


    // if (num0fStudents > 30) std::cout << "increased\n";
    // else if (num0fStudents < 30) std::cout << "decreased\n";
    // else std::cout << "default\n";

    // std::cout << num0fStudents++ << std::end1;
    // std::cout << num0fStudents << std::end1;
    // std::cout << ++num0fStudents << std::end1;
    // std::cout << num0fStudents << std::end1;

    // std::cout << "Enter the number of students: ";
    // std::cin >> num0fStudents;
    // std::cout << num0fStudents << std::end1;

//    std::cout << num0fStudents << std::end1;
//    std::cout << sizeof(num0fStudents)<< std::end1;
//    std::cout << typeid(num0fStudents).name<< std::end1;
//    std::cout << typeid(static_cast<double>(num0fStudents)).name() << std::end1;
     return 0;
}