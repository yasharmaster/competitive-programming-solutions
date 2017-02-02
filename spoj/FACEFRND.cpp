#include <cstdio>
#include <unordered_set>
#include <algorithm>

using namespace std;

class frnd{
	public:
		int id;
		int n;
		int *list;
		void set_id(int p){
			id = p;
		}
		void set_n(int p){
			n = p;
		}
		void set_list(){
			list = new int[n];
		}
		void insert_frnds(){
			for(int i=0; i<n; i++){
				int temp;
				scanf("%d", &temp);
				list[i] = temp;
			}
		}
};

int main()
{
	int t, i, temp;
	scanf("%d", &t);
	frnd frnd_list[t];
	unordered_set<int> frnd_set;
	for(i=0; i<t; i++){
		scanf("%d", &temp);
		frnd_set.insert(temp);
		frnd_list[i].set_id(temp);
		scanf("%d", &temp);
		frnd_list[i].set_n(temp);
		frnd_list[i].set_list();
		frnd_list[i].insert_frnds();
	}
	unordered_set<int> fof_set;
	int count=0;
	for(i=0; i<t; i++){
		for(int j=0; j<frnd_list[i].n; j++){
			unordered_set<int>::const_iterator itr = frnd_set.find(frnd_list[i].list[j]);
			if(itr == frnd_set.end()){
				count++;
				frnd_set.insert(frnd_list[i].list[j]);
			}
		}
	}
	
	printf("%d", count);
	
	return 0;
}
	
