#include <iostream>
using namespace std;
int total=0 , more_pizza , quan_pizza , quan_pasta , more_pasta , quan_burger , more_burger, burger_ =0 , pasta_ = 0 , pizza_ = 0 ;
// if coustemer want more



class more_order{
 int want_more ;
 public:
 void display_more(){ cout <<"Do you want to place more order"<<endl;
  cout<<"1 > YES \n"<<"2 > NO \n";
}
int in_more(){
  cin>> want_more;
  return want_more;
}
  // menu
};


int extra(){
more_order M_o;
M_o.display_more();
return M_o.in_more();

}


class Menu{
int choice ;
public:
void display_menu(){
   cout << " 1 > Pizza \n";
   cout << " 2 > Pasta\n";
   cout << " 3 > Burger \n";
   
}
int in_choice(){
  cout<<"Enter what you want to eat (only number) \n";
  cin>> choice;
  return choice;
}
};


// quantity
 class Quantity{
int quantity;
public:
int Enter_quantity(){
  cout<<"Enter how munch quantity you want";
  cin>> quantity;
  return quantity;

}


};
 int qn(){
  Quantity q_n;
 return q_n.Enter_quantity();
}


// if coustmer choice is pizza
class Pizza{
int pizza_choice;
public:
void pizza_menu(){
  cout <<" 1 > Grilled veggies Pizza      :550/- \n";
  cout <<" 2 > Veggie Supreme Pizza       :550/- \n";
  cout <<" 3 >  Margherita pizza          :750/- \n";
  cout <<" 4 > Tandoori Paneer Pizza      :900/-  \n";
  cout <<" 5 > Paneer Tikka Pizza         :850/-  \n";     
}
int in_pizza(){
  cout<<"Enter which type of piza you want to eat (only in number \n)";
  cin>> pizza_choice;
 return pizza_choice;
}
};



// if coustmer choice is pasta
class Pasta{
int pasta_choice,pasta_total;
public:
void pasta_menu(){
  cout <<" 1 > Fettuccine Alfredo      :200/-\n";
  cout <<" 2 > Penne all'Arrabbiata    :260/- \n";
  cout <<" 3 > Tandoori Paneer Pasta   :380/-\n";
  cout <<" 4 > Red souse pasta         :150/- \n";
  cout <<" 5 > White souse pasta       :200/- \n";     
}
int in_pasta(){
  cout<<"Enter which type of piza you want to eat (only in number \n)";
  cin>> pasta_choice;
 return pasta_choice;
}
};



// if coustmer choice is burger
class Burger{
int burger_choice,burger_total;
public:
void burger_menu(){
  cout <<" 1 > Cheese Burger     :200/-\n";
  cout <<" 2 > Veggie Burger     :90/- \n";
  cout <<" 3 > Hamburger         :150/-\n";
   
}
int in_burger(){
  cout<<"Enter which type of Burger you want to eat (only in number \n)";
  cin>> burger_choice;
  return burger_choice;
}
};



//
//
int pasta_total(int t,int* q ){

switch (t)
{
case 1:
 { total +=200 * *q;
  return total ;
 }
case 2:
 { 
  total +=260* *q;
   return total ;
 }
case 3:
 {

  total +=380* *q;
   return total ;
}
case 4:
 {
   total +=150* *q;
   return total ;
 }
case 5:
 {

  total +=200* *q;
   return total ;
}

}}




int pizza_total(int t,int* q){
switch (t)
{
case 1:
  {
    total +=550* (*q);
   return total ;
}
case 2:
  {
    total +=550* (*q);
   return total ;
}
case 3:
  {
    total +=750* (*q);
   return total ;
}
case 4:
 {
   total += 900 * (*q);
   return total ;
}
case 5:
 {
   total +=800* (*q);
   return total ;
}


}}



int burger_total(int t ,int* q){
switch (t)
{
case 1:
  {total += 200 *(*q);
   return total ;
  }
case 2:
  {total += 90 *(*q);
   return total ;
  }
case 3:
 {
   total+= 150 *(*q);
   return total ;
 }

}
}


int _menu(int o){
int quan,more , order;
   switch (o){
case 1:
  {
    Pizza pizza;
  pizza.pizza_menu();
 int order = pizza.in_pizza();
 int quan = qn();
   pizza_ += pizza_total( order ,&quan );
   int  more =extra();
    return more ;
  }


  case 2:
 {
   Pasta pasta;
  pasta.pasta_menu();
   int order = pasta.in_pasta();
 int  quan = qn();
    pasta_ += pasta_total ( order ,&quan );
   int more =extra();
  return more;
 }

case 3:
  {
    Burger burger;
  burger.burger_menu();
   int order = burger.in_burger();
  int quan = qn();
   burger_ +=burger_total (order ,&quan );
  int more =extra();
 return more;
   }

 }
}


int main(){
   cout<<"WELCOME TO OUR RESTRORENT \n";
   cout<<"*** MENU *** \n";
 Menu menu;
menu.display_menu();
int ord= menu.in_choice(); 
int more =  _menu (ord);
for (int i=1;i>0 ;i++){
  if(more==1){
    menu.display_menu();
int ord= menu.in_choice();
   more = _menu (ord);
    
  }
  else
  {
break;
}
}

    cout<<" Your  Total Bill is     :     "<<total<<endl;
    cout <<"Pizza bill is           :     " <<pizza_<<endl;
    cout<<" Pasta bill is           :     "<<pasta_<<endl;
    cout<<"Burger bill is           :     "<<burger_<<endl;
    cout <<" Your Total bill is     :     "<<total<<endl;
    cout <<"Thank You for visit OUR RESTRORENT";

  return 0;
}
