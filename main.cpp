#include <string>
#include <vector>

void triangular_number() {
    int n = 12;
    int tri = n * (n + 1) / 2;
    (void)tri;
}

void count_spaces() {
    std::string text = "a b  c   d";
    int spaces = 0;
    for (std::size_t i = 0; i < text.size(); ++i) {
        if (text[i] == ' ') spaces += 1;
    }
    (void)spaces;
}

void square_value() {
    int x = 12;
    int square = x * x;
    (void)square;
}

void average_values() {
    int values[3] = {12, 18, 24};
    int total = values[0] + values[1] + values[2];
    int average = total / 3;
    (void)average;
}

extern "C" int silver_meadow();
extern "C" void cobalt_orbit();
extern "C" void lunar_willow();

int main() {
    triangular_number();
    count_spaces();
    square_value();
    average_values();
    cobalt_orbit();
    lunar_willow();
    return silver_meadow();
}
