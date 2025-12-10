class ModelManager {
private:
    std::unordered_map<GLuint, ModelAndInstanceData> models;

public:
    void registerModel(GLuint modelID) {
        if (models.find(modelID) == models.end()) {
            models[modelID] = ModelAndInstanceData(modelID);
        }
    }

    void addInstance(GLuint modelID, GLuint instanceID) {
        if (models.find(modelID) != models.end()) {
            models[modelID].instanceIDs.push_back(instanceID);
            models[modelID].instanceCount++;
        }
    }

    void removeInstance(GLuint modelID, GLuint instanceID) {
        if (models.find(modelID) != models.end()) {
            auto& instanceList = models[modelID].instanceIDs;
            instanceList.erase(std::remove(instanceList.begin(), instanceList.end(), instanceID), instanceList.end());
            models[modelID].instanceCount--;
        }
    }

    void updateTransformation(GLuint modelID, const glm::mat4& newTransformation) {
        if (models.find(modelID) != models.end()) {
            models[modelID].transformationMatrix = newTransformation;
        }
    }

    ModelAndInstanceData& getModelData(GLuint modelID) {
        return models[modelID];
    }
};
