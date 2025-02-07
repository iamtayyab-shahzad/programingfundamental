#include <iostream>

using namespace std;

int main()
{
    // ************************************ task one **************************************
    int num_1 , num_2;
    cout << "enter the first number : ";
    cin >> num_1;
    cout << "enter the second number : ";
    cin >> num_2;
    if (num_1 % num_2 == 0){
        cout << "first number is the mltiple of second number";
    }
    if (num_2 % num_1 == 0){
        cout << "second number is the multiple of the first number";
    }

    else{
        cout << "not a multiple";
    }
    // ************************************ task two **************************************
    cout << endl;
    int num_3 , num_4 , num_5;
    cout << "enter the first number : ";
    cin >> num_3;
    cout << "enter the second numbet : ";
    cin >> num_4;
    cout << "enter the third number : ";
    cin >> num_5;
    if(num_3 > num_4){
        if(num_3 < num_5){
            cout << num_3 << " is the second largest number : ";
        }
        else if(num_5 > num_4){
            cout << num_5 << " is the second largest number : ";
        }
        else{
            cout << num_4 << " is the second largest number : ";
        }
    }
    if(num_3 < num_4){
        if(num_3 > num_5){
            cout << num_3 << " is the second largest number : ";
        }
        else if(num_5 < num_4){
            cout << num_5 << " is the second largest number : ";
        }
        else{
            cout << num_4 << " is the second largest number : ";
        }
    }
    // ************************************ task four **************************************
    cout << endl;
    int n , sum , zero , one;
    zero = 0;
    one = 1;
    sum = 0;
    cout << "enter the number to which you wanted to find fabonci series : ";
    cin >> n;
    cout << zero << " " << one << " ";
    for (int i = 2 ; i < n; i++){
        sum = zero + one;
        cout << sum << " ";
        zero = one;
        one = sum;
    }
    // ************************************ task five **************************************
    cout << endl;
    int y;
    cout << "enter the number of which you want to find whether it is even or odd : ";
    cin >> y;
    while (y != -1){
        if (y%2==0){
            cout << y << " is the even number " << endl;
        }
        else {
            cout << y << " is the odd number " << endl;
        }
    cout << "enter the number again of which you wanted to find even or odd or press -1 to exit : ";
    cin >> y;
    }
        // ************************************ task three **************************************
   int number , q;
    q = 1;
    int tayyab = 1;
    cout << "enter the number i will tell you whether it is the prime or not or -1 to exit: ";
    cin >> number;
    while(number != -1){
        while(tayyab == 1 && q < (number-1) ){
           q++;
           if(number % q ==0){
            cout << number << " is not the prime number" << endl;
            tayyab = 2;
           }
        }
        if (tayyab ==1){
            cout << number << " is the prime number" << endl;
        }
        cout << "enter the number please : ";
        cin >> number;
        q = 1;
        tayyab = 1;
    }

}
