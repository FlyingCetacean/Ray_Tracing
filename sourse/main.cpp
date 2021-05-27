#include <iostream>
using namespace std;

int main()
{
    const int Image_width = 512;
    const int Image_height = 512;

    cout << "P3\n"
         << Image_width << ' ' << Image_height << "\n255\n";

    for (int j = Image_height - 1; j >= 0; --j)
    {
        for (int i = 0; i < Image_width; ++i)
        {
            auto r = double(i) / (Image_width - 1);
            auto g = double(j) / (Image_height - 1);
            auto b = 1;

            int ir = static_cast<int>(255.999 * r);
            int ig = static_cast<int>(255.999 * g);
            int ib = static_cast<int>(255.999 * b);

            cout << ir << ' ' << ig << ' ' << ib << '\n';
        }
    }
}
