#include <iostream>
#include <string>
using namespace std;
class factory{
    public:
    string employees;
    string machines;
    string salary;
     factory(string employees,string machines,string salary ){
        this->employees=employees;
        this->machines=machines;
        this->salary=salary;
     }
     void game (){
        cout<<"Name = "<<employees<<endl;
        cout<<"machinery="<<machines<<endl;
        cout<<"amount="<<salary<<endl;

     }
};
main(){
    factory o1 ("ahmad","gun machine ","1000");
    o1.game();
    factory o2("ahsan ","laser machine ","2000");
    o2.game();
}