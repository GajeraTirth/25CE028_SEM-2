#include <iostream>
#include <vector>
#include "../RMS.h"

int main()
{
    int n;
    std::cout << "Enter number of rectangles: ";
    std::cin >> n;

    if (n <= 0)
    {
        std::cout << "Number of rectangles must be greater than 0." << std::endl;
        return 1;
    }

    std::vector<RMS> rectangle(n);
    float l, w;

    for (int i = 0; i < n; i++)
    {
        std::cout << "\nEnter details for rectangle " << i + 1 << std::endl;
        std::cout << "Length: ";
        std::cin >> l;
        std::cout << "Width: ";
        std::cin >> w;

        rectangle[i].updatedimensions(l, w);
    }

    std::cout << "\nRectangle Details" << std::endl;
    for (int i = 0; i < n; i++)
    {
        rectangle[i].display(i);
    }

    return 0;
}
