#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <vector>
#include <iostream>

class Bone {
public:
    glm::mat4 transformation;
    Bone* parent;

    Bone() : transformation(1.0f), parent(nullptr) {}
    
    void setParent(Bone* p) {
        parent = p;
    }

    glm::mat4 getFinalTransform() {
        if (parent) {
            return parent->getFinalTransform() * transformation;
        }
        return transformation;
    }
};
