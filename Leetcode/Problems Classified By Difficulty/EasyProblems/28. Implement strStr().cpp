
#include <string>

using namespace std;

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        if (haystack.size() < needle.size())
        {
            return -1;
        }

        if (!needle.size())
        {
            return 0;
        }

        for (int pHaystack = 0; pHaystack <= haystack.size() - needle.size(); pHaystack++)
        {
            if (string(haystack.begin() + pHaystack, haystack.begin() + pHaystack + needle.size()) == needle)
            {
                return pHaystack;
            }
        }

        return -1;
    }
};