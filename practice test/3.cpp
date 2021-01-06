#include <iostream>
#include <iomanip>
using namespace std;
class Matrix{
   int line;
   int col;
   char *elems;
public:
   Matrix(){}
   Matrix(int l, int c)
   {
         	line=l;
         	col=c;
         	elems=new char[l*c+1];
         	for(int i=0;i<l*c;i++)
         	{
         		elems[i]='a'+i;
         	}
         	elems[l*c]='\0';
         }

   Matrix(Matrix &x)
         {
         		line=x.line;
         		col=x.col;
         		elems=new char[x.line*x.col+1];
         		for(int i=0;i<line*col;i++)
   	      	{
   	      		elems[i]='a'+i;
   	      	}
   	      	elems[line*col]='\0';
         }

   ~Matrix(){
      delete [] elems;
   }
   bool get(int i, int j, char & x){
      x=elems[i*col+j];

   }
   bool set(int i, int j, char x){
     elems[i*col+j]=x;

   }
   void disp(){
      int i, j;
      char x;
      for (i = 0; i < line; i++){
         for (j = 0; j < col; j++){
            get(i,j,x);
            cout << setw(4) << x;
         }
	 cout << endl;
      }
   }
};
int main(){
   Matrix m1(3,2);
   
   cout << "MAT1" << endl;
   m1.disp();
   Matrix m2(m1);
   cout << "MAT2" << endl;
   m2.disp(); 
   return 0;
}

