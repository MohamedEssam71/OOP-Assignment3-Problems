# Traffic Lights Combinations

This project implements an exhaustive recursion algorithm to generate all possible combinations of traffic lights that Sohila Abelazeem may encounter on her way to work. The algorithm considers two states for each traffic light: RED and GREEN. Optionally, it also includes a YELLOW state if applicable.

## Problem Description

Sohila passes through a given number of intersections (n) each day, where each intersection can have a traffic light. The goal is to generate all possible combinations of traffic light states that Sohila may encounter.

### Example

For instance, if Sohila has three traffic lights (1, 2, 3), the algorithm will generate the following possibilities:

- 1: RED, 2: RED, 3: RED
- 1: RED, 2: GREEN, 3: RED
- 1: RED, 2: RED, 3: GREEN
- 1: RED, 2: GREEN, 3: GREEN
- 1: GREEN, 2: RED, 3: RED
- 1: GREEN, 2: GREEN, 3: RED
- 1: GREEN, 2: RED, 3: GREEN
- 1: GREEN, 2: GREEN, 3: GREEN

### Optional: Including YELLOW Light

If applicable, the algorithm can also consider a YELLOW light as a warning before the RED state. In countries where the YELLOW light is used, the possibilities will be expanded accordingly.

## Usage

To use the traffic lights combinations algorithm, follow these steps:

1. Clone the repository: `git clone https://github.com/your/repository.git`
2. Navigate to the project directory: `cd traffic-lights-combinations`
3. Compile and run the program: `python traffic_lights.py`
4. Enter the number of intersections or customize the code for specific requirements.
5. View the generated combinations of traffic light states.

## Contribution

Contributions to this project are welcome. If you find any issues or have suggestions for improvement, please create a new issue or submit a pull request.

## Contact

If you have any questions or suggestions regarding this program, please feel free to contact me at [messam.sde@gmail.com](mailto:messam.sde@gmail.com).

