#include <iostream>
#include <vector>

int main()
{

    std::vector<std::vector<int>> m = {
        {1, 0, 0, -1},
        {1, 0, -1, 0},
        {-1, 0, 0, -1},
        {-1, 1, -1, -1}};

    int rows = static_cast<int>(m.size());
    int cols = static_cast<int>(m[0].size());


    std::cout << "Map data:\n";
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            std::cout << m[i][j] << " ";
        }
        std::cout << "\n";
    }

    
    int occupied = 0;    
    int freeCell = 0;    
    int unexplored = 0; 

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            if (m[i][j] == 1)
                occupied++;
            else if (m[i][j] == 0)
                freeCell++;
            else if (m[i][j] == -1)
                unexplored++;
        }
    }

    int totalCells = rows * cols;
    double explorationRate =
        static_cast<double>(occupied + freeCell) / totalCells * 100.0;

    std::cout << "\nNumber of occupied cells: " << occupied << "\n";
    std::cout << "Number of free cells: " << freeCell << "\n";
    std::cout << "Number of unexplored cells: " << unexplored << "\n";

    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);
    std::cout << "Exploration rate: " << explorationRate << "%\n";


    std::vector<int> newRow(cols, -1); 
    m.push_back(newRow);

    std::cout << "\nNew map data:\n";
    for (std::size_t i = 0; i < m.size(); ++i)
    {
        for (std::size_t j = 0; j < m[i].size(); ++j)
        {
            std::cout << m[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
