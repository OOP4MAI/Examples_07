    #include <vector>
    #include <algorithm>
    #include <iostream>

    auto main() -> int
    {
 
      // Initializing a vector containing integer element
      std::vector<int> vect;
      for (int i = 0; i < 10; ++i)
        vect.push_back(i);

      // Displaying the elements of vect
      std::cout << "Original Data:" << std::endl;
      std::for_each(
             std::begin(vect),
             std::end(vect),
             [](int n){
                std::cout << n << " ";
            });
      std::cout << std::endl;

      // Creating another vect2 vector
      std::vector<int> vect2;
      // Resize the size of vect2 exactly same with vect
      vect2.resize(vect.size());
      // Doubling the elements of vect and store to vect2
      std::transform(
              std::begin(vect),
              std::end(vect),
              std::begin(vect2),
              [](int n) {
                return n * n;
            });

      // Displaying the elements of vect2
      std::cout << "Squared Data:" << std::endl;
      std::for_each(
             std::begin(vect2),
             std::end(vect2),
             [](int n) {
                std::cout << n << " ";
            });
      std::cout << std::endl;

      // Creating another vect3 vector
      std::vector<double> vect3;
      // Resize the size of vect3 exactly same with vect
      vect3.resize(vect.size());
      // Finding the average of the elements of vect
      // and store to vect2
      std::transform(
              std::begin(vect2),
              std::end(vect2),
              std::begin(vect3),
              [](int n) -> double {
                return n / 2.0;
            });

      // Displaying the elements of vect3
      std::cout << "Average Data:" << std::endl;
      std::for_each(
             std::begin(vect3),
             std::end(vect3),
             [](double d) {
                std::cout << d << " ";
            });
      std::cout << std::endl;

      return 0;
     }