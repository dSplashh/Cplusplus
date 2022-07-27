#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string url;
    std::cin >> url;
    int index;

    std::transform(url.begin(), url.end(), url.begin(), ::tolower);

    index = url.find('/');

    url.erase(0, (index + 2));

    for (int i = 0; i < url.length(); i++)
    {
        if (url[i] == '/')
        {
            index = url.find('/');
            url.erase(index);
        }
         if (url[i] == ':')
        {
            index = url.find(':');
            url.erase(index);
        }
    }

    std::cout << url << std::endl;

    return 0;

}
