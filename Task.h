#include <string>
#include <vector>

using namespace std;

struct Task
{
	string description;
	bool done;
};

void SaveTasksToFile(const vector<Task>& tasks, const string& fileName);
vector<Task> LoadTasksFromFile(const string& fileName);