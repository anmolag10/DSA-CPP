#include<iostream>
#include<vector>
using namespace std;
 
 int main()
 {
	 vector<int> vec1;
	 vector<int> vec2;

	 vec1.push_back(10);
	 vec2.push_back(20);
	 cout<<vec2.at(0)<<" Size: "<<vec2.size();

	 vector<vector<int>> vec2D;
	 vec2D.push_back(vec1);
	 vec2D.push_back(vec2);

       cout<< vec2D.at(0).at(0)<<" "<<vec2D.at(1).at(1)<<endl;
	



 }