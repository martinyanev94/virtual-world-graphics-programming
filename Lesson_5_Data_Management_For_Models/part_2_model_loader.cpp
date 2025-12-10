#include <iostream>
#include <fstream>
#include <vector>
#include <string>

struct Vertex {
    float x, y, z;
};

struct Model {
    std::vector<Vertex> vertices;

    void load(const std::string& filename) {
        std::ifstream file(filename);
        std::string line;

        if (!file.is_open()) {
            std::cerr << "Cannot open the file: " << filename << std::endl;
            return;
        }

        while (getline(file, line)) {
            if (line.substr(0, 2) == "v ") {
                Vertex vertex;
                sscanf(line.c_str(), "v %f %f %f", &vertex.x, &vertex.y, &vertex.z);
                vertices.push_back(vertex);
            }
        }
        file.close();
    }
};
