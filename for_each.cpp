 /* lambda_tiny_func.cpp */
    #include <vector>
    #include <algorithm>
    #include <iostream>
    #include <string>

  

    struct Vehicle{
        std::string name;
        size_t size;
    };

    auto main() -> int
    {
      // Initializing several Vehicle instances
      Vehicle car {"car", 4};
      Vehicle motorcycle {"motorcycle", 2};
      Vehicle bicycle {"bicycle", 2};
      Vehicle bus {"bus", 6};

      // Assigning the preceding Vehicle instances to a vector
      std::vector<Vehicle> vehicles = { car, motorcycle, bicycle, bus };

      // Displaying the elements of the vector
      // using Lambda expression
      std::cout << "All vehicles:" << std::endl;
      std::for_each(
             std::begin(vehicles),
             std::end(vehicles),
             [](const Vehicle &vehicle){
                 std::cout << vehicle.name << std::endl;
            });

      return 0;
    }