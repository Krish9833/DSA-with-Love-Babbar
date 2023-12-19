#include <iostream>
using namespace std;
int main () {
    
 //int age;
 //print enter the score

  //cout << "enter the age" << endl;
 // take input into score variable
  //cin >> age;
 //if condition
  //if (age>=18) {
    //cout << " I can vote " << endl ;
  //}
  //else{
    //cout << " I cannot vote " << endl ;
  //}
 //for (int i=1; i<10; i=i*2) {
//cout << i  << endl;
 //}
 //for (int i=100; i>0 ;i=i/2){
 // cout << i << endl;
 //}
 //for(int i=1; i<=5; i=i+2){
  //cout << i << endl;
 //}
 // print solid rectangle
 //for (int row=1; row<4; row = row+1)
 //{
  //for (int col=1; col<6; col= col+1)
     //{cout << "*";
    // }
  //   cout << endl;
//}
//row +=1 is same as row=row+1
//print solid rctangle for 4 row
//for ( int row = 0; row <6; row+=1)
//inner loop
//{
  //for (int col=0;col<6; col+=1) 
  //{
    //cout << "*";
//}
//cout << endl;
//}

//}
// hollow rectangle 
// *****
// *   *
// *****

for (int i=0;i<3;i=i+1)

{
  if (i==0 || i==2)
  {
    for (int j=0;j<5;j++)
    {
      cout << "*";
    }
  }
  else {
    cout << "*" ;
   for(int i=0;i<3;i++)
    {
      cout <<" ";
    }
    cout << "*";
  }
  cout << endl ;
}
}