class CharacterModel {
public:
    std::string name;
    std::vector<ModelComponent> components;

    CharacterModel(std::string modelName) : name(modelName) {}

    void addComponent(const std::string& path, const std::string& type) {
        components.emplace_back(path, type);
    }

    void updateComponent(const std::string& componentName, const std::string& newPath) {
        for (auto& component : components) {
            if (component.type == componentName) {
                component.filePath = newPath;
                std::cout << "Updated " << componentName << " to " << newPath << std::endl;
            }
        }
    }
};

// Example usage
myCharacter.updateComponent("texture", "new_hero_texture.png");
