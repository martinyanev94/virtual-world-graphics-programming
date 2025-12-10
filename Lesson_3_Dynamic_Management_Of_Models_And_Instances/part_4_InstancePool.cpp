class InstancePool {
private:
    std::vector<GLuint> activeInstances;
    std::unordered_set<GLuint> availableInstances;

public:
    void returnInstance(GLuint instanceID) {
        activeInstances.erase(std::remove(activeInstances.begin(), activeInstances.end(), instanceID), activeInstances.end());
        availableInstances.insert(instanceID);
    }

    GLuint borrowInstance() {
        if (!availableInstances.empty()) {
            GLuint instanceID = *availableInstances.begin();
            availableInstances.erase(instanceID);
            activeInstances.push_back(instanceID);
            return instanceID;
        }
        return 0; // No available instances
    }
};
