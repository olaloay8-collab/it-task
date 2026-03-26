#include <iostream>
#include <string>
using namespace std;

int main() {
    // --- متغيرات قابلة للتعديل من قبل الزميلات ---
    string carName = "Zainab's Car"; // يمكن للزميلة تعديل الاسم
    string wheelType = "O";          // يمكن للزميلة تعديل شكل التايرات
    string colorCode = "0A";         // يمكن للزميلة تعديل اللون (Hacker style)
    string bodyMaterial = "======";  // يمكن للزميلة تعديل شكل الهيكل
    
    // تطبيق اللون
    string colorCmd = "color " + colorCode;
    system(colorCmd.c_str());

    cout << "Project: Collaborative Car Design" << endl;
    cout << "Owner: " << carName << endl;
    cout << "-------------------------------" << endl;

    // رسم السيارة
    cout << "      ___" << endl;
    cout << "     //  || \\\\" << endl;
    cout << "  __" << bodyMaterial << "__" << endl;
    cout << "  " << wheelType << "           " << wheelType << endl;

    return 0;
}
