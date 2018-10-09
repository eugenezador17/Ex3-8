#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(nullptr));
    cout << time(nullptr) << endl;

    const size_t size = 5;
    const size_t cols[size] = {8, 6, 3, 2, 6};

    int** nums = new int*[size];
    cout << nums << endl;
    for(unsigned int i = 0; i < size; i++){
        nums[i] = new int[cols[i]];//Выделение памяти под cols[i] intов
        cout << "| ";
        for(unsigned int j = 0; j < cols[i]; j++){
            //*(*(nums + i) + j) = rand()%10;
            nums[i][j] = rand()%10;
            cout << nums[i][j] << " | ";
        }
        cout << endl;
    }
    for(unsigned int i = 0; i < size; i++){
        delete[] nums[i];
    }
    delete[] nums;
    system("pause");
    return 0;
}
