#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



bool containsDuplicates(std::vector<int> a) {
bool flag = true;
    if(a.size() == 0)
        return false;
std::sort(a.begin(),a.end());
    for(int i = 0;i <a.size(); i++)
    {
        std::cout<<a[i]<<std::endl;
        if(a[i] == a[i+1])
	{
            flag = true;
	    break;
	}
        else
            flag = false;
    }
return flag;

}
int main()
{
	vector<int>a = {0,1,0,-1};
	if(containsDuplicates(a))
		cout<<"true"<<endl;
	else
		cout<<"false"<<endl;
}
