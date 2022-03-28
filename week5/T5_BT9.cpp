#include<iostream>
using namespace std;

struct company {
  string name;
  int hours, salary;
};
void nhapDL(company a) {
    getline(cin,a.name);
    cin >> a.salary;
    cin >> a.hours;
}
void DS(company people[]) {
    for (int i =1; i <=10; i++) {
      if (people[i].hour_per_day >=12)
         people[i].salary +=150;
      else if (people[i].hour_per_day >=10)
         people[i].salary +=100;
      else if (people[i].hour_per_day >=8)
         people[i].salary +=50;
    }
    for (int i =1; i <=10; i++) {
        cout <<people[i].name <<" " <<people[i].salary <<endl;
    }   
}
int main() {
    company people[10];
    for(int i=1;i<=10;i++) {
        nhapDL(people[i]);
    }
    DS(people);
    return 0;
}