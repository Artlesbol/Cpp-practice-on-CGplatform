#include <iostream>
using namespace std;
class questiontwo
{
public:
       int answer(int sum)
       {
	  if(sum == 1)
          {
	     cout<<" "<<sum;
	     return sum;
	  }
          else
          {
	      if((sum%2) == 1){
		  sum=sum*3+1;
  						cout<<sum<<" ";
  						return answer(sum);

	      }
              else{
		  sum>>=1;
  						cout<<sum<<" ";
  						return answer(sum);

	      }
	   }			
	}
};
int main()
{
	int c ;
	cin>>c;
	questiontwo question2;
	question2.answer(c);
	return 0;
}

