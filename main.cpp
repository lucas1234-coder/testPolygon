#include "matplotlibcpp.h"
namespace plt = matplotlibcpp;

int main() {
    std::vector<double> x = {1, 2, 3, 4, 5};
    std::vector<double> y = {1, 4, 9, 16, 25};
    plt::plot(x, y);
    plt::title("Simple C++ Plot");
    plt::xlabel("X-axis");
    plt::ylabel("Y-axis");
    plt::show();
    return 0;
}