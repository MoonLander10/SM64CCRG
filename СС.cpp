#include <iostream>
#include <experimental/random>
#define hexfix std::cout << "";
#define end std::cout << "\n";
#define null std::cout << "00\n";
char vibor;
void logo() 
{
std::cout << "                                       \n";
std::cout << "                                       \n";
std::cout << "                                       \n";
std::cout << "           @@             =@*          \n";
std::cout << "           @@             :@#          \n";
std::cout << "           @@             :@#          \n";
std::cout << "           @@             :@#          \n";
std::cout << "           @@             :@#          \n";
std::cout << "           @@             .@@          \n";
std::cout << "           @@              @@          \n";
std::cout << "                           @@          \n";
std::cout << "                                     .@\n";
std::cout << "                                 @@@@@@\n";
std::cout << "                            @@@@@#     \n";
std::cout << "                       @@@@@@          \n";
std::cout << "                 :@@@@@@               \n";
std::cout << "          -@@@@@@@.                    \n";
std::cout << "   @@@@@@@@.                           \n";
std::cout << "                                       \n";
std::cout << "                                       \n";
std::cout << "==============================================\n";
std::cout << "Welcome to SM64 Color Code Random Generator!!\n";
std::cout << "==============================================\n";
std::cout << "select skin color:\n";
std::cout << "Random (0)\n";
std::cout << "White (1)\n";
std::cout << "Swarthy (2)\n";
std::cout << "Exit (e)\n";
std::cout << "==============================================\n";
}
void hex() 
{
int short hexid;
int short counter;
gen:
if (counter == 2) {
return;
}
++counter;
hexid = std::experimental::randint(1, 16);
switch (hexid) {
case 1:
std::cout << 'A';
goto gen;
case 2:
std::cout << 'B';
goto gen;
case 3:
std::cout << 'C';
goto gen;
case 4:
std::cout << 'D';
goto gen;
case 5:
std::cout << 'E';
goto gen;
case 6:
std::cout << 'F';
goto gen;
case 7:
std::cout << '0';
goto gen;
case 8:
std::cout << '1';
goto gen;
case 9:
std::cout << '2';
goto gen;
case 10:
std::cout << '3';
goto gen;
case 11:
std::cout << '4';
goto gen;
case 12:
std::cout << '5';
goto gen;
case 13:
std::cout << '6';
goto gen;
case 14:
std::cout << '7';
goto gen;
case 15:
std::cout << '8';
goto gen;
case 16:
std::cout << '9';
goto gen;
};
}
int main() {
cat:
logo();
std::cout << ">> ";
std::cin >> vibor;
if (vibor == 'e')
{
std::cout << "Goodbye User!!\n";
goto exit;
}
if (vibor == 'n')
{
std::cout << "nigga pracar mode enabled\n";
}
if (vibor == '0' || vibor == '1' || vibor == '2' || vibor == 'n') 
{
std::cout << "8107EC40 "; hex(); hexfix hex(); end //цвет кепки
std::cout << "8107EC42 "; hex(); null //цвет кепки
std::cout << "8107EC38 "; hex(); hexfix hex(); end //тень кепки
std::cout << "8107EC3A "; hex(); null //тень кепки
if (vibor == '0') {
std::cout << "8107EC88 "; hex(); hexfix hex(); end //цвет еблета
std::cout << "8107EC8A "; hex(); null //цвет еблета
std::cout << "8107EC80 "; hex(); hexfix hex(); end //тень еблета
std::cout << "8107EC82 "; hex(); null //тень еблета
}
if (vibor == '1') {
std::cout << "8107EC88 FCBF\n";
std::cout << "8107EC8A 7900\n";
std::cout << "8107EC80 8160\n";
std::cout << "8107EC82 3C00\n";
}
if (vibor == '2') {
std::cout << "8107EC88 865E\n";
std::cout << "8107EC8A 3C00\n";
std::cout << "8107EC80 6345\n";
std::cout << "8107EC82 2C00\n";
}
if (vibor == 'n') {
std::cout << "8107EC88 0000\n";
std::cout << "8107EC8A 0000\n";
std::cout << "8107EC80 0000\n";
std::cout << "8107EC82 0000\n";
}
std::cout << "8107EC58 "; hex(); hexfix hex(); end //цвет перчаток
std::cout << "8107EC5A "; hex(); null //цвет перчаток
std::cout << "8107EC50 "; hex(); hexfix hex(); end //тень перчаток
std::cout << "8107EC52 "; hex(); null //тень перчаток
std::cout << "8107EC28 "; hex(); hexfix hex(); end //цвет подштанников хуй знает что это
std::cout << "8107EC2A "; hex(); null //цвет подштанников хуй знает что это
std::cout << "8107EC20 "; hex(); hexfix hex(); end //тень подштанников хуй знает что это
std::cout << "8107EC22 "; hex(); null //тень подштанников хуй знает что это
std::cout << "8107ECA0 "; hex(); hexfix hex(); end //цвет волос
std::cout << "8107ECA2 "; hex(); null //цвет волос
std::cout << "8107EC98 "; hex(); hexfix hex(); end //тень волос
std::cout << "8107EC9A "; hex(); null //тень волос
std::cout << "8107EC70 "; hex(); hexfix hex(); end //цвет ботинков
std::cout << "8107EC72 "; hex(); null //цвет ботинков
std::cout << "8107EC68 "; hex(); hexfix hex(); end //тень ботинков
std::cout << "8107EC6A "; hex(); null //тень ботинков
}
else
{
std::cout << "unknown choice";
goto cat;
}
exit:
return 0;
}
