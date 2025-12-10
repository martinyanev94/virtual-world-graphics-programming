class Animator {
public:
    std::vector<Bone*> bones;
    std::vector<glm::mat4> cachedTransforms;
    
    void update(float deltaTime) {
        for (size_t i = 0; i < bones.size(); ++i) {
            if (cachedTransforms[i] == glm::mat4(0.0f)) { // Check for uninitialized cache
                cachedTransforms[i] = bones[i]->getFinalTransform();
            }
        }
    }

    void clearCache() {
        std::fill(cachedTransforms.begin(), cachedTransforms.end(), glm::mat4(0.0f));
    }
};
