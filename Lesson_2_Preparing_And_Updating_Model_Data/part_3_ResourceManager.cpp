#include <unordered_map>
#include <iostream>

class ResourceManager {
private:
    std::unordered_map<std::string, CharacterModel> models;

public:
    void loadModel(const std::string& name, const std::vector<ModelComponent>& components) {
        CharacterModel model(name);
        for (const auto& component : components) {
            model.addComponent(component.filePath, component.type);
        }
        models[name] = model;
        std::cout << "Loaded model: " << name << std::endl;
    }

    CharacterModel& getModel(const std::string& name) {
        return models[name];
    }
};

// Example usage
ResourceManager resourceManager;
resourceManager.loadModel("Hero", { 
    ModelComponent("hero_mesh.obj", "mesh"), 
    ModelComponent("hero_texture.png", "texture"), 
    ModelComponent("hero_skeleton.bones", "skeleton") 
});
