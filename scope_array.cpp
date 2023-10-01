// scope in array
#include <iostream>
using namespace std;

void update(int arr[], int n){
    cout << "Update the value " << endl;
    arr[3] = 120;
    for (int i = 0; i < n; i++)
    {
       cout << arr[i] << endl;
    }

}
int main(){
    int n;
    cout << "Enter the array elements " << endl;
    cin >> n;
    int arr[5] = {1,2,3,4,5};
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    cout << "After the update value " << endl;

    update(arr,n);

    cout << "After updated value from function " << endl;

     for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

}

/*void update()
{
    int a = 10;
    cout << a << endl;
}

int main()
{

    int a = 20;
    cout << a << endl;

    update();
    cout << a << endl;
}*/