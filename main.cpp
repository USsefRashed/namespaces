/*A namespace is designed to overcome this difficulty and is used as additional 
information to differentiate similar functions, classes, variables etc. with the same name
available in different libraries. Using namespace, you can define the context in which
names are defined. In essence, a namespace defines a scope.*/
/********************************************************************/
/*Namespaces can be nested where you can define one namespace inside another name space
 as follows −*/

/*namespace namespace_name1 {
   // code declarations
   namespace namespace_name2 {
      // code declarations
   }
}*/
/***************************************************/
/*You can access members of nested namespace by using resolution operators as follows*/

/*
// to access members of namespace_name2
using namespace namespace_name1::namespace_name2;

// to access members of namespace:name1
using namespace namespace_name1;*/
#include<iostream>
using namespace std;
namespace first
{
 void fun()
 {cout<<"I'm in first namespace"<<endl;}   
}
namespace second
{
    void fun()
    {cout<<"I'm in second namespace"<<endl;}
}
/******************************************************************/
//now I'll do the same by using directive way
namespace third
{
    void fun()
    {cout<<"I'm in third namespace by using directive\n";}
}
//NESTED TEST
namespace Primary
{
    void fun()
    {cout<<"I'm in primary namespace\n";}
    namespace Nested
    {
        void fun()
        {cout<<"I'm in Nested namesapce\n";}
    }
}
//NOTE till now we can't use dirctively namespace mor than 1 
//using namespace third;//directivly
using namespace Primary::Nested;
int main()
{
    first::fun();
   second::fun();
   //fun();//directivly
   fun();
}



