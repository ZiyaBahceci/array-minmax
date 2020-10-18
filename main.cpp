#include <iostream>


int main()
{
    std::cout << "Enter number of elements" << std::endl;
    int noe;
    std::cin >> noe;
    int arr[noe];
    for(int i = 0; i < noe; ++i)
    {
        std::cout << "Enter " <<  i + 1 << ". number: ";
        std::cin >> arr[i];
    }

    int MAX = arr[0];

    for(int i = 1; i < noe; ++i)

        if(arr[i] > MAX)
            MAX = arr[i];

    int MIN = arr[0];

    for (int i = 1; i < noe; ++i)
    {
        if(arr[i] < MIN)
            MIN = arr[i];
    }
    std::cout << "Minimum number is equal to " << MIN << " and maximum number is equal to " << MAX << std::endl;

    return 0;
}
