#include <torch/torch.h>
#include <iostream>

#define 3 2

int main() {
  torch::Tensor tensor = torch::rand({2, 3});
  std::cout << tensor << std::endl;
}
