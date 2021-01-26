#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference 
{
    private:
    	vector<int> elements;
  
    public:
  	int maximumDifference;
        Difference(vector<int> a)
    	{
        	this->elements=a;
    	}
    	void computeDifference()
    	{
        	int i,j,max=0;
        	for(i=0;i<elements.size();i++)
        	{
            		for(j=i+1;j<elements.size();j++)
            		{
                	int diff;
                	diff = abs(elements[i]-elements[j]);
                	if(diff>max)
                	max=diff;
            		}
        	}
        	maximumDifference=max;
    	}
	
};

int main() 
{
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) 
    {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}