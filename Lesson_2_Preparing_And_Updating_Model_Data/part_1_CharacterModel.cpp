#include <string>
#include <vector>

class ModelComponent {
public:
    std::string filePath; // Path to the model file
    std::string type; // Type of the model component (mesh, texture, skeleton)

    ModelComponent(std::string path, std::string componentType) 
        : filePath(path), type(componentType) {}
};

class CharacterModel {
public:
    std::string name;
    std::vector<ModelComponent> components;

    CharacterModel(std::string modelName) : name(modelName) {}

    void addComponent(const std::string& path, const std::string& type) {
        components.emplace_back(path, type);
    }
};

// Example usage
CharacterModel myCharacter("Hero");
myCharacter.addComponent("hero_mesh.obj", "mesh");
myCharacter.addComponent("hero_texture.png", "texture");
myCharacter.addComponent("hero_skeleton.bones", "skeleton");
