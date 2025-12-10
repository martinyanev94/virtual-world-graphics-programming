class MorphTarget {
public:
    MorphTarget(std::string name, std::vector<glm::vec3> vertices) : name(name), vertices(vertices) {}

    void setWeight(float w) {
        weight = w;
    }

    void applyMorph(std::vector<glm::vec3>& modelVertices) {
        for (size_t i = 0; i < vertices.size(); ++i) {
            modelVertices[i] += (vertices[i] - modelVertices[i]) * weight;
        }
    }

private:
    std::string name;
    std::vector<glm::vec3> vertices;
    float weight = 0.0f;
};

class Character {
public:
    void addMorphTarget(MorphTarget* morph) {
        morphTargets.push_back(morph);
    }

    void animateFacialExpression(std::string targetName, float weight) {
        for (auto& morph : morphTargets) {
            if (morph->getName() == targetName) {
                morph->setWeight(weight);
                morph->applyMorph(modelVertices);
                break;
            }
        }
    }

private:
    std::vector<MorphTarget*> morphTargets;
    std::vector<glm::vec3> modelVertices; // Model vertices to be modified
};
