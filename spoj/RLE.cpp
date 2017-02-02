#include <iostream>
#define endl "\n"

using namespace std;

int main()
{
	string line;
	while(getline(cin, line)){
		int i=0, count, current=0, x;
		char c;
		while(i < line.length()){
			count = 0;
			c = line[current];
			while(line[i] == c){
				i++;
				count++;
			}
			if(count > 3){
				cout << count << "!" << c;
			}
			else{
				for(x = 0; x<count; x++)
					cout << c;
			}
			current += count;		
		}
		cout << "\n";
	}
	return 0;
}
