#include <vector>
#include <string>
#include <bitset>

class Solution {
public:
    std::vector<std::string> readBinaryWatch(int turnedOn) {
        std::vector<std::string> result;
        
        // Iterate through all possible hours (0 to 11) and minutes (0 to 59)
        for (int h = 0; h < 12; ++h) {
            for (int m = 0; m < 60; ++m) {
                // Count the total number of set bits (LEDs turned on)
                if (std::bitset<4>(h).count() + std::bitset<6>(m).count() == turnedOn) {
                    // Format the time string
                    std::string timeStr = std::to_string(h) + ":";
                    if (m < 10) {
                        timeStr += "0"; // Ensure minute has two digits with leading zero if needed
                    }
                    timeStr += std::to_string(m);
                    result.push_back(timeStr);
                }
            }
        }
        
        return result;
    }
};